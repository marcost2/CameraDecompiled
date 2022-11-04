
/* qcamera::QCameraParametersIntf::isJpegPictureFormat() */

uint __thiscall qcamera::QCameraParametersIntf::isJpegPictureFormat(QCameraParametersIntf *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar2 = *(undefined4 *)(*(int *)this + 0x22c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    uVar1 = count_leading_zeroes(uVar2);
    return uVar1 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd148 + 0xfd140,DAT_000fd14c + 0xfd142,DAT_000fd150 + 0xfd144);
}

