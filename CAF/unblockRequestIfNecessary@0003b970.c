
/* qcamera::QCamera3HardwareInterface::unblockRequestIfNecessary() */

void __thiscall
qcamera::QCamera3HardwareInterface::unblockRequestIfNecessary(QCamera3HardwareInterface *this)

{
  __ThumbV7PILongThunk_pthread_cond_signal((pthread_cond_t *)(this + 0x20c));
  return;
}

