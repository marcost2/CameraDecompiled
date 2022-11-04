
/* qcamera::QCamera3Channel::getStreamByIndex(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Channel::getStreamByIndex(QCamera3Channel *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0x44)) {
    return *(undefined4 *)(this + param_1 * 4 + 0x24);
  }
  return 0;
}

