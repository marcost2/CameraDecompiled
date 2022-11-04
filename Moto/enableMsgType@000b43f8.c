
/* qcamera::QCamera2HardwareInterface::enableMsgType(int) */

int __thiscall
qcamera::QCamera2HardwareInterface::enableMsgType(QCamera2HardwareInterface *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  QCameraParametersIntf *this_00;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::isUBWCEnabled(this_00);
  if (iVar1 != 0) {
    iVar1 = 0;
    if ((-1 < param_1 << 0x1b) || ((*(uint *)(this + 0x4b4) & 0x10) != 0)) goto LAB_000b4476;
    iVar1 = QCameraParametersIntf::isZSLMode(this_00);
    if ((iVar1 == 0) || (iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 != 0))
    {
      piVar2 = (int *)(this + 0x9bc);
    }
    else {
      piVar2 = (int *)(this + 0x9b4);
    }
    iVar1 = 0;
    if ((*piVar2 == 0) || (*(int **)(this + 0x9d4) == (int *)0x0)) goto LAB_000b4476;
    if (*(char *)(*piVar2 + 0xc) != '\0') {
      iVar1 = (**(code **)(**(int **)(this + 0x9d4) + 0x14))();
      if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000b44ac + 0xb4458) + 0x20) != 0)) {
        mm_camera_debug_log(1,1,DAT_000b44b4 + 0xb4470,0x1044,DAT_000b44b0 + 0xb4468);
      }
      goto LAB_000b4476;
    }
  }
  iVar1 = 0;
LAB_000b4476:
  uVar3 = *(uint *)(this + 0x4b4);
  *(uint *)(this + 0x4b4) = uVar3 | param_1;
  if (*(int *)(*(int *)(DAT_000b44b8 + 0xb4486) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b44c0 + 0xb44a4,0x104a,DAT_000b44bc + 0xb4494,param_1,
                        uVar3 | param_1,iVar1);
  }
  return iVar1;
}

