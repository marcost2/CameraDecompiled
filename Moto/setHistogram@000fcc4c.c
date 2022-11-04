
/* qcamera::QCameraParametersIntf::setHistogram(bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setHistogram(QCameraParametersIntf *this,bool param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setHistogram(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcc80 + 0xfcc7a,DAT_000fcc84 + 0xfcc7c,DAT_000fcc88 + 0xfcc7e);
}

