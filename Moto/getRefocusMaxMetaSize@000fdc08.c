
/* qcamera::QCameraParametersIntf::getRefocusMaxMetaSize() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getRefocusMaxMetaSize(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)this + 0x1d4) + 0x3850);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdc3c + 0xfdc36,DAT_000fdc40 + 0xfdc38,DAT_000fdc44 + 0xfdc3a);
}

