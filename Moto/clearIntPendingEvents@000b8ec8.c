
/* qcamera::QCamera2HardwareInterface::clearIntPendingEvents() */

void __thiscall
qcamera::QCamera2HardwareInterface::clearIntPendingEvents(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  if (this[0x1c23] != (QCamera2HardwareInterface)0x0) {
    preparePreview(this);
    startPreview(this);
  }
  if ((this[0x1c22] != (QCamera2HardwareInterface)0x0) &&
     (iVar1 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(this + 0x4ac)), iVar1 == 0)
     ) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    if (this[0x54c] != (QCamera2HardwareInterface)0x0) {
      QCameraStateMachine::procAPI((QCameraStateMachine *)(this + 0x4dc),0xd,(void *)0x0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1c68));
  if (this[0x1c22] == (QCamera2HardwareInterface)0x0) {
    if (this[0x1c23] != (QCamera2HardwareInterface)0x0) {
      this[0x1c23] = (QCamera2HardwareInterface)0x0;
    }
  }
  else {
    this[0x1c22] = (QCamera2HardwareInterface)0x0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1c68));
  return;
}

