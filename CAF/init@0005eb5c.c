
/* qcamera::QCamera3PostProcessor::init(qcamera::QCamera3StreamMem*) */

undefined4 __thiscall qcamera::QCamera3PostProcessor::init(QCamera3PostProcessor *this)

{
  int iVar1;
  char *in_r1;
  char *extraout_r1;
  int *piVar2;
  undefined4 in_stack_ffffffdc;
  ScopedTraceDbg aSStack32 [8];
  int local_18;
  
  piVar2 = *(int **)(DAT_0005ebb0 + 0x5eb6a);
  local_18 = *piVar2;
  iVar1 = DAT_0005ebb4 + 0x5eb74;
  ScopedTraceDbg::ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),in_r1);
  *(char **)(this + 0x1ec) = in_r1;
  QCameraCmdThread::launch
            ((QCameraCmdThread *)(this + 800),*(FuncDef0 **)(DAT_0005ebb8 + 0x5eb8c),this);
  ScopedTraceDbg::_ScopedTraceDbg(aSStack32,CONCAT44(in_stack_ffffffdc,iVar1),extraout_r1);
  if (*piVar2 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

