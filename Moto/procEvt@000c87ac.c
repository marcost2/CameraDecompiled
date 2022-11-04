
/* qcamera::QCameraStateMachine::procEvt(qcamera::qcamera_sm_evt_enum_t, void*) */

undefined4 __thiscall
qcamera::QCameraStateMachine::procEvt
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined4 *__ptr;
  int iVar1;
  
  __ptr = (undefined4 *)malloc(0xc);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000c8850 + 0xc87fc) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8858 + 0xc8814,0x10b,DAT_000c8854 + 0xc880c);
    }
    return 0xfffffff4;
  }
  *__ptr = 1;
  __ptr[1] = param_1;
  __ptr[2] = param_2;
  iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0x30),__ptr);
  if (iVar1 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x5c));
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    pthread_cond_signal((pthread_cond_t *)(this + 0x60));
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x5c));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000c885c + 0xc8824) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c8864 + 0xc883e,0x117,DAT_000c8860 + 0xc8834,param_1);
  }
  free(__ptr);
  return 0x80000000;
}

