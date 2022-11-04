
/* qcamera::QCameraParametersIntf::getExifSaturation() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getExifSaturation(QCameraParametersIntf *this)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(QCameraParameters **)this != (QCameraParameters *)0x0) {
    uVar1 = QCameraParameters::getExifSaturation(*(QCameraParameters **)this);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_0010292c + 0x102926,DAT_00102930 + 0x102928,DAT_00102934 + 0x10292a);
}

