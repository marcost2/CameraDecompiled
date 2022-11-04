
/* qcamera::QCameraParametersIntf::getQuadraCfa() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getQuadraCfa(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getQuadraCfa(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe050 + 0xfe04a,DAT_000fe054 + 0xfe04c,DAT_000fe058 + 0xfe04e);
}

