
/* qcamera::QCamera2HardwareInterface::processAEInfo(cam_3a_params_t&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::processAEInfo
          (QCamera2HardwareInterface *this,cam_3a_params_t *param_1)

{
  QCamera2HardwareInterface QVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  QCameraParametersIntf *this_00;
  undefined4 uVar8;
  
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  uVar6 = *(undefined4 *)param_1;
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  this[0x1eb8] = (QCamera2HardwareInterface)0x1;
  *(undefined4 *)(this + 0x1ebc) = uVar2;
  *(undefined4 *)(this + 0x1ea0) = uVar5;
  *(undefined4 *)(this + 0x1e9c) = uVar6;
  *(undefined4 *)(this + 0x1e98) = uVar7;
  *(undefined4 *)(this + 0x1e90) = uVar8;
  if ((this[0x1eb9] != (QCamera2HardwareInterface)0x0) &&
     (this[0x1eba] != (QCamera2HardwareInterface)0x0)) {
    this[0x1eb8] = (QCamera2HardwareInterface)0x0;
    this[0x1eb9] = (QCamera2HardwareInterface)0x0;
    this[0x1eba] = (QCamera2HardwareInterface)0x0;
    notifyPostProcStatus(this);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  QCameraParametersIntf::updateAEInfo(this_00,param_1);
  iVar3 = QCameraParametersIntf::isInstantAECEnabled(this_00);
  if ((iVar3 != 0) &&
     (((*(int *)(param_1 + 0xc) != 0 ||
       ((iVar3 = QCameraParametersIntf::isInstantCaptureEnabled(this_00), iVar3 != 0 &&
        (QVar1 = this[0x1c21], uVar4 = QCameraParametersIntf::getAecFrameBoundValue(this_00),
        uVar4 <= (byte)QVar1)))) ||
      ((iVar3 = QCameraParametersIntf::isInstantAECEnabled(this_00), iVar3 != 0 &&
       (QVar1 = this[0x1c21], uVar4 = QCameraParametersIntf::getAecSkipDisplayFrameBound(this_00),
       uVar4 <= (byte)QVar1)))))) {
    if (*(int *)(*(int *)(DAT_000b9a48 + 0xb99e0) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000b9a50 + 0xb99f8,0x1de0,DAT_000b9a4c + 0xb99f0);
    }
    QCameraParametersIntf::setInstantAEC(this_00,'\0',true);
    this[0x1c21] = (QCamera2HardwareInterface)0x0;
  }
  return 0;
}

