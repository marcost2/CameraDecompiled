
/* qcamera::QCamera2HardwareInterface::longShot() */

void __thiscall qcamera::QCamera2HardwareInterface::longShot(QCamera2HardwareInterface *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  QCameraPicChannel **ppQVar4;
  int *piVar5;
  longlong local_28;
  undefined8 uStack32;
  int local_18;
  
  piVar5 = *(int **)(DAT_000b7e5c + 0xb7df0);
  local_18 = *piVar5;
  uVar1 = QCameraParametersIntf::getNumOfSnapshots((QCameraParametersIntf *)(this + 0x4ac));
  iVar2 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(this + 0x4ac));
  ppQVar4 = (QCameraPicChannel **)(this + 0x9b8);
  if (iVar2 != 0) {
    ppQVar4 = (QCameraPicChannel **)(this + 0x9b4);
  }
  if (*ppQVar4 == (QCameraPicChannel *)0x0) {
    if (*(int *)(*(int *)(DAT_000b7e60 + 0xb7e2e) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b7e68 + 0xb7e46,0x1897,DAT_000b7e64 + 0xb7e3e);
    }
    uVar3 = 0xffffffed;
  }
  else {
    uStack32 = 0;
    local_28 = (ulonglong)uVar1 << 0x20;
    uVar3 = QCameraPicChannel::takePicture(*ppQVar4,(mm_camera_req_buf_t *)&local_28);
  }
  if (*piVar5 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

