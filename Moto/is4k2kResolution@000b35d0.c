
/* qcamera::QCamera2HardwareInterface::is4k2kResolution(cam_dimension_t*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::is4k2kResolution
          (QCamera2HardwareInterface *this,cam_dimension_t *param_1)

{
  if (*(int *)param_1 == 0xf00) {
    if (*(int *)(param_1 + 4) != 0x870) {
      return 0;
    }
  }
  else {
    if (*(int *)param_1 != 0x1000) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0x870) {
      return 0;
    }
  }
  return 1;
}

