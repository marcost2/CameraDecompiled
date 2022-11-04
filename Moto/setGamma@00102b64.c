
/* qcamera::QCameraParametersIntf::setGamma(int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setGamma(QCameraParametersIntf *this,int param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setGamma(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102b98 + 0x102b92,DAT_00102b9c + 0x102b94,DAT_00102ba0 + 0x102b96);
}

