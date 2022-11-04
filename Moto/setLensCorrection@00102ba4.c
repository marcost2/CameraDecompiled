
/* qcamera::QCameraParametersIntf::setLensCorrection(int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setLensCorrection(QCameraParametersIntf *this,int param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setLensCorrection(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_00102bd8 + 0x102bd2,DAT_00102bdc + 0x102bd4,DAT_00102be0 + 0x102bd6);
}

