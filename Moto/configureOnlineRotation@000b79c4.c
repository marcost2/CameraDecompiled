
/* qcamera::QCamera2HardwareInterface::configureOnlineRotation(qcamera::QCameraChannel&) */

int __thiscall
qcamera::QCamera2HardwareInterface::configureOnlineRotation
          (QCamera2HardwareInterface *this,QCameraChannel *param_1)

{
  QCameraStream *this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  QCameraParametersIntf *this_01;
  byte bVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = 0;
    bVar4 = 0;
    do {
      this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(param_1,uVar3);
      if ((this_00 != (QCameraStream *)0x0) &&
         ((iVar1 = QCameraStream::getMyType(this_00), iVar1 == 3 ||
          (iVar1 = QCameraStream::getMyType(this_00), iVar1 == 8)))) {
        uVar3 = QCameraStream::getMyServerID(this_00);
        this_01 = (QCameraParametersIntf *)(this + 0x4ac);
        uVar2 = QCameraParametersIntf::getJpegRotation(this_01);
        iVar1 = QCameraParametersIntf::getDeviceRotation(this_01);
        iVar1 = QCameraParametersIntf::addOnlineRotation(this_01,uVar2,uVar3,iVar1);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(*(int *)(DAT_000b7a88 + 0xb7a50) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000b7a90 + 0xb7a6a,0x1845,DAT_000b7a8c + 0xb7a60,iVar1);
          return iVar1;
        }
        return iVar1;
      }
      bVar4 = bVar4 + 1;
      uVar3 = (uint)bVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x1c));
  }
  if (*(int *)(*(int *)(DAT_000b7a7c + 0xb7a00) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000b7a84 + 0xb7a18,0x183c,DAT_000b7a80 + 0xb7a10);
  }
  return -0x16;
}

