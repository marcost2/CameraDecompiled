
/* qcamera::QCameraStreamMemory::getPtr(unsigned int) const */

undefined4 __thiscall qcamera::QCameraStreamMemory::getPtr(QCameraStreamMemory *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < (byte)this[5]) {
    if (*(undefined4 **)(this + param_1 * 4 + 0x61c) == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined4 **)(this + param_1 * 4 + 0x61c);
    }
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_000c65a8 + 0xc657c) + 0x20) == 0) {
    return 0xffffffb5;
  }
  mm_camera_debug_log(1,1,DAT_000c65b0 + 0xc6598,0x519,DAT_000c65ac + 0xc6590);
  return 0xffffffb5;
}

