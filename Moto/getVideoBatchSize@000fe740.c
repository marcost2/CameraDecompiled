
/* qcamera::QCameraParametersIntf::getVideoBatchSize() */

int __thiscall qcamera::QCameraParametersIntf::getVideoBatchSize(QCameraParametersIntf *this)

{
  char cVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    cVar1 = *(char *)(*(int *)this + 0x7a4);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe770 + 0xfe768,DAT_000fe774 + 0xfe76a,DAT_000fe778 + 0xfe76c);
}

