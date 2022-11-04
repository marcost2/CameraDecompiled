
/* qcamera::QCamera3PostProcessor::processPPMetadata(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processPPMetadata
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000a938c + 0xa9306);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a9394 + 0xa931e,0x2ed,DAT_000a9390 + 0xa9316);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x600));
  QCameraQueue::enqueue((QCameraQueue *)(this + 0x578),param_1);
  iVar1 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x47c));
  iVar2 = *(int *)(iVar2 + 0x2c);
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      mm_camera_debug_log(1,4,DAT_000a939c + 0xa9370,0x2f2,DAT_000a9398 + 0xa9368);
    }
    QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
  }
  else if (iVar2 != 0) {
    mm_camera_debug_log(1,4,DAT_000a93a4 + 0xa9356,0x2f5,DAT_000a93a0 + 0xa934e);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x600));
  return 0;
}

