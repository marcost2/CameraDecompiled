
/* qcamera::QCameraParametersIntf::isLinkPreviewForLiveShot() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::isLinkPreviewForLiveShot(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = QCameraParameters::isLinkPreviewForLiveShot();
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fee5c + 0xfee56,DAT_000fee60 + 0xfee58,DAT_000fee64 + 0xfee5a);
}

