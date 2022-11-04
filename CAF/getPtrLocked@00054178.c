
/* qcamera::QCamera3GrallocMemory::getPtrLocked(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::getPtrLocked(QCamera3GrallocMemory *this,uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x40) {
    if (param_1 < *(uint *)(this + 0x80c)) {
      iVar1 = *(int *)(*(int *)(DAT_00054214 + 0x541b2) + 0x20);
    }
    else {
      if (*(int *)(this + param_1 * 0x10 + 0x10) != 0) {
        return *(undefined4 *)(this + param_1 * 4 + 0x408);
      }
      iVar1 = *(int *)(*(int *)(DAT_00054220 + 0x541e6) + 0x20);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00054208 + 0x54186) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return 0;
}

