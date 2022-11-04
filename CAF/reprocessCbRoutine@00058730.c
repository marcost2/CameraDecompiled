
/* qcamera::QCamera3ProcessingChannel::reprocessCbRoutine(native_handle const**, unsigned int) */

void __thiscall
qcamera::QCamera3ProcessingChannel::reprocessCbRoutine
          (QCamera3ProcessingChannel *this,native_handle **param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *extraout_r1;
  int *piVar3;
  int in_stack_ffffffd4;
  ScopedTraceDbg aSStack40 [12];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000587b8 + 0x58742);
  local_1c = *piVar3;
  iVar1 = DAT_000587bc + 0x5874c;
  ScopedTraceDbg::ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffd4,iVar1),(char *)param_1);
  iVar2 = releaseOfflineMemory(this,param_2);
  if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_000587c0 + 0x58768) + 0x20) != 0)) {
    iVar1 = DAT_000587c4 + 0x58772;
    mm_camera_debug_log();
    in_stack_ffffffd4 = iVar2;
  }
  if (*(code **)(this + 0x60) != (code *)0x0) {
    iVar1 = *(int *)(this + 4);
    (**(code **)(this + 0x60))(0,0,param_2,1);
  }
  issueChannelCb(this,param_1,param_2);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack40,CONCAT44(in_stack_ffffffd4,iVar1),extraout_r1);
  if (*piVar3 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

