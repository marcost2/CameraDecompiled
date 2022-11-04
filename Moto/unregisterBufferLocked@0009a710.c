
/* qcamera::QCamera3GrallocMemory::unregisterBufferLocked(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::unregisterBufferLocked(QCamera3GrallocMemory *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_24;
  int local_20;
  
  piVar3 = *(int **)(DAT_0009a7b8 + 0x9a726);
  local_20 = *piVar3;
  munmap(*(void **)(this + param_1 * 4 + 0x408),*(size_t *)(this + param_1 * 0x10 + 0x14));
  *(undefined4 *)(this + param_1 * 4 + 0x408) = 0;
  local_24 = *(undefined4 *)(this + param_1 * 0x10 + 0x10);
  piVar1 = (int *)(this + param_1 * 0x10 + 0xc);
  uVar2 = ioctl(*piVar1,0xc0044901,&local_24);
  if ((0x7fffffff < uVar2) && (*(int *)(*(int *)(DAT_0009a7bc + 0x9a764) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0009a7c4 + 0x9a77c,0x371,DAT_0009a7c0 + 0x9a774);
  }
  close(*piVar1);
  *(undefined8 *)(this + param_1 * 0x10 + 8) = 0;
  *(undefined8 *)(this + param_1 * 0x10 + 0x10) = 0;
  *piVar1 = -1;
  *(undefined4 *)(this + param_1 * 4 + 0x70c) = 0;
  *(undefined4 *)(this + param_1 * 4 + 0x60c) = 0;
  *(undefined4 *)(this + param_1 * 4 + 0x508) = 0xffffffff;
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  if (*piVar3 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

