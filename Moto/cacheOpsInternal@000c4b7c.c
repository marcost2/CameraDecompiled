
/* qcamera::QCameraMemory::cacheOpsInternal(unsigned int, unsigned int, void*) */

uint __thiscall
qcamera::QCameraMemory::cacheOpsInternal
          (QCameraMemory *this,uint param_1,uint param_2,void *param_3)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint local_38;
  undefined4 *puStack52;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar4 = *(int **)(DAT_000c4c7c + 0xc4b86);
  local_18 = *piVar4;
  if (this[4] == (QCameraMemory)0x0) {
    if (*(int *)(*(int *)(DAT_000c4c80 + 0xc4c24) + 0x2c) == 0) {
      uVar1 = 0;
    }
    else {
      mm_camera_debug_log(1,4,DAT_000c4c88 + 0xc4c3a,0x7a,DAT_000c4c84 + 0xc4c32);
      uVar1 = 0;
    }
  }
  else if (param_1 < (byte)this[5]) {
    local_20 = 0;
    local_28 = *(undefined4 *)(this + param_1 * 0x18 + 8);
    local_2c = *(undefined4 *)(this + param_1 * 0x18 + 0x10);
    local_1c = *(undefined4 *)(this + param_1 * 0x18 + 0x14);
    puStack52 = &local_2c;
    iVar5 = *(int *)(DAT_000c4c98 + 0xc4bbc);
    local_38 = param_2;
    local_24 = param_3;
    if (*(int *)(iVar5 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000c4ca0 + 0xc4bde,0x95,DAT_000c4c9c + 0xc4bca,param_3,local_28,
                          local_2c,local_1c,*(undefined4 *)(this + param_1 * 0x18 + 0xc));
    }
    uVar1 = ioctl(*(int *)(this + param_1 * 0x18 + 0xc),0xc0084906,&local_38);
    if ((0x7fffffff < uVar1) && (*(int *)(iVar5 + 0x20) != 0)) {
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      mm_camera_debug_log(1,1,DAT_000c4ca8 + 0xc4c1a,0x98,DAT_000c4ca4 + 0xc4c0e,pcVar3);
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000c4c8c + 0xc4c46) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c4c94 + 0xc4c5e,0x83,DAT_000c4c90 + 0xc4c52,param_1,
                          (uint)(byte)this[5]);
    }
    uVar1 = 0xffffffb5;
  }
  if (*piVar4 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

