
/* qcamera::QCamera3QCfaRawChannel::waitCaptureDone() */

void __thiscall qcamera::QCamera3QCfaRawChannel::waitCaptureDone(QCamera3QCfaRawChannel *this)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 0x11803c);
  pthread_mutex_lock(__mutex);
  iVar1 = *(int *)(this + 0x118038);
  if (iVar1 == 0) {
    do {
      pthread_cond_wait((pthread_cond_t *)(this + 0x118040),__mutex);
      iVar1 = *(int *)(this + 0x118038);
    } while (iVar1 == 0);
  }
  *(int *)(this + 0x118038) = iVar1 + -1;
  pthread_mutex_unlock(__mutex);
  return;
}

