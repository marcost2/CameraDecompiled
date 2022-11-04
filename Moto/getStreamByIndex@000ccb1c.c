
/* qcamera::QCameraChannel::getStreamByIndex(unsigned int) */

undefined4 __thiscall qcamera::QCameraChannel::getStreamByIndex(QCameraChannel *this,uint param_1)

{
  if ((param_1 < 8) && (param_1 < *(uint *)(this + 0x1c))) {
    return *(undefined4 *)(*(int *)(this + 0x18) + param_1 * 4);
  }
  return 0;
}

