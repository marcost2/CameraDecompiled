
/* qcamera::QCamera3Memory::cacheOpsInternal(unsigned int, unsigned int, void*) */

uint __thiscall
qcamera::QCamera3Memory::cacheOpsInternal
          (QCamera3Memory *this,uint param_1,uint param_2,void *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint local_40;
  int *piStack60;
  int local_34;
  undefined4 uStack48;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  piVar7 = *(int **)(DAT_000998ec + 0x997f0);
  local_20 = *piVar7;
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x608));
  if (param_1 < 0x40) {
    iVar3 = *(int *)(this + param_1 * 0x10 + 0x10);
    if (iVar3 != 0) {
      local_28 = 0;
      uStack48 = *(undefined4 *)(this + param_1 * 0x10 + 8);
      local_24 = *(undefined4 *)(this + param_1 * 0x10 + 0x14);
      piStack60 = &local_34;
      iVar4 = *(int *)(DAT_00099908 + 0x9984a);
      local_40 = param_2;
      local_34 = iVar3;
      local_2c = param_3;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_00099910 + 0x9986c,0x88,DAT_0009990c + 0x99856,param_3,uStack48,
                            iVar3,local_24,*(undefined4 *)(this + param_1 * 0x10 + 0xc));
      }
      uVar6 = ioctl(*(int *)(this + param_1 * 0x10 + 0xc),0xc0084906,&local_40);
      if ((0x7fffffff < uVar6) && (*(int *)(iVar4 + 0x20) != 0)) {
        piVar1 = (int *)__errno();
        pcVar2 = strerror(*piVar1);
        mm_camera_debug_log(1,1,DAT_00099918 + 0x998a8,0x8b,DAT_00099914 + 0x9989c,pcVar2);
      }
      goto LAB_000998d0;
    }
    if (*(int *)(*(int *)(DAT_000998fc + 0x998b2) + 0x20) != 0) {
      uVar5 = 0x78;
      iVar3 = DAT_00099900 + 0x998c0;
      iVar4 = DAT_00099904 + 0x998ca;
      goto LAB_000998c8;
    }
  }
  else if (*(int *)(*(int *)(DAT_000998f0 + 0x99808) + 0x20) != 0) {
    uVar5 = 0x73;
    iVar3 = DAT_000998f4 + 0x99818;
    iVar4 = DAT_000998f8 + 0x99826;
LAB_000998c8:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar3,param_1);
  }
  uVar6 = 0xffffffb5;
LAB_000998d0:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x608));
  if (*piVar7 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

