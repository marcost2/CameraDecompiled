
/* qcamera::QCameraParametersIntf::getReprocCount() */

int __thiscall qcamera::QCameraParametersIntf::getReprocCount(QCameraParametersIntf *this)

{
  char cVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    cVar1 = *(char *)(*(int *)this + 0x374);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe4c0 + 0xfe4b8,DAT_000fe4c4 + 0xfe4ba,DAT_000fe4c8 + 0xfe4bc);
}

