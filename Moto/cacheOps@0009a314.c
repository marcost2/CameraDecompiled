
/* qcamera::QCamera3HeapMemory::cacheOps(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HeapMemory::cacheOps(QCamera3HeapMemory *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(uint *)(this + 4) <= param_1) {
    return 0xffffffb5;
  }
  uVar1 = (*(code *)PTR_cacheOpsInternal_0011969c)();
  return uVar1;
}

