
/* qcamera::QCameraParametersIntf::updateZoomValue(int, bool) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::updateZoomValue
          (QCameraParametersIntf *this,int param_1,bool param_2)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::updateZoomValue(*(QCameraParameters **)this,param_1,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_001032bc + 0x1032b6,DAT_001032c0 + 0x1032b8,DAT_001032c4 + 0x1032ba);
}

