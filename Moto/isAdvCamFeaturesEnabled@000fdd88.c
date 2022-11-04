
/* qcamera::QCameraParametersIntf::isAdvCamFeaturesEnabled() */

bool __thiscall qcamera::QCameraParametersIntf::isAdvCamFeaturesEnabled(QCameraParametersIntf *this)

{
  int iVar1;
  QCameraParameters *this_00;
  bool bVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  this_00 = *(QCameraParameters **)this;
  if (this_00 == (QCameraParameters *)0x0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(DAT_000fde00 + 0xfddf8,DAT_000fde04 + 0xfddfa,DAT_000fde08 + 0xfddfc);
  }
  if ((((this_00[0x2c8] == (QCameraParameters)0x0) || (this_00[0x2c9] != (QCameraParameters)0x0)) &&
      (this_00[0x2ca] == (QCameraParameters)0x0)) &&
     (((this_00[0x2cb] == (QCameraParameters)0x0 &&
       (iVar1 = QCameraParameters::isHDREnabled(this_00), iVar1 == 0)) &&
      ((iVar1 = QCameraParameters::isAEBracketEnabled(this_00), iVar1 == 0 &&
       (this_00[0x2d9] == (QCameraParameters)0x0)))))) {
    bVar2 = false;
    if (this_00[0x2c9] != (QCameraParameters)0x0) {
      bVar2 = 1 < *(byte *)(*(int *)(this_00 + 0x1d4) + 0x384f);
    }
  }
  else {
    bVar2 = true;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
  return bVar2;
}

