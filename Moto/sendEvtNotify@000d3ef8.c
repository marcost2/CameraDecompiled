
/* qcamera::QCameraPostProcessor::sendEvtNotify(int, int, int) */

void qcamera::QCameraPostProcessor::sendEvtNotify(int param_1,int param_2,int param_3)

{
  int in_r3;
  
  QCamera2HardwareInterface::sendEvtNotify
            (*(QCamera2HardwareInterface **)(param_1 + 8),param_2,param_3,in_r3);
  return;
}

