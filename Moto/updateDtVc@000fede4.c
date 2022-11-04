
/* qcamera::QCameraParametersIntf::updateDtVc(int*, int*) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateDtVc(QCameraParametersIntf *this,int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateDtVc(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fee20 + 0xfee1a,DAT_000fee24 + 0xfee1c,DAT_000fee28 + 0xfee1e);
}

