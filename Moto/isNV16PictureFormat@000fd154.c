
/* qcamera::QCameraParametersIntf::isNV16PictureFormat() */

uint __thiscall qcamera::QCameraParametersIntf::isNV16PictureFormat(QCameraParametersIntf *this)

{
  uint uVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    iVar2 = *(int *)(*(int *)this + 0x22c);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    uVar1 = count_leading_zeroes(iVar2 + -5);
    return uVar1 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd188 + 0xfd182,DAT_000fd18c + 0xfd184,DAT_000fd190 + 0xfd186);
}

