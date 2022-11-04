
/* qcamera::QCamera2HardwareInterface::configureAEBracketing() */

int __thiscall
qcamera::QCamera2HardwareInterface::configureAEBracketing(QCamera2HardwareInterface *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000b6868 + 0xb6804);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6870 + 0xb681c,0x155a,DAT_000b686c + 0xb6814);
  }
  iVar1 = QCameraParametersIntf::setAEBracketing((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar1 == 0) {
    if (*(int *)(iVar5 + 0x28) == 0) {
      return 0;
    }
    uVar4 = 0x1562;
    iVar5 = DAT_000b687c + 0xb6852;
    uVar2 = 3;
    iVar3 = DAT_000b6880 + 0xb685e;
  }
  else {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return iVar1;
    }
    uVar2 = 1;
    uVar4 = 0x155f;
    iVar5 = DAT_000b6874 + 0xb683a;
    iVar3 = DAT_000b6878 + 0xb6842;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar5);
  return iVar1;
}

