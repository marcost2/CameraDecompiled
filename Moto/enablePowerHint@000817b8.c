
/* qcamera::QCamera3HardwareInterface::enablePowerHint() */

void __thiscall qcamera::QCamera3HardwareInterface::enablePowerHint(QCamera3HardwareInterface *this)

{
  if (this[0x117fbc] != (QCamera3HardwareInterface)0x0) {
    return;
  }
  QCameraPerfLock::powerHint((QCameraPerfLock *)(this + 0xa8),3,true);
  this[0x117fbc] = (QCamera3HardwareInterface)0x1;
  return;
}

