
/* qcamera::MotParamStateMachine::endCommitBatch() */

void __thiscall qcamera::MotParamStateMachine::endCommitBatch(MotParamStateMachine *this)

{
  pthread_t pVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  if ((*(int *)(this + 8) == 2) && (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xc))) {
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    pthread_cond_signal((pthread_cond_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  fatalError(this,(char *)(DAT_00109004 + 0x108ffe),(char *)(DAT_00109008 + 0x109000),0xf7);
}

