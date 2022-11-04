
/* qcamera::QCameraStateMachine::procAPI(qcamera::qcamera_sm_evt_enum_t, void*) */

undefined4 __thiscall
qcamera::QCameraStateMachine::procAPI
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined4 *__ptr;
  int iVar1;
  
  __ptr = (undefined4 *)malloc(0xc);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000c8794 + 0xc8744) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c879c + 0xc875a,0xe5,DAT_000c8798 + 0xc8752);
    }
    return 0xfffffff4;
  }
  *__ptr = 0;
  __ptr[1] = param_1;
  __ptr[2] = param_2;
  iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 0xc),__ptr);
  if (iVar1 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x5c));
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    pthread_cond_signal((pthread_cond_t *)(this + 0x60));
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x5c));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000c87a0 + 0xc876a) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c87a8 + 0xc8782,0xf1,DAT_000c87a4 + 0xc8778,param_1);
  }
  free(__ptr);
  return 0x80000000;
}

