
/* qcamera::QCameraParametersIntf::getExifFocalLength(rat_t*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifFocalLength(QCameraParametersIntf *this,rat_t *param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifFocalLength(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc7b8 + 0xfc7b2,DAT_000fc7bc + 0xfc7b4,DAT_000fc7c0 + 0xfc7b6);
}

