
/* qcamera::QCamera3GrallocMemory::cacheOps(unsigned int, unsigned int) */

undefined4 __thiscall
qcamera::QCamera3GrallocMemory::cacheOps(QCamera3GrallocMemory *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (0x3f < param_1) {
    if (*(int *)(*(int *)(DAT_0009ac0c + 0x9aba6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009ac14 + 0x9abbe,0x45e,DAT_0009ac10 + 0x9abb6);
    }
    return 0xffffffff;
  }
  if (*(uint *)(this + 0x80c) <= param_1) {
    uVar1 = (*(code *)PTR_cacheOpsInternal_0011969c)();
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_0009ac18 + 0x9abd6) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009ac20 + 0x9abf0,0x463,DAT_0009ac1c + 0x9abe0,param_1,
                        *(uint *)(this + 0x80c));
  }
  return 0xffffffb5;
}

