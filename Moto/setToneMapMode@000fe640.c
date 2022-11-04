
/* qcamera::QCameraParametersIntf::setToneMapMode(unsigned int, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::setToneMapMode
          (QCameraParametersIntf *this,uint param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::setToneMapMode(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe67c + 0xfe676,DAT_000fe680 + 0xfe678,DAT_000fe684 + 0xfe67a);
}

