
/* qcamera::MotParamStateMachine::paramWriteError() */

void __thiscall qcamera::MotParamStateMachine::paramWriteError(MotParamStateMachine *this)

{
  pthread_t pVar1;
  
  if (*(int *)this == 0) {
    return;
  }
  if (*(int *)(this + 8) == 1) {
    pVar1 = pthread_self();
    if (pVar1 == *(pthread_t *)(this + 0xc)) {
                    /* WARNING: Subroutine does not return */
      fatalError(this,(char *)(DAT_001090e8 + 0x1090c8),(char *)(DAT_001090ec + 0x1090ca),0x13d);
    }
  }
  else if (*(int *)(this + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    fatalError(this,(char *)(DAT_001090e0 + 0x1090ac),(char *)(DAT_001090e4 + 0x1090ae),0x138);
  }
                    /* WARNING: Subroutine does not return */
  fatalError(this,(char *)(DAT_001090f0 + 0x1090da),(char *)(DAT_001090f4 + 0x1090dc),0x13b);
}

