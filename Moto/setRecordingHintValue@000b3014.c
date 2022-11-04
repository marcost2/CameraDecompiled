
/* qcamera::QCamera2HardwareInterface::setRecordingHintValue(int) */

void qcamera::QCamera2HardwareInterface::setRecordingHintValue(int param_1)

{
  int in_r1;
  
  QCameraParametersIntf::updateRecordingHintValue((QCameraParametersIntf *)(param_1 + 0x4ac),in_r1);
  return;
}

