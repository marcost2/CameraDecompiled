
/* qcamera::QCamera2Factory::cameraDeviceOpen(int, hw_device_t**) */

int __thiscall
qcamera::QCamera2Factory::cameraDeviceOpen(QCamera2Factory *this,int param_1,hw_device_t **param_2)

{
  int *this_00;
  QCamera3HardwareInterface *this_01;
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    if (*(int *)(this + 8) != 0) {
      iVar2 = *(int *)(DAT_0003a320 + 0x3a254);
      if (*(int *)(iVar2 + 0x50) != 0) {
        mm_camera_debug_log();
      }
      iVar1 = *(int *)(this + 8);
      if (*(int *)(iVar1 + param_1 * 8 + 4) == 0x300) {
        this_00 = (int *)operator_new(0x117948);
        this_01 = (QCamera3HardwareInterface *)
                  QCamera3HardwareInterface::QCamera3HardwareInterface
                            ((QCamera3HardwareInterface *)this_00,*(uint *)(iVar1 + param_1 * 8),
                             *(camera_module_callbacks **)(this + 0xc));
        iVar2 = QCamera3HardwareInterface::openCamera(this_01,param_2);
        if (iVar2 != 0) {
          (**(code **)(*this_00 + 4))(this_00);
          return iVar2;
        }
        return 0;
      }
      if (*(int *)(iVar2 + 0x3c) != 0) {
        mm_camera_debug_log();
      }
      return -0x16;
    }
    if (*(int *)(*(int *)(DAT_0003a314 + 0x3a2be) + 0x3c) != 0) {
      mm_camera_debug_log();
      return -0x13;
    }
  }
  return -0x13;
}

