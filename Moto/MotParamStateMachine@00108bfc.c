
/* qcamera::MotParamStateMachine::MotParamStateMachine() */

MotParamStateMachine * __thiscall
qcamera::MotParamStateMachine::MotParamStateMachine(MotParamStateMachine *this)

{
  int *piVar1;
  pthread_condattr_t pStack28;
  int local_18;
  
  piVar1 = *(int **)(DAT_00108c44 + 0x108c0a);
  local_18 = *piVar1;
  *(undefined4 *)this = 0;
  pthread_condattr_init(&pStack28);
  pthread_condattr_setclock(&pStack28,1);
  pthread_cond_init((pthread_cond_t *)(this + 4),&pStack28);
  pthread_condattr_destroy(&pStack28);
  if (*piVar1 == local_18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

