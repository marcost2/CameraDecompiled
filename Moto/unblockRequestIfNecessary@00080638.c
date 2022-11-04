
/* qcamera::QCamera3HardwareInterface::unblockRequestIfNecessary() */

void __thiscall
qcamera::QCamera3HardwareInterface::unblockRequestIfNecessary(QCamera3HardwareInterface *this)

{
  pthread_cond_signal((pthread_cond_t *)(this + 0x274));
  return;
}

