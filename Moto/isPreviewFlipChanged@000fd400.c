
/* qcamera::QCameraParametersIntf::isPreviewFlipChanged() */

undefined __thiscall
qcamera::QCameraParametersIntf::isPreviewFlipChanged(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x266);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fd430 + 0xfd428,DAT_000fd434 + 0xfd42a,DAT_000fd438 + 0xfd42c);
}

