
/* qcamera::QCamera3GrallocMemory::cacheOps(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::cacheOps(QCamera3GrallocMemory *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0x3f < param_1) {
    if (*(int *)(*(int *)(DAT_00054100 + 0x5409a) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffff;
  }
  if (param_1 < *(uint *)(this + 0x80c)) {
    if (*(int *)(*(int *)(DAT_0005410c + 0x540ca) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffb5;
  }
  uVar1 = QCamera3Memory::__ThumbV7PILongThunk__ZN7qcamera14QCamera3Memory16cacheOpsInternalEjjPv
                    ((QCamera3Memory *)this,param_1,param_2,*(void **)(this + param_1 * 4 + 0x408));
  return uVar1;
}

