
/* qcamera::QCameraQueue::init() */

int __thiscall qcamera::QCameraQueue::init(QCameraQueue *this,EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  this[0x14] = (QCameraQueue)0x1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return iVar1;
}

