
/* qcamera::QCamera3HeapMemory::getPtrLocked(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::getPtrLocked(QCamera3HeapMemory *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 4)) {
    return *(undefined4 *)(this + param_1 * 4 + 0x408);
  }
  if (*(int *)(*(int *)(DAT_00053344 + 0x53316) + 0x20) != 0) {
    mm_camera_debug_log();
    return 0xffffffb5;
  }
  return 0xffffffb5;
}

