
/* qcamera::QCamera3HardwareInterface::getSensorSensitivity(int) */

undefined4 qcamera::QCamera3HardwareInterface::getSensorSensitivity(int param_1)

{
  if (param_1 - 2U < 5) {
    return *(undefined4 *)(DAT_0004d14c + 0x4d140 + (param_1 - 2U) * 4);
  }
  return 0xffffffff;
}

