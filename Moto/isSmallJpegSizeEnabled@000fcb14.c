
/* qcamera::QCameraParametersIntf::isSmallJpegSizeEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isSmallJpegSizeEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x801);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcb44 + 0xfcb3c,DAT_000fcb48 + 0xfcb3e,DAT_000fcb4c + 0xfcb40);
}

