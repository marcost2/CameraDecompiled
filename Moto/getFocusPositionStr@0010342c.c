
/* qcamera::QCameraParametersIntf::getFocusPositionStr() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getFocusPositionStr(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getFocusPositionStr(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_0010345c + 0x103456,DAT_00103460 + 0x103458,DAT_00103464 + 0x10345a);
}
