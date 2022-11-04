
/* qcamera::QCamera3PostProcessor::processData(mm_camera_super_buf_t*, native_handle const**,
   unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processData
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1,native_handle **param_2,
          uint param_3)

{
  mm_camera_super_buf_t **ppmVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000a90a0 + 0xa8fe8);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a90a8 + 0xa9000,0x262,DAT_000a90a4 + 0xa8ff8);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x600));
  ppmVar1 = (mm_camera_super_buf_t **)malloc(0xc);
  if (ppmVar1 != (mm_camera_super_buf_t **)0x0) {
    *ppmVar1 = param_1;
    ppmVar1[1] = (mm_camera_super_buf_t *)param_2;
    ppmVar1[2] = (mm_camera_super_buf_t *)param_3;
    QCameraQueue::enqueue((QCameraQueue *)(this + 0x47c),ppmVar1);
    iVar2 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x578));
    if (iVar2 == 0) {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a90b8 + 0xa9082,0x272,DAT_000a90b4 + 0xa907a);
      }
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
    }
    else if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a90c0 + 0xa9044,0x275,DAT_000a90bc + 0xa903c);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x600));
    return 0;
  }
  if (*(int *)(iVar3 + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a90b0 + 0xa9060,0x269,DAT_000a90ac + 0xa9058);
  }
  return 0xfffffff4;
}

