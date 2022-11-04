
/* qcamera::QCamera3HardwareInterface::getLdafCalib() */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::getLdafCalib(QCamera3HardwareInterface *this)

{
  QCamera3HardwareInterface *pQVar1;
  
  pQVar1 = (QCamera3HardwareInterface *)(uint)(byte)this[0x117fb0];
  if (pQVar1 != (QCamera3HardwareInterface *)0x0) {
    pQVar1 = this + 0x117fb4;
  }
  return pQVar1;
}

