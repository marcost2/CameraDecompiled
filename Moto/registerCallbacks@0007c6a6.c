
/* qcamera::QCameraFlash::registerCallbacks(camera_module_callbacks const*) */

undefined4 __thiscall
qcamera::QCameraFlash::registerCallbacks(QCameraFlash *this,camera_module_callbacks *param_1)

{
  *(camera_module_callbacks **)(this + 4) = param_1;
  return 0;
}

