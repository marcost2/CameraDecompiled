
/* qcamera::QCameraCmdThread::getCmd() */

undefined4 __thiscall qcamera::QCameraCmdThread::getCmd(QCameraCmdThread *this)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  
  __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)this,true);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_0007c3dc + 0x7c3ba) + 0x48) != 0) {
      mm_camera_debug_log(2,4,DAT_0007c3e4 + 0x7c3d0,0xb7,DAT_0007c3e0 + 0x7c3c8);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = *__ptr;
    free(__ptr);
  }
  return uVar1;
}

