
/* qcamera::QCamera2HardwareInterface::lockAPI() */

void __thiscall qcamera::QCamera2HardwareInterface::lockAPI(QCamera2HardwareInterface *this)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
  return;
}

