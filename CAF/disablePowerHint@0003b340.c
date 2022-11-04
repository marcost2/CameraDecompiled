
/* qcamera::QCamera3HardwareInterface::disablePowerHint() */

void __thiscall
qcamera::QCamera3HardwareInterface::disablePowerHint(QCamera3HardwareInterface *this)

{
  if (this[0x1178f4] != (QCamera3HardwareInterface)0x0) {
    QCameraPerfLock::powerHint((QCameraPerfLock *)(this + 0x98),3,false);
    this[0x1178f4] = (QCamera3HardwareInterface)0x0;
  }
  return;
}

