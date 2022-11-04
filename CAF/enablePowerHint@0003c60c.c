
/* qcamera::QCamera3HardwareInterface::enablePowerHint() */

void __thiscall qcamera::QCamera3HardwareInterface::enablePowerHint(QCamera3HardwareInterface *this)

{
  if (this[0x1178f4] != (QCamera3HardwareInterface)0x0) {
    return;
  }
  QCameraPerfLock::powerHint((QCameraPerfLock *)(this + 0x98),3,true);
  this[0x1178f4] = (QCamera3HardwareInterface)0x1;
  return;
}

