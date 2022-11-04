
/* qcamera::QCamera3Stream::timeoutFrame(int) */

undefined4 __thiscall qcamera::QCamera3Stream::timeoutFrame(QCamera3Stream *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0009c660 + 0x9c5e6);
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c668 + 0x9c5fe,0x201,DAT_0009c664 + 0x9c5f6);
  }
  iVar1 = QCameraQueue::enqueue((QCameraQueue *)(this + 100),(void *)param_1);
  if (iVar1 == 0) {
    if (*(int *)(iVar3 + 0x48) == 0) {
      return 0;
    }
    mm_camera_debug_log(2,4,DAT_0009c670 + 0x9c636,0x206,DAT_0009c66c + 0x9c62e);
    uVar2 = 0;
  }
  else {
    uVar2 = QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),5,'\0','\0');
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    mm_camera_debug_log(2,4,DAT_0009c678 + 0x9c652,0x209,DAT_0009c674 + 0x9c64a);
  }
  return uVar2;
}

