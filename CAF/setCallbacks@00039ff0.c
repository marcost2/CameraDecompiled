
/* qcamera::QCamera2Factory::setCallbacks(camera_module_callbacks const*) */

int __thiscall
qcamera::QCamera2Factory::setCallbacks(QCamera2Factory *this,camera_module_callbacks *param_1)

{
  QCameraFlash *this_00;
  int iVar1;
  
  *(camera_module_callbacks **)(this + 0xc) = param_1;
  this_00 = (QCameraFlash *)QCameraFlash::getInstance();
  iVar1 = QCameraFlash::registerCallbacks(this_00,param_1);
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_0003a02c + 0x3a00c) + 0x3c) != 0)) {
    mm_camera_debug_log();
  }
  return iVar1;
}

