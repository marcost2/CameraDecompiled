
/* qcamera::QCamera3Channel::flush() */

undefined4 __thiscall qcamera::QCamera3Channel::flush(QCamera3Channel *this)

{
  int iVar1;
  char *in_r1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 in_stack_ffffffe4;
  ScopedTraceDbg aSStack24 [12];
  int local_c;
  
  piVar2 = *(int **)(DAT_000569d8 + 0x569aa);
  local_c = *piVar2;
  iVar1 = DAT_000569dc + 0x569b4;
  uVar3 = ScopedTraceDbg::ScopedTraceDbg(aSStack24,CONCAT44(in_stack_ffffffe4,iVar1),in_r1);
  ScopedTraceDbg::_ScopedTraceDbg
            ((ScopedTraceDbg *)uVar3,CONCAT44(in_stack_ffffffe4,iVar1),
             (char *)((ulonglong)uVar3 >> 0x20));
  if (*piVar2 == local_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

