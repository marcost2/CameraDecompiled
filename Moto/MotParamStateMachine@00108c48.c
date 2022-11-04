
/* qcamera::MotParamStateMachine::MotParamStateMachine(android::Mutex*) */

MotParamStateMachine * __thiscall
qcamera::MotParamStateMachine::MotParamStateMachine(MotParamStateMachine *this,Mutex *param_1)

{
  int *piVar1;
  pthread_condattr_t pStack24;
  int local_14;
  
  piVar1 = *(int **)(DAT_00108c9c + 0x108c56);
  local_14 = *piVar1;
  *(Mutex **)this = param_1;
  pthread_condattr_init(&pStack24);
  pthread_condattr_setclock(&pStack24,1);
  pthread_cond_init((pthread_cond_t *)(this + 4),&pStack24);
  pthread_condattr_destroy(&pStack24);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (*piVar1 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

