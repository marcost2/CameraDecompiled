
/* qcamera::QCamera2Factory::set_callbacks(camera_module_callbacks const*) */

int qcamera::QCamera2Factory::set_callbacks(camera_module_callbacks *param_1)

{
  QCameraFlash *this;
  int iVar1;
  
  if (**(int **)(DAT_0007e5d8 + 0x7e588) == 0) {
    *(camera_module_callbacks **)(**(int **)(DAT_0007e5dc + 0x7e59e) + 0xc) = param_1;
    this = (QCameraFlash *)QCameraFlash::getInstance();
    iVar1 = QCameraFlash::registerCallbacks(this,param_1);
    if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_0007e5e0 + 0x7e5b6) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0007e5e8 + 0x7e5ce,0x196,DAT_0007e5e4 + 0x7e5c6);
    }
    return iVar1;
  }
  iVar1 = (*(code *)PTR_set_callbacks_001192f0)(param_1);
  return iVar1;
}

