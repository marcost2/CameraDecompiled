
/* qcamera::QCameraCmdThread::sendCmd(qcamera::camera_cmd_type_t, unsigned char, unsigned char) */

undefined4 __thiscall
qcamera::QCameraCmdThread::sendCmd
          (QCameraCmdThread *this,camera_cmd_type_t param_1,uchar param_2,uchar param_3)

{
  camera_cmd_type_t *__ptr;
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __ptr = (camera_cmd_type_t *)malloc(4);
  if (__ptr != (camera_cmd_type_t *)0x0) {
    *__ptr = param_1;
    if (param_3 == '\0') {
      iVar1 = QCameraQueue::enqueue((QCameraQueue *)this,__ptr);
    }
    else {
      iVar1 = QCameraQueue::enqueueWithPriority((QCameraQueue *)this,__ptr);
    }
    if (iVar1 == 0) {
      free(__ptr);
    }
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x2c));
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    pthread_cond_signal((pthread_cond_t *)(this + 0x30));
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x2c));
    if (param_2 != '\0') {
      __mutex = (pthread_mutex_t *)(this + 0x38);
      pthread_mutex_lock(__mutex);
      iVar1 = *(int *)(this + 0x34);
      if (iVar1 == 0) {
        do {
          pthread_cond_wait((pthread_cond_t *)(this + 0x3c),__mutex);
          iVar1 = *(int *)(this + 0x34);
        } while (iVar1 == 0);
      }
      *(int *)(this + 0x34) = iVar1 + -1;
      pthread_mutex_unlock(__mutex);
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_0007c394 + 0x7c366) + 0x3c) != 0) {
    mm_camera_debug_log(2,1,DAT_0007c39c + 0x7c37c,0x8f,DAT_0007c398 + 0x7c374);
  }
  return 0xfffffff4;
}

