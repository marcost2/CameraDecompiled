
/* qcamera::QCamera3HeapMemory::deallocate() */

void qcamera::QCamera3HeapMemory::deallocate(allocator *param_1,__tree_node *param_2,uint param_3)

{
  QCamera3HeapMemory *this;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = 0;
    uVar1 = 0;
    do {
      this = (QCamera3HeapMemory *)
             munmap(*(void **)(param_1 + uVar1 * 4 + 0x408),*(size_t *)(param_1 + iVar2 + 0x14));
      *(undefined4 *)(param_1 + uVar1 * 4 + 0x408) = 0;
      deallocOneBuffer(this,(QCamera3MemInfo *)(param_1 + iVar2 + 8));
      *(undefined4 *)(param_1 + uVar1 * 4 + 0x508) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

