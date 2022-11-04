
/* qcamera::MotMemThrottle::beginThrottledAlloc(cam_stream_type_t, unsigned int) */

undefined4 __thiscall
qcamera::MotMemThrottle::beginThrottledAlloc
          (MotMemThrottle *this,cam_stream_type_t param_1,uint param_2)

{
  MotMemThrottle MVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 uVar16;
  longlong lVar17;
  timespec local_30;
  int local_28;
  
  piVar13 = *(int **)(DAT_0010388c + 0x1035da);
  local_28 = *piVar13;
  pbVar14 = *(byte **)(DAT_00103890 + 0x1035e8);
  if ((*pbVar14 & 1) == 0) {
    atrace_setup();
  }
  iVar12 = *(int *)(DAT_00103894 + 0x1035fa);
  if ((int)((uint)*(byte *)(iVar12 + 1) << 0x1d) < 0) {
    atrace_begin_body(DAT_00103898 + 0x103876);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  bVar15 = *(uint *)(this + 0x40) == 0;
  if ((int)(*(int *)(this + 0x44) - (uint)bVar15) < 0 ==
      (SBORROW4(*(int *)(this + 0x44),(uint)bVar15) != false)) {
    uVar16 = systemTime(4);
    lVar17 = __aeabi_ldivmod((uint)uVar16,(uint)((ulonglong)uVar16 >> 0x20),(uint)&DAT_000f4240,0);
    iVar3 = (int)((ulonglong)(lVar17 - *(longlong *)(this + 0x38)) >> 0x20);
    iVar6 = *(int *)(this + 0x44);
    bVar15 = *(uint *)(this + 0x40) < (uint)(lVar17 - *(longlong *)(this + 0x38));
    if ((int)((iVar6 - iVar3) - (uint)bVar15) < 0 !=
        (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)bVar15))) {
      this[0x30] = (MotMemThrottle)0x0;
    }
  }
  MVar1 = this[0x30];
  pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
  if (((MVar1 == (MotMemThrottle)0x0) || ((*(uint *)(this + 0x10) & 1 << (param_1 & 0xff)) == 0)) ||
     (param_2 < *(uint *)(this + 0x14))) {
    uVar9 = 0;
    goto LAB_00103672;
  }
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (this[0x60] != (MotMemThrottle)0x0) {
    iVar11 = DAT_0010389c + 0x1036b4;
    iVar6 = DAT_001038a0 + 0x1036b6;
    iVar3 = DAT_001038a4 + 0x1036b8;
    do {
      __android_log_print(3,iVar11,iVar6,iVar3);
      pthread_cond_wait((pthread_cond_t *)(this + 8),(pthread_mutex_t *)this);
    } while (this[0x60] != (MotMemThrottle)0x0);
  }
  if (this[0xc] == (MotMemThrottle)0x0) {
    uVar8 = *(uint *)(this + 0x28);
    uVar10 = *(uint *)(this + 0x2c);
    if (this[0x18] != (MotMemThrottle)0x0) {
      uVar5 = *(uint *)(this + 0x58);
      uVar7 = *(uint *)(this + 0x5c);
      uVar2 = *(uint *)(this + 0x20);
      uVar4 = *(uint *)(this + 0x24);
      if ((int)((uVar7 - uVar10) - (uint)(uVar5 < uVar8)) < 0 !=
          (SBORROW4(uVar7,uVar10) != SBORROW4(uVar7 - uVar10,(uint)(uVar5 < uVar8)))) {
        uVar8 = uVar5;
        uVar10 = uVar7;
      }
      if ((int)((uVar10 - uVar4) - (uint)(uVar8 < uVar2)) < 0 !=
          (SBORROW4(uVar10,uVar4) != SBORROW4(uVar10 - uVar4,(uint)(uVar8 < uVar2)))) {
        uVar8 = uVar2;
        uVar10 = uVar4;
      }
    }
    uVar16 = systemTime(4);
    uVar4 = *(uint *)(this + 0x50);
    uVar2 = *(uint *)(this + 0x54);
    if ((uVar4 | uVar2) != 0) {
      uVar16 = __aeabi_ldivmod((uint)uVar16,(uint)((ulonglong)uVar16 >> 0x20),(uint)&DAT_000f4240,0)
      ;
      uVar5 = uVar4 - (uint)uVar16;
      uVar7 = uVar5 + uVar8;
      uVar2 = uVar10 + ((uVar2 - (int)((ulonglong)uVar16 >> 0x20)) - (uint)(uVar4 < (uint)uVar16)) +
              (uint)CARRY4(uVar5,uVar8);
      uVar10 = (uint)((int)(-(uint)(uVar7 != 0) - uVar2) < 0 !=
                     (SBORROW4(-uVar2,(uint)(uVar7 != 0)) != false));
      uVar8 = uVar10;
      if (uVar10 != 0) {
        uVar10 = uVar2;
        uVar8 = uVar7;
      }
    }
    this[0x60] = (MotMemThrottle)0x1;
    __android_log_print(3,DAT_001038a8 + 0x10377c,DAT_001038ac + 0x10377e,DAT_001038b0 + 0x103780,
                        uVar8,uVar10,param_2);
    clock_gettime(1,&local_30);
    iVar3 = 1000000000;
    __aeabi_ldivmod((uint)((ulonglong)uVar8 * 1000000),
                    uVar10 * 1000000 + (int)((ulonglong)uVar8 * 1000000 >> 0x20),1000000000,0);
    iVar3 = local_30.tv_nsec + iVar3;
    local_30.tv_nsec = iVar3;
    lVar17 = __aeabi_ldivmod(uVar8,uVar10,1000,0);
    if (999999999 < iVar3) {
      lVar17 = lVar17 + 1;
      local_30.tv_nsec = iVar3 + -1000000000;
    }
    iVar6 = 0x7fffffff - (int)((ulonglong)lVar17 >> 0x20);
    bVar15 = ~(uint)lVar17 < (uint)local_30.tv_sec;
    iVar3 = local_30.tv_sec >> 0x1f;
    lVar17 = lVar17 + local_30.tv_sec;
    if ((int)((iVar6 - iVar3) - (uint)bVar15) < 0 !=
        (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)bVar15))) {
      lVar17 = 0x7fffffffffffffff;
    }
    iVar3 = (int)((ulonglong)lVar17 >> 0x20);
    local_30.tv_sec = (__time_t)lVar17;
    if ((int)(iVar3 - (uint)((uint)local_30.tv_sec < 0x7fffffff)) < 0 ==
        (SBORROW4(iVar3,(uint)((uint)local_30.tv_sec < 0x7fffffff)) != false)) {
      local_30.tv_sec = 0x7fffffff;
    }
    pthread_cond_timedwait((pthread_cond_t *)(this + 8),(pthread_mutex_t *)this,&local_30);
    if (this[0xc] != (MotMemThrottle)0x0) goto LAB_00103822;
    uVar16 = systemTime(4);
    uVar9 = 0;
    uVar16 = __aeabi_ldivmod((uint)uVar16,(uint)((ulonglong)uVar16 >> 0x20),(uint)&DAT_000f4240,0);
    *(int *)(this + 0x48) = (int)uVar16;
    *(int *)(this + 0x4c) = (int)((ulonglong)uVar16 >> 0x20);
  }
  else {
LAB_00103822:
    __android_log_print(3,DAT_001038b4 + 0x10382e,DAT_001038b8 + 0x103830,DAT_001038bc + 0x103832);
    this[0x60] = (MotMemThrottle)0x0;
    pthread_cond_signal((pthread_cond_t *)(this + 8));
    uVar9 = 0xffffffff;
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
LAB_00103672:
  if ((*pbVar14 & 1) == 0) {
    atrace_setup();
  }
  if ((int)((uint)*(byte *)(iVar12 + 1) << 0x1d) < 0) {
    atrace_end_body();
  }
  if (*piVar13 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

