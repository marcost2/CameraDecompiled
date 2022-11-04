
/* qcamera::QCameraStateMachine::isPreviewReady() */

uint __thiscall qcamera::QCameraStateMachine::isPreviewReady(QCameraStateMachine *this)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)(this + 8) + -1);
  return uVar1 >> 5;
}

