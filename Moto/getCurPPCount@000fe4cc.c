
/* qcamera::QCameraParametersIntf::getCurPPCount() */

int __thiscall qcamera::QCameraParametersIntf::getCurPPCount(QCameraParametersIntf *this)

{
  char cVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    cVar1 = *(char *)(*(int *)this + 0x375);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe4fc + 0xfe4f4,DAT_000fe500 + 0xfe4f6,DAT_000fe504 + 0xfe4f8);
}

