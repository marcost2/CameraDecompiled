
/* qcamera::MotParamStateMachine::endInitBatch() */

void __thiscall qcamera::MotParamStateMachine::endInitBatch(MotParamStateMachine *this)

{
  int iVar1;
  pthread_t pVar2;
  
  if (*(int *)this != 0) {
    iVar1 = *(int *)(this + 8);
    if (iVar1 == 1) {
      pVar2 = pthread_self();
      if (*(pthread_t *)(this + 0xc) != pVar2) {
                    /* WARNING: Subroutine does not return */
        fatalError(this,(char *)(DAT_00108f18 + 0x108f0a),(char *)(DAT_00108f1c + 0x108f0c),0x9c);
      }
    }
    else if (iVar1 == 0 || iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
      fatalError(this,(char *)(DAT_00108f10 + 0x108eee),(char *)(DAT_00108f14 + 0x108ef0),0xa3);
    }
  }
  return;
}

