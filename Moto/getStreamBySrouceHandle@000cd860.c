
/* qcamera::QCameraReprocessChannel::getStreamBySrouceHandle(unsigned int) */

undefined4 __thiscall
qcamera::QCameraReprocessChannel::getStreamBySrouceHandle
          (QCameraReprocessChannel *this,uint param_1)

{
  uint uVar1;
  
  if (*(uint *)(this + 0x1c) != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(this + uVar1 * 4 + 0x34) == param_1) {
        return *(undefined4 *)(*(int *)(this + 0x18) + uVar1 * 4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x1c));
  }
  return 0;
}

