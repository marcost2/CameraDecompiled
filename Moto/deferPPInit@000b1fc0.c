
/* qcamera::QCamera2HardwareInterface::deferPPInit() */

void __thiscall qcamera::QCamera2HardwareInterface::deferPPInit(QCamera2HardwareInterface *this)

{
  queueDeferredWork((DeferredWorkCmd)this,2);
  return;
}

