
/* qcamera::QCamera3HeapMemory::allocate(unsigned int) */

undefined4 qcamera::QCamera3HeapMemory::allocate(allocator *param_1,uint param_2)

{
  QCamera3HeapMemory *pQVar1;
  int iVar2;
  void *pvVar3;
  QCamera3HeapMemory *this;
  QCamera3HeapMemory *pQVar4;
  size_t *psVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(DAT_000536c8 + 0x535b6) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffb5;
  }
  pQVar1 = *(QCamera3HeapMemory **)(param_1 + 0x60c);
  if (pQVar1 == (QCamera3HeapMemory *)0x0) {
    pQVar1 = (QCamera3HeapMemory *)0x0;
  }
  else {
    psVar5 = (size_t *)(param_1 + 0x14);
    pQVar4 = (QCamera3HeapMemory *)0x0;
    do {
      iVar2 = allocOneBuffer(pQVar1,(QCamera3MemInfo *)(psVar5 + -3),0x2000000,param_2);
      if (iVar2 < 0) {
        iVar2 = *(int *)(*(int *)(DAT_000536d4 + 0x53648) + 0x20);
joined_r0x0005364a:
        if (iVar2 != 0) {
          mm_camera_debug_log();
        }
        if (pQVar4 != (QCamera3HeapMemory *)0x0) {
          iVar2 = 0;
          pQVar1 = (QCamera3HeapMemory *)0x0;
          do {
            this = (QCamera3HeapMemory *)
                   munmap(*(void **)(param_1 + (int)pQVar1 * 4 + 0x408),
                          *(size_t *)(param_1 + iVar2 + 0x14));
            *(undefined4 *)(param_1 + (int)pQVar1 * 4 + 0x408) = 0;
            deallocOneBuffer(this,(QCamera3MemInfo *)(param_1 + iVar2 + 8));
            iVar2 = iVar2 + 0x10;
            pQVar1 = pQVar1 + 1;
          } while (pQVar4 != pQVar1);
        }
        return 0xfffffff4;
      }
      pvVar3 = mmap((void *)0x0,*psVar5,3,1,psVar5[-3],0);
      if (pvVar3 == (void *)0xffffffff) {
        deallocOneBuffer((QCamera3HeapMemory *)0xffffffff,(QCamera3MemInfo *)(psVar5 + -3));
        iVar2 = *(int *)(*(int *)(DAT_000536e0 + 0x5366c) + 0x20);
        goto joined_r0x0005364a;
      }
      *(void **)(param_1 + (int)pQVar4 * 4 + 0x408) = pvVar3;
      psVar5 = psVar5 + 4;
      pQVar4 = pQVar4 + 1;
      pQVar1 = *(QCamera3HeapMemory **)(param_1 + 0x60c);
    } while (pQVar4 < pQVar1);
    if (iVar2 != 0) {
      return 0;
    }
  }
  *(QCamera3HeapMemory **)(param_1 + 4) = pQVar1;
  return 0;
}

