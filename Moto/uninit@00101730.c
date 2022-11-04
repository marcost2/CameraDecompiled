
/* qcamera::BSTLiveBokeh::uninit() */

void __thiscall qcamera::BSTLiveBokeh::uninit(BSTLiveBokeh *this)

{
  int __status;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xd0));
  if (this[0x14] != (BSTLiveBokeh)0x0) {
    this[8] = (BSTLiveBokeh)0x1;
    this[0x14] = (BSTLiveBokeh)0x0;
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),2,'\0','\0');
                    /* WARNING: Subroutine does not return */
    QCameraCmdThread::exit((QCameraCmdThread *)(this + 0x88),__status);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xd0));
  return;
}

