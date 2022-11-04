
/* qcamera::QCamera3HardwareInterface::getSensorSensitivity(int) */

undefined4 qcamera::QCamera3HardwareInterface::getSensorSensitivity(int param_1)

{
  if (param_1 - 3U < 5) {
    return *(undefined4 *)(DAT_00093f90 + 0x93f84 + (param_1 - 3U) * 4);
  }
  return 0xffffffff;
}

