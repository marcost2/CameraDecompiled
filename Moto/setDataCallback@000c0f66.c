
/* qcamera::QCameraMuxer::setDataCallback(void (*)(int, camera_memory const*, unsigned int,
   camera_frame_metadata*, void*)) */

undefined4 __thiscall qcamera::QCameraMuxer::setDataCallback(QCameraMuxer *this,FuncDef97 *param_1)

{
  if (param_1 != (FuncDef97 *)0x0) {
    *(FuncDef97 **)(this + 0x24) = param_1;
    return 0;
  }
  return 0x80000001;
}

