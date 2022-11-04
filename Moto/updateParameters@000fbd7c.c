
/* qcamera::QCameraParametersIntf::updateParameters(android::String8 const&, bool&) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateParameters
          (QCameraParametersIntf *this,String8 *param_1,bool *param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateParameters(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fbdb8 + 0xfbdb2,DAT_000fbdbc + 0xfbdb4,DAT_000fbdc0 + 0xfbdb6);
}

