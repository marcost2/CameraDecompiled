
/* qcamera::QCamera3HardwareInterface::getEepromVersionInfo() */

int __thiscall
qcamera::QCamera3HardwareInterface::getEepromVersionInfo(QCamera3HardwareInterface *this)

{
  return *(int *)(*(int *)(DAT_00098b18 + 0x98b0c) + *(int *)(this + 0x60) * 4) + 0x3ff0;
}

