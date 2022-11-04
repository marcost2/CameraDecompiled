
/* qcamera::QCameraHeapMemory::getPtr(unsigned int) const */

undefined4 __thiscall qcamera::QCameraHeapMemory::getPtr(QCameraHeapMemory *this,uint param_1)

{
  if (param_1 < (byte)this[5]) {
    return *(undefined4 *)(this + param_1 * 4 + 0x618);
  }
  if (*(int *)(*(int *)(DAT_000c5ad8 + 0xc5aaa) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c5ae0 + 0xc5ac6,0x328,DAT_000c5adc + 0xc5abe);
    return 0xffffffb5;
  }
  return 0xffffffb5;
}

