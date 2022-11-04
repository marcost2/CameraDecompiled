
/* qcamera::QCamera3ReprocessChannel::start() */

undefined4 __thiscall qcamera::QCamera3ReprocessChannel::start(QCamera3ReprocessChannel *this)

{
  int iVar1;
  char *in_r1;
  uint extraout_r1;
  int *piVar2;
  ulonglong uVar3;
  int in_stack_ffffffdc;
  int iVar4;
  ScopedTraceDbg aSStack32 [12];
  int local_14;
  
  piVar2 = *(int **)(DAT_0005ccb4 + 0x5cc40);
  local_14 = *piVar2;
  iVar1 = DAT_0005ccb8 + 0x5cc4a;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),in_r1);
  uVar3 = QCamera3Channel::start((QCamera3Channel *)this);
  if ((int)uVar3 == 0) {
    uVar3 = (**(code **)(*(int *)(this + 0x4c) + 100))
                      (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
    iVar4 = (int)uVar3;
    if (iVar4 == 0) {
      uVar3 = uVar3 & 0xffffffff00000000;
    }
    else {
      if (*(int *)(*(int *)(DAT_0005ccbc + 0x5cc74) + 0x20) != 0) {
        iVar1 = DAT_0005ccc0 + 0x5cc7e;
        mm_camera_debug_log();
        in_stack_ffffffdc = iVar4;
      }
      QCamera3Channel::stop((QCamera3Channel *)this);
      uVar3 = uVar3 & 0xffffffff | (ulonglong)extraout_r1 << 0x20;
    }
  }
  ScopedTraceDbg::_ScopedTraceDbg
            (aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)(uVar3 >> 0x20));
  if (*piVar2 == local_14) {
    return (int)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

