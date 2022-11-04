
/* qcamera::QCameraCmdThread::QCameraCmdThread() */

QCameraCmdThread * __thiscall qcamera::QCameraCmdThread::QCameraCmdThread(QCameraCmdThread *this)

{
  int *piVar1;
  pthread_condattr_t pStack32;
  pthread_condattr_t pStack28;
  int local_18;
  
  piVar1 = *(int **)(DAT_0007c1e8 + 0x7c170);
  local_18 = *piVar1;
  QCameraQueue::QCameraQueue((QCameraQueue *)this);
  *(undefined4 *)(this + 0x24) = 0;
  pthread_condattr_init(&pStack32);
  pthread_condattr_setclock(&pStack32,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x38),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x3c),&pStack32);
  pthread_condattr_destroy(&pStack32);
  *(undefined4 *)(this + 0x34) = 0;
  pthread_condattr_init(&pStack28);
  pthread_condattr_setclock(&pStack28,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x2c),(pthread_mutexattr_t *)0x0);
  pthread_cond_init((pthread_cond_t *)(this + 0x30),&pStack28);
  pthread_condattr_destroy(&pStack28);
  *(undefined4 *)(this + 0x28) = 0;
  if (*piVar1 == local_18) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

