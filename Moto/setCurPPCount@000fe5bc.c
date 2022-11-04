
/* qcamera::QCameraParametersIntf::setCurPPCount(signed char) */

void __thiscall
qcamera::QCameraParametersIntf::setCurPPCount(QCameraParametersIntf *this,signed param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    *(char *)(*(int *)this + 0x375) = (char)param_1;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe5ec + 0xfe5e6,DAT_000fe5f0 + 0xfe5e8,DAT_000fe5f4 + 0xfe5ea);
}

