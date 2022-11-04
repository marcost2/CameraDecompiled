
/* qcamera::QCameraParametersIntf::isHistogramEnabled() */

undefined __thiscall qcamera::QCameraParametersIntf::isHistogramEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x215);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcacc + 0xfcac4,DAT_000fcad0 + 0xfcac6,DAT_000fcad4 + 0xfcac8);
}

