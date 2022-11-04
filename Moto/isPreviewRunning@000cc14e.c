
/* qcamera::QCameraStateMachine::isPreviewRunning() */

uint __thiscall qcamera::QCameraStateMachine::isPreviewRunning(QCameraStateMachine *this)

{
  if (*(int *)(this + 8) - 1U < 7) {
    return 0x77U >> (*(int *)(this + 8) - 1U & 0x7f) & 1;
  }
  return 0;
}

