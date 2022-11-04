
/* qcamera::QCameraParametersIntf::setSharpness(int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setSharpness(QCameraParametersIntf *this,int param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setSharpness(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102b58 + 0x102b52,DAT_00102b5c + 0x102b54,DAT_00102b60 + 0x102b56);
}

