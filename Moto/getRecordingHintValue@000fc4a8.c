
/* qcamera::QCameraParametersIntf::getRecordingHintValue() */

undefined __thiscall
qcamera::QCameraParametersIntf::getRecordingHintValue(QCameraParametersIntf *this)

{
  undefined uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 4));
  if (*(int *)this != 0) {
    uVar1 = *(undefined *)(*(int *)this + 0x213);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 4));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(DAT_000fc4d8 + 0xfc4d0,DAT_000fc4dc + 0xfc4d2,DAT_000fc4e0 + 0xfc4d4);
}

