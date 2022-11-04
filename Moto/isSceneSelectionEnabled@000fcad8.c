
/* qcamera::QCameraParametersIntf::isSceneSelectionEnabled() */

undefined __thiscall
qcamera::QCameraParametersIntf::isSceneSelectionEnabled(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x2cc);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fcb08 + 0xfcb00,DAT_000fcb0c + 0xfcb02,DAT_000fcb10 + 0xfcb04);
}

