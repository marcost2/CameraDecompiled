
/* qcamera::QCamera3HeapMemory::getPtrLocked(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::getPtrLocked(QCamera3HeapMemory *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 4)) {
    return *(undefined4 *)(this + param_1 * 4 + 0x408);
  }
  if (*(int *)(*(int *)(DAT_00099d50 + 0x99d22) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_00099d58 + 0x99d3e,0x18e,DAT_00099d54 + 0x99d36);
    return 0xffffffb5;
  }
  return 0xffffffb5;
}

