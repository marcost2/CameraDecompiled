
/* qcamera::QCameraStateMachine::isNonZSLCaptureRunning() */

uint __thiscall qcamera::QCameraStateMachine::isNonZSLCaptureRunning(QCameraStateMachine *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)(this + 8) + -4);
  return uVar1 >> 5;
}

