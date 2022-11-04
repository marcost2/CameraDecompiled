
/* qcamera::QCamera3ReprocessChannel::stop() */

undefined4 __thiscall qcamera::QCamera3ReprocessChannel::stop(QCamera3ReprocessChannel *this)

{
  int iVar1;
  undefined4 uVar2;
  char *in_r1;
  char *extraout_r1;
  int *piVar3;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar3 = *(int **)(DAT_0005cd20 + 0x5ccd4);
  local_18 = *piVar3;
  iVar1 = DAT_0005cd24 + 0x5ccde;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),in_r1);
  QCamera3Channel::stop((QCamera3Channel *)this);
  uVar2 = (**(code **)(*(int *)(this + 0x4c) + 0x68))
                    (*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x54));
  unmapOfflineBuffers(this,true);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),extraout_r1);
  if (*piVar3 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

