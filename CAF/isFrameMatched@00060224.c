
/* qcamera::QCamera3PostProcessor::isFrameMatched(unsigned int) */

void __thiscall
qcamera::QCamera3PostProcessor::isFrameMatched(QCamera3PostProcessor *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_00060254 + 0x60230);
  iVar1 = *piVar2;
  QCameraQueue::dequeue
            ((QCameraQueue *)(this + 0x200),SUB41(*(undefined4 *)(DAT_00060258 + 0x6023a),0));
  if (*piVar2 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

