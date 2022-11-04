
/* qcamera::QCameraMuxer::setCallbacks(camera_module_callbacks const*) */

undefined4 __thiscall
qcamera::QCameraMuxer::setCallbacks(QCameraMuxer *this,camera_module_callbacks *param_1)

{
  if (param_1 != (camera_module_callbacks *)0x0) {
    *(camera_module_callbacks **)(this + 0x34) = param_1;
    return 0;
  }
  return 0x80000001;
}

