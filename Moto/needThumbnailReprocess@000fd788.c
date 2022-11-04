
/* qcamera::QCameraParametersIntf::needThumbnailReprocess(unsigned long long*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::needThumbnailReprocess
          (QCameraParametersIntf *this,ulonglong *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::needThumbnailReprocess(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd7bc + 0xfd7b6,DAT_000fd7c0 + 0xfd7b8,DAT_000fd7c4 + 0xfd7ba);
}

