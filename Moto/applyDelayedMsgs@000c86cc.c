
/* qcamera::QCameraStateMachine::applyDelayedMsgs() */

undefined4 __thiscall qcamera::QCameraStateMachine::applyDelayedMsgs(QCameraStateMachine *this)

{
  undefined4 uVar1;
  
  if (this[100] != (QCameraStateMachine)0x0) {
    if (*(int *)(this + 0x68) != 0) {
      uVar1 = QCamera2HardwareInterface::enableMsgType
                        (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
      *(undefined4 *)(this + 0x68) = 0;
      this[100] = (QCameraStateMachine)0x0;
      return uVar1;
    }
    this[100] = (QCameraStateMachine)0x0;
  }
  return 0;
}

