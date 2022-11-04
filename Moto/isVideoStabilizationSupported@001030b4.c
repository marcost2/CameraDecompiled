
/* qcamera::QCameraParametersIntf::isVideoStabilizationSupported() */

char __thiscall
qcamera::QCameraParametersIntf::isVideoStabilizationSupported(QCameraParametersIntf *this)

{
  int iVar1;
  char cVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xd44) == '\0') {
      cVar2 = *(char *)(*(int *)(iVar1 + 0x1d4) + 0x5c4);
      if (cVar2 != '\0') {
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = '\0';
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001030f8 + 0x1030f0,DAT_001030fc + 0x1030f2,DAT_00103100 + 0x1030f4);
}

