
/* qcamera::QCameraStateMachine::QCameraStateMachine(qcamera::QCamera2HardwareInterface*) */

QCameraStateMachine * __thiscall
qcamera::QCameraStateMachine::QCameraStateMachine
          (QCameraStateMachine *this,QCamera2HardwareInterface *param_1)

{
  pthread_t *__newthread;
  int *piVar1;
  pthread_condattr_t pStack32;
  int local_1c;
  
  piVar1 = *(int **)(DAT_000c85b4 + 0xc851c);
  local_1c = *piVar1;
  *(int *)this = *(int *)(DAT_000c85b8 + 0xc852a) + 8;
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0xc));
  QCameraQueue::QCameraQueue((QCameraQueue *)(this + 0x30));
  *(QCamera2HardwareInterface **)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  __newthread = (pthread_t *)(this + 0x54);
  *__newthread = 0;
  pthread_condattr_init(&pStack32);
  pthread_condattr_setclock(&pStack32,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x5c),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x60),&pStack32);
  pthread_condattr_destroy(&pStack32);
  *(undefined4 *)(this + 0x58) = 0;
  pthread_create(__newthread,(pthread_attr_t *)0x0,*(__start_routine **)(DAT_000c85bc + 0xc8580),
                 this);
  pthread_setname_np(*__newthread,(char *)(DAT_000c85c0 + 0xc858e));
  *(undefined2 *)(this + 0x6c) = 0x101;
  *(undefined4 *)(this + 0x68) = 0;
  this[100] = (QCameraStateMachine)0x0;
  if (*piVar1 == local_1c) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

