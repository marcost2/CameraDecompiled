
/* qcamera::QCamera3HardwareInterface::getLdafCalib() */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::getLdafCalib(QCamera3HardwareInterface *this)

{
  QCamera3HardwareInterface *pQVar1;
  
  pQVar1 = (QCamera3HardwareInterface *)(uint)(byte)this[0x1178e8];
  if (pQVar1 != (QCamera3HardwareInterface *)0x0) {
    pQVar1 = this + 0x1178ec;
  }
  return pQVar1;
}

