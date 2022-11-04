
/* qcamera::QCameraParametersIntf::getBufBatchCount() */

int __thiscall qcamera::QCameraParametersIntf::getBufBatchCount(QCameraParametersIntf *this)

{
  char cVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    cVar1 = *(char *)(*(int *)this + 0x798);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe734 + 0xfe72c,DAT_000fe738 + 0xfe72e,DAT_000fe73c + 0xfe730);
}

