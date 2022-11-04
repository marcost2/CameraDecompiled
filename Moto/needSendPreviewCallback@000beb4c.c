
/* qcamera::QCamera2HardwareInterface::needSendPreviewCallback() */

QCamera2HardwareInterface __thiscall
qcamera::QCamera2HardwareInterface::needSendPreviewCallback(QCamera2HardwareInterface *this)

{
  QCamera2HardwareInterface QVar1;
  int iVar2;
  
  iVar2 = QCameraStateMachine::isPreviewRunning((QCameraStateMachine *)(this + 0x4dc));
  if ((iVar2 != 0) && (*(int *)(this + 0x4c0) != 0)) {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x928));
    iVar2 = *(int *)(this + 0x4b4);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x928));
    if (iVar2 << 0x1b < 0) {
      QVar1 = this[0x549];
      if (QVar1 != (QCamera2HardwareInterface)0x0) {
        QVar1 = (QCamera2HardwareInterface)0x1;
      }
      return QVar1;
    }
  }
  return (QCamera2HardwareInterface)0x0;
}

