
/* qcamera::MotSmoothZoom::MotSmoothZoom(qcamera::QCamera2HardwareInterface*) */

MotSmoothZoom * __thiscall
qcamera::MotSmoothZoom::MotSmoothZoom(MotSmoothZoom *this,QCamera2HardwareInterface *param_1)

{
  int iVar1;
  undefined4 in_r2;
  int *piVar2;
  pthread_condattr_t pStack28;
  int local_18;
  
  piVar2 = *(int **)(DAT_001048f0 + 0x104890);
  local_18 = *piVar2;
  android::Thread::Thread((Thread *)this,(bool)((char)param_1 + '\x04'));
  iVar1 = *(int *)param_1;
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x24) = in_r2;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x28),(pthread_mutexattr_t *)0x0);
  pthread_condattr_init(&pStack28);
  pthread_condattr_setclock(&pStack28,1);
  pthread_cond_init((pthread_cond_t *)(this + 0x2c),&pStack28);
  pthread_condattr_destroy(&pStack28);
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 3;
  if (*piVar2 == local_18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}
