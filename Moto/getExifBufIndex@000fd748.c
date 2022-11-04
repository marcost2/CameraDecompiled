
/* qcamera::QCameraParametersIntf::getExifBufIndex(unsigned int) */

undefined4 __thiscall
qcamera::QCameraParametersIntf::getExifBufIndex(QCameraParametersIntf *this,uint param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifBufIndex(*(QCameraParameters **)this,param_1);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd77c + 0xfd776,DAT_000fd780 + 0xfd778,DAT_000fd784 + 0xfd77a);
}

