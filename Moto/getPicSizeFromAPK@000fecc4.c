
/* qcamera::QCameraParametersIntf::getPicSizeFromAPK(int&, int&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getPicSizeFromAPK
          (QCameraParametersIntf *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getPicSizeFromAPK(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fed00 + 0xfecfa,DAT_000fed04 + 0xfecfc,DAT_000fed08 + 0xfecfe);
}

