
/* qcamera::QCamera3HardwareInterface::getEepromVersionInfo() */

int __thiscall
qcamera::QCamera3HardwareInterface::getEepromVersionInfo(QCamera3HardwareInterface *this)

{
  return *(int *)(*(int *)(DAT_00051300 + 0x512f4) + *(int *)(this + 0x4c) * 4) + 0x3ef8;
}

