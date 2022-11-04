
/* qcamera::MotParamStateMachine::beginInitBatch() */

undefined4 __thiscall qcamera::MotParamStateMachine::beginInitBatch(MotParamStateMachine *this)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  pthread_mutex_t *__mutex;
  int *piVar9;
  timespec local_30;
  int local_28;
  
  piVar9 = *(int **)(DAT_00108e30 + 0x108cae);
  local_28 = *piVar9;
  if (*(int *)this == 0) {
    uVar8 = 0;
    goto LAB_00108dfa;
  }
  pVar1 = pthread_self();
  iVar7 = *(int *)(this + 8);
  if (iVar7 - 1U < 2) {
    if (pVar1 != *(pthread_t *)(this + 0xc)) {
      uVar8 = gettid();
      __android_log_print(6,DAT_00108e54 + 0x108d46,DAT_00108e58 + 0x108d48,DAT_00108e5c + 0x108d4a,
                          uVar8,*(undefined4 *)(this + 0x10),
                          *(undefined4 *)(*(int *)(DAT_00108e50 + 0x108d34) + iVar7 * 4));
      while (*(int *)(this + 8) != 0) {
        __mutex = *(pthread_mutex_t **)this;
        clock_gettime(1,&local_30);
        if (local_30.tv_nsec < 1000000000) {
          uVar4 = 0x10;
        }
        else {
          local_30.tv_nsec = local_30.tv_nsec + -1000000000;
          uVar4 = 0x11;
        }
        iVar7 = local_30.tv_sec >> 0x1f;
        uVar5 = uVar4 + local_30.tv_sec;
        iVar3 = iVar7 + (uint)CARRY4(uVar4,local_30.tv_sec);
        if ((int)((0x7fffffff - iVar7) - (uint)(~uVar4 < (uint)local_30.tv_sec)) < 0 !=
            (SBORROW4(0x7fffffff,iVar7) !=
            SBORROW4(0x7fffffff - iVar7,(uint)(~uVar4 < (uint)local_30.tv_sec)))) {
          iVar3 = 0x7fffffff;
          uVar5 = 0xffffffff;
        }
        local_30.tv_sec = uVar5;
        if ((int)(iVar3 - (uint)(uVar5 < 0x7fffffff)) < 0 ==
            (SBORROW4(iVar3,(uint)(uVar5 < 0x7fffffff)) != false)) {
          local_30.tv_sec = 0x7fffffff;
        }
        iVar7 = pthread_cond_timedwait((pthread_cond_t *)(this + 4),__mutex,&local_30);
        if (iVar7 != 0) {
          if (iVar7 != 0x6e) {
                    /* WARNING: Subroutine does not return */
            fatalError(this,(char *)(DAT_00108e68 + 0x108e1a),(char *)(DAT_00108e6c + 0x108e1c),0x6d
                      );
          }
                    /* WARNING: Subroutine does not return */
          fatalError(this,(char *)(DAT_00108e60 + 0x108de4),(char *)(DAT_00108e64 + 0x108de6),0x6b);
        }
      }
      goto LAB_00108dec;
    }
    if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
      fatalError(this,(char *)(DAT_00108e70 + 0x108e2a),(char *)(DAT_00108e74 + 0x108e2c),0x55);
    }
    iVar7 = *(int *)(this + 0x14);
    *(int *)(this + 0x14) = iVar7 + 1;
    iVar6 = DAT_00108e34 + 0x108ce6;
    __android_log_print(3,DAT_00108e38 + 0x108cf0,DAT_00108e3c + 0x108cf2,DAT_00108e40 + 0x108cf4,
                        iVar7 + 1,*(undefined4 *)(this + 0x10),iVar6);
    iVar3 = *(int *)(this + 0x18);
    iVar7 = iVar3 + 1;
    *(int *)(this + 0x18) = iVar7;
    if (4 < iVar3) {
      __android_log_print(6,DAT_00108e44 + 0x108d12,DAT_00108e48 + 0x108d14,DAT_00108e4c + 0x108d16,
                          iVar7,*(undefined4 *)(this + 0x10),iVar6);
    }
    uVar8 = 1;
  }
  else {
LAB_00108dec:
    uVar8 = 0;
  }
  *(pthread_t *)(this + 0xc) = pVar1;
  uVar2 = gettid();
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 8) = 1;
LAB_00108dfa:
  if (*piVar9 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

