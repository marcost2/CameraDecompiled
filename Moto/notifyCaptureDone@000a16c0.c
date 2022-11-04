
/* qcamera::QCamera3QCfaRawChannel::notifyCaptureDone() */

void __thiscall qcamera::QCamera3QCfaRawChannel::notifyCaptureDone(QCamera3QCfaRawChannel *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x11803c));
  *(int *)(this + 0x118038) = *(int *)(this + 0x118038) + 1;
  pthread_cond_signal((pthread_cond_t *)(this + 0x118040));
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x11803c));
  return;
}

