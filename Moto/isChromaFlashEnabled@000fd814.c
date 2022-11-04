
/* qcamera::QCameraParametersIntf::isChromaFlashEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isChromaFlashEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2ca);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd844 + 0xfd83c,DAT_000fd848 + 0xfd83e,DAT_000fd84c + 0xfd840);
}

