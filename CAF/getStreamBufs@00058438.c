
/* qcamera::QCamera3ProcessingChannel::getStreamBufs(unsigned int) */

QCamera3ProcessingChannel * __thiscall
qcamera::QCamera3ProcessingChannel::getStreamBufs(QCamera3ProcessingChannel *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 in_stack_ffffffdc;
  ScopedTraceKpi aSStack32 [12];
  int local_14;
  
  piVar2 = *(int **)(DAT_00058474 + 0x58444);
  local_14 = *piVar2;
  iVar1 = DAT_00058478 + 0x5844e;
  uVar3 = ScopedTraceKpi::ScopedTraceKpi
                    (aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),(char *)param_1);
  ScopedTraceKpi::_ScopedTraceKpi
            ((ScopedTraceKpi *)uVar3,CONCAT44(in_stack_ffffffdc,iVar1),
             (char *)((ulonglong)uVar3 >> 0x20));
  if (*piVar2 == local_14) {
    return this + 0x408;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

