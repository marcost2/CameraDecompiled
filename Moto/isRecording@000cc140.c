
/* qcamera::QCameraStateMachine::isRecording() */

bool __thiscall qcamera::QCameraStateMachine::isRecording(QCameraStateMachine *this)

{
  return *(int *)(this + 8) - 5U < 2;
}

