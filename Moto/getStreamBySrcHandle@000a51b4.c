
/* qcamera::QCamera3ReprocessChannel::getStreamBySrcHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::getStreamBySrcHandle(QCamera3ReprocessChannel *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)(this + 0x44) != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(this + uVar1 * 4 + 0xd8) == param_1) {
        return *(undefined4 *)(this + uVar1 * 4 + 0x24);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x44));
  }
  return 0;
}

