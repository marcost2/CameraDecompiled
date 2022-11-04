
/* qcamera::QCamera3HeapMemory::deallocate() */

void __thiscall qcamera::QCamera3HeapMemory::deallocate(QCamera3HeapMemory *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_2c;
  int local_28;
  
  piVar1 = *(int **)(DAT_0009a310 + 0x9a27e);
  local_28 = *piVar1;
  if (*(int *)(this + 4) != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      munmap(*(void **)(this + iVar3 + 0x408),*(size_t *)(this + iVar3 * 4 + 0x14));
      *(undefined4 *)(this + iVar3 + 0x408) = 0;
      if (-1 < *(int *)(this + iVar3 * 4 + 8)) {
        close(*(int *)(this + iVar3 * 4 + 8));
        *(undefined4 *)(this + iVar3 * 4 + 8) = 0xffffffff;
      }
      if (-1 < *(int *)(this + iVar3 * 4 + 0xc)) {
        local_2c = *(undefined4 *)(this + iVar3 * 4 + 0x10);
        ioctl(*(int *)(this + iVar3 * 4 + 0xc),0xc0044901,&local_2c);
        close(*(int *)(this + iVar3 * 4 + 0xc));
        *(undefined4 *)(this + iVar3 * 4 + 0xc) = 0xffffffff;
      }
      *(undefined4 *)(this + iVar3 * 4 + 0x10) = 0;
      *(undefined4 *)(this + iVar3 * 4 + 0x14) = 0;
      *(undefined4 *)(this + iVar3 + 0x508) = 0xffffffff;
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

