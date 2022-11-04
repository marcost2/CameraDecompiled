
/* qcamera::QCameraGrallocMemory::getPtr(unsigned int) const */

undefined4 __thiscall qcamera::QCameraGrallocMemory::getPtr(QCameraGrallocMemory *this,uint param_1)

{
  if (param_1 < (byte)this[0xa88]) {
    return **(undefined4 **)(this + param_1 * 4 + 0x980);
  }
  if (*(int *)(*(int *)(DAT_000c8204 + 0xc81d6) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c820c + 0xc81f2,0x9a7,DAT_000c8208 + 0xc81ea);
    return 0xffffffb5;
  }
  return 0xffffffb5;
}

