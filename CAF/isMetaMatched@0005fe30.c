
/* qcamera::QCamera3PostProcessor::isMetaMatched(unsigned int) */

void __thiscall
qcamera::QCamera3PostProcessor::isMetaMatched(QCamera3PostProcessor *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_0005fe60 + 0x5fe3c);
  iVar1 = *piVar2;
  QCameraQueue::dequeue
            ((QCameraQueue *)(this + 0x2d8),SUB41(*(undefined4 *)(DAT_0005fe64 + 0x5fe46),0));
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

