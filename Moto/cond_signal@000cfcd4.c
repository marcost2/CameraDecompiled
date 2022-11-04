
/* qcamera::QCameraStream::cond_signal(bool) */

void __thiscall qcamera::QCameraStream::cond_signal(QCameraStream *this,bool param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
  if (this[0x10061] != (QCameraStream)0x0) {
    this[0x10061] = (QCameraStream)0x0;
    if (param_1 != false) {
      this[0x8e] = (QCameraStream)0x0;
    }
    pthread_cond_signal((pthread_cond_t *)(this + 0x10068));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
  return;
}

