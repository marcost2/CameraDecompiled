
/* qcamera::QCameraParametersIntf::isNV21PictureFormat() */

uint __thiscall qcamera::QCameraParametersIntf::isNV21PictureFormat(QCameraParametersIntf *this)

{
  uint uVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    iVar2 = *(int *)(*(int *)this + 0x22c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    uVar1 = count_leading_zeroes(iVar2 + -2);
    return uVar1 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd1c8 + 0xfd1c2,DAT_000fd1cc + 0xfd1c4,DAT_000fd1d0 + 0xfd1c6);
}

