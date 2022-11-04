
/* qcamera::QCameraStream::putBufsDeffered() */

undefined4 __thiscall qcamera::QCameraStream::putBufsDeffered(QCameraStream *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x2e4) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
    if (this[0x10061] != (QCameraStream)0x0) {
      this[0x10061] = (QCameraStream)0x0;
      this[0x8e] = (QCameraStream)0x0;
      pthread_cond_signal((pthread_cond_t *)(this + 0x10068));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
    iVar1 = *(int *)(DAT_000cf54c + 0xcf4fe);
    if (*(int *)(iVar1 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000cf550 + 0xcf510,0x926,DAT_000cf554 + 0xcf512,
                          DAT_000cf550 + 0xcf510);
    }
    pthread_join(*(pthread_t *)(this + 0x2e4),(void **)0x0);
    *(undefined4 *)(this + 0x2e4) = 0;
    if (*(int *)(iVar1 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000cf558 + 0xcf53c,0x92a,DAT_000cf55c + 0xcf53e,
                          DAT_000cf558 + 0xcf53c);
    }
  }
  return 0;
}

