
/* qcamera::QCameraParametersIntf::generateThumbFromMain() */

QCameraParameters __thiscall
qcamera::QCameraParametersIntf::generateThumbFromMain(QCameraParametersIntf *this)

{
  int iVar1;
  QCameraParameters QVar2;
  QCameraParameters *this_00;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  this_00 = *(QCameraParameters **)this;
  if (this_00 == (QCameraParameters *)0x0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(DAT_000fdcfc + 0xfdcf6,DAT_000fdd00 + 0xfdcf8,DAT_000fdd04 + 0xfdcfa);
  }
  if (((((this_00[0x2c8] == (QCameraParameters)0x0) || (this_00[0x2c9] != (QCameraParameters)0x0))
       && (this_00[0x2ca] == (QCameraParameters)0x0)) &&
      ((iVar1 = QCameraParameters::isOptiZoomEnabled(this_00), iVar1 == 0 &&
       ((this_00[0x2c9] == (QCameraParameters)0x0 ||
        (*(byte *)(*(int *)(this_00 + 0x1d4) + 0x384f) < 2)))))) &&
     ((iVar1 = QCameraParameters::isHDREnabled(this_00), iVar1 == 0 &&
      (this_00[0x2d9] == (QCameraParameters)0x0)))) {
    QVar2 = this_00[0x302];
    if (QVar2 != (QCameraParameters)0x0) {
      QVar2 = (QCameraParameters)0x1;
    }
  }
  else {
    QVar2 = (QCameraParameters)0x1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
  return QVar2;
}

