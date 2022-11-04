
/* qcamera::QCameraGrallocMemory::cacheOps(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCameraGrallocMemory::cacheOps(QCameraGrallocMemory *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((byte)this[0xa88] <= param_1) {
    return 0xffffffb5;
  }
  uVar1 = (*(code *)PTR_cacheOpsInternal_00119fec)();
  return uVar1;
}

