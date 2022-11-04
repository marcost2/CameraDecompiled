
/* qcamera::QCameraParametersIntf::isHighQualityNoiseReductionMode() */

undefined __thiscall
qcamera::QCameraParametersIntf::isHighQualityNoiseReductionMode(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2da);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd880 + 0xfd878,DAT_000fd884 + 0xfd87a,DAT_000fd888 + 0xfd87c);
}

