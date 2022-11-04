
/* qcamera::MotMemThrottle::endThrottledAlloc(cam_stream_type_t, unsigned int) */

void __thiscall
qcamera::MotMemThrottle::endThrottledAlloc
          (MotMemThrottle *this,cam_stream_type_t param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  pbVar5 = *(byte **)(DAT_00103a60 + 0x1039a4);
  if ((*pbVar5 & 1) == 0) {
    atrace_setup();
  }
  iVar4 = *(int *)(DAT_00103a64 + 0x1039b2);
  if ((int)((uint)*(byte *)(iVar4 + 1) << 0x1d) < 0) {
    atrace_begin_body(DAT_00103a68 + 0x103a4e);
  }
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (((this[0x60] != (MotMemThrottle)0x0) &&
      ((*(uint *)(this + 0x10) & 1 << (param_1 & 0xff)) != 0)) &&
     (*(uint *)(this + 0x14) <= param_2)) {
    uVar7 = systemTime(4);
    lVar8 = __aeabi_ldivmod((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),(uint)&DAT_000f4240,0);
    *(int *)(this + 0x50) = (int)lVar8;
    *(int *)(this + 0x54) = (int)((ulonglong)lVar8 >> 0x20);
    uVar1 = (uint)(lVar8 - *(longlong *)(this + 0x48));
    iVar2 = (int)((ulonglong)(lVar8 - *(longlong *)(this + 0x48)) >> 0x20);
    iVar3 = *(int *)(this + 0x5c);
    bVar6 = *(uint *)(this + 0x58) < uVar1;
    if ((int)((iVar3 - iVar2) - (uint)bVar6) < 0 !=
        (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar6))) {
      *(uint *)(this + 0x58) = uVar1;
      *(int *)(this + 0x5c) = iVar2;
    }
    this[0x60] = (MotMemThrottle)0x0;
    pthread_cond_signal((pthread_cond_t *)(this + 8));
    __android_log_print(3,DAT_00103a6c + 0x103a24,DAT_00103a70 + 0x103a26,DAT_00103a74 + 0x103a28);
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  if ((*pbVar5 & 1) == 0) {
    atrace_setup();
  }
  if (-1 < (int)((uint)*(byte *)(iVar4 + 1) << 0x1d)) {
    return;
  }
  atrace_end_body();
  return;
}

