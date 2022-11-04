
/* qcamera::QCamera3HeapMemory::allocateOne(unsigned int) */

int __thiscall qcamera::QCamera3HeapMemory::allocateOne(QCamera3HeapMemory *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(uint *)(this + 0x60c) < *(int *)(this + 4) + 1U) {
    if (*(int *)(*(int *)(DAT_000537d0 + 0x53706) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return -0x4b;
  }
  iVar1 = allocOneBuffer(this + *(int *)(this + 4) * 0x10,
                         (QCamera3MemInfo *)(this + *(int *)(this + 4) * 0x10 + 8),0x2000000,param_1
                        );
  if (iVar1 < 0) {
    iVar1 = *(int *)(*(int *)(DAT_000537dc + 0x53782) + 0x20);
  }
  else {
    pvVar2 = mmap((void *)0x0,*(size_t *)(this + *(int *)(this + 4) * 0x10 + 0x14),3,1,
                  *(int *)(this + *(int *)(this + 4) * 0x10 + 8),0);
    if (pvVar2 != (void *)0xffffffff) {
      *(void **)(this + *(int *)(this + 4) * 4 + 0x408) = pvVar2;
      if (iVar1 == 0) {
        *(int *)(this + 4) = *(int *)(this + 4) + 1;
      }
      return *(int *)(this + 4) + -1;
    }
    deallocOneBuffer(this + *(int *)(this + 4) * 0x10,
                     (QCamera3MemInfo *)(this + *(int *)(this + 4) * 0x10 + 8));
    iVar1 = *(int *)(*(int *)(DAT_000537e8 + 0x537ac) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return -0xc;
}

