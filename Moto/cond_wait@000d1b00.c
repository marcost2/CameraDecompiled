
/* qcamera::QCameraStream::cond_wait() */

void __thiscall qcamera::QCameraStream::cond_wait(QCameraStream *this)

{
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(this + 0x10064);
  pthread_mutex_lock(__mutex);
  if (this[0x10061] != (QCameraStream)0x0) {
    do {
      pthread_cond_wait((pthread_cond_t *)(this + 0x10068),__mutex);
    } while (this[0x10061] != (QCameraStream)0x0);
  }
  pthread_mutex_unlock(__mutex);
  return;
}

