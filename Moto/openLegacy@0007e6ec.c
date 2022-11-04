
/* qcamera::QCamera2Factory::openLegacy(int, unsigned int, hw_device_t**) */

int qcamera::QCamera2Factory::openLegacy(int param_1,uint param_2,hw_device_t **param_3)

{
  int *this;
  QCamera2HardwareInterface *this_00;
  int iVar1;
  
  iVar1 = *(int *)(DAT_0007e788 + 0x7e6fc);
  if (*(int *)(iVar1 + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_0007e790 + 0x7e716,0x228,DAT_0007e78c + 0x7e70c,param_2);
  }
  if ((param_1 < 0) || (*(int *)(**(int **)(DAT_0007e794 + 0x7e722) + 4) <= param_1)) {
    iVar1 = -0x13;
  }
  else if (param_2 == 0x100) {
    this = (int *)operator_new(0x1f90);
    this_00 = (QCamera2HardwareInterface *)
              QCamera2HardwareInterface::QCamera2HardwareInterface
                        ((QCamera2HardwareInterface *)this,param_1);
    iVar1 = QCamera2HardwareInterface::openCamera(this_00,param_3);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      (**(code **)(*this + 0x24))(this);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007e79c + 0x7e77a,0x241,DAT_0007e798 + 0x7e76e,param_2,param_1);
    }
    iVar1 = -0x16;
  }
  return iVar1;
}

