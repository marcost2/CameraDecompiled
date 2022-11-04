
/* qcamera::BSTLiveBokeh::getStatus() */

undefined4 __thiscall qcamera::BSTLiveBokeh::getStatus(BSTLiveBokeh *this)

{
  int iVar1;
  
  if (*(int *)(*(int *)(DAT_00101970 + 0x101910) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_00101974 + 0x101920,0x15d,DAT_0010197c + 0x101924,
                        DAT_00101978 + 0x101922,DAT_00101974 + 0x101920,*(undefined4 *)(this + 0x2c)
                       );
  }
  iVar1 = QCameraQueue::isEmpty((QCameraQueue *)(this + 0x1c));
  if (iVar1 != 0) {
    return 0;
  }
  if (0 < *(int *)(this + 0x2c)) {
    iVar1 = 0;
    do {
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x88),3,'\0','\0');
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x2c));
  }
  return 0xffffffff;
}

