
/* qcamera::QCamera2HardwareInterface::transAwbMetaToParams(cam_awb_params_t&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::transAwbMetaToParams
          (QCamera2HardwareInterface *this,cam_awb_params_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  piVar4 = *(int **)(DAT_000ba748 + 0xba6b0);
  iVar1 = *piVar4;
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined8 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1ea8) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x1ea4) = uVar2;
  this[0x1eb9] = (QCamera2HardwareInterface)0x1;
  *(undefined4 *)(this + 0x1eb4) = uVar3;
  *(undefined8 *)(this + 0x1eac) = uVar5;
  if ((this[0x1eb8] != (QCamera2HardwareInterface)0x0) &&
     (this[0x1eba] != (QCamera2HardwareInterface)0x0)) {
    this[0x1eb8] = (QCamera2HardwareInterface)0x0;
    this[0x1eb9] = (QCamera2HardwareInterface)0x0;
    this[0x1eba] = (QCamera2HardwareInterface)0x0;
    notifyPostProcStatus(this);
  }
  QCameraParametersIntf::updateAWBParams((QCameraParametersIntf *)(this + 0x4ac),param_1);
  if (*piVar4 == iVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

