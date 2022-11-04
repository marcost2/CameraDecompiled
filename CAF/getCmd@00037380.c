
/* qcamera::QCameraCmdThread::getCmd() */

undefined4 __thiscall qcamera::QCameraCmdThread::getCmd(QCameraCmdThread *this)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  
  __ptr = (undefined4 *)QCameraQueue::dequeue((QCameraQueue *)this,true);
  if (__ptr == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000373bc + 0x3739a) + 0x48) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = *__ptr;
    free(__ptr);
  }
  return uVar1;
}

