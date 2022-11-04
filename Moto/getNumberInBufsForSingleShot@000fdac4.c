
/* qcamera::QCameraParametersIntf::getNumberInBufsForSingleShot() */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getNumberInBufsForSingleShot(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getNumberInBufsForSingleShot(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fdaf4 + 0xfdaee,DAT_000fdaf8 + 0xfdaf0,DAT_000fdafc + 0xfdaf2);
}

