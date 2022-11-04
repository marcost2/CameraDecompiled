
/* qcamera::QCamera2HardwareInterface::unlockAPI() */

void __thiscall qcamera::QCamera2HardwareInterface::unlockAPI(QCamera2HardwareInterface *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  return;
}

