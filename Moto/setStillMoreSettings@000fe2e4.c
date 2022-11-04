
/* qcamera::QCameraParametersIntf::setStillMoreSettings(cam_still_more_t) */

void __thiscall
qcamera::QCameraParametersIntf::setStillMoreSettings
          (QCameraParametersIntf *this,cam_still_more_t param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x28d) = (short)param_1;
    *(char *)(iVar1 + 0x28f) = (char)(param_1 >> 0x10);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe31c + 0xfe314,DAT_000fe320 + 0xfe316,DAT_000fe324 + 0xfe318);
}

