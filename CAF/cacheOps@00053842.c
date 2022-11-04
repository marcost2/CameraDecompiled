
/* qcamera::QCamera3HeapMemory::cacheOps(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::cacheOps(QCamera3HeapMemory *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 < *(uint *)(this + 4)) {
    uVar1 = QCamera3Memory::__ThumbV7PILongThunk__ZN7qcamera14QCamera3Memory16cacheOpsInternalEjjPv
                      ((QCamera3Memory *)this,param_1,param_2,*(void **)(this + param_1 * 4 + 0x408)
                      );
    return uVar1;
  }
  return 0xffffffb5;
}

