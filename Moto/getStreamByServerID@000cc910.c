
/* qcamera::QCameraChannel::getStreamByServerID(unsigned int) */

undefined4 __thiscall
qcamera::QCameraChannel::getStreamByServerID(QCameraChannel *this,uint param_1)

{
  QCameraStream *this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    this_00 = *(QCameraStream **)(*(int *)(this + 0x18) + uVar2 * 4);
    if (this_00 != (QCameraStream *)0x0) {
      uVar1 = QCameraStream::getMyServerID(this_00);
      if (uVar1 == param_1) {
        return *(undefined4 *)(*(int *)(this + 0x18) + uVar2 * 4);
      }
      uVar1 = *(uint *)(this + 0x1c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < uVar1);
  return 0;
}

