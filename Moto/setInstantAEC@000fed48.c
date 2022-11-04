
/* qcamera::QCameraParametersIntf::setInstantAEC(unsigned char, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setInstantAEC
          (QCameraParametersIntf *this,uchar param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setInstantAEC(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fed84 + 0xfed7e,DAT_000fed88 + 0xfed80,DAT_000fed8c + 0xfed82);
}

