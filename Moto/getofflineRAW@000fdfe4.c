
/* qcamera::QCameraParametersIntf::getofflineRAW() */

undefined __thiscall qcamera::QCameraParametersIntf::getofflineRAW(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x301);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fe014 + 0xfe00c,DAT_000fe018 + 0xfe00e,DAT_000fe01c + 0xfe010);
}

