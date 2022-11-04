
/* qcamera::QCameraParametersIntf::updateRAW(cam_dimension_t) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateRAW(QCameraParametersIntf *this,cam_dimension_t param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateRAW(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcee8 + 0xfcee2,DAT_000fceec + 0xfcee4,DAT_000fcef0 + 0xfcee6);
}

