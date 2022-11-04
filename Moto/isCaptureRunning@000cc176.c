
/* qcamera::QCameraStateMachine::isCaptureRunning() */

uint __thiscall qcamera::QCameraStateMachine::isCaptureRunning(QCameraStateMachine *this)

{
  if (*(int *)(this + 8) - 4U < 4) {
    return 0xdU >> (*(int *)(this + 8) - 4U & 0xf) & 1;
  }
  return 0;
}

