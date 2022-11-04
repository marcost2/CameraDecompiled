
/* qcamera::QCameraStateMachine::releaseThread() */

void __thiscall qcamera::QCameraStateMachine::releaseThread(QCameraStateMachine *this)

{
  undefined4 *__ptr;
  int iVar1;
  
  if (*(int *)(this + 0x54) != 0) {
    __ptr = (undefined4 *)malloc(0xc);
    if (__ptr != (undefined4 *)0x0) {
      __ptr[2] = 0;
      __ptr[1] = 0;
      *__ptr = 2;
      iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0xc),__ptr);
      if (iVar1 == 0) {
        free(__ptr);
      }
      else {
        pthread_mutex_lock((pthread_mutex_t *)(this + 0x5c));
        *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
        pthread_cond_signal((pthread_cond_t *)(this + 0x60));
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x5c));
      }
      iVar1 = pthread_join(*(pthread_t *)(this + 0x54),(void **)0x0);
      if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000c86c0 + 0xc86a0) + 0x24) != 0)) {
        mm_camera_debug_log(1,2,DAT_000c86c8 + 0xc86b6,0xb2,DAT_000c86c4 + 0xc86ae);
      }
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  return;
}

