
/* qcamera::QCamera2HardwareInterface::processEvt(qcamera::qcamera_sm_evt_enum_t, void*) */

void qcamera::QCamera2HardwareInterface::processEvt(qcamera_sm_evt_enum_t param_1,void *param_2)

{
  void *in_r2;
  
  QCameraStateMachine::procEvt
            ((QCameraStateMachine *)(param_1 + 0x4dc),(qcamera_sm_evt_enum_t)param_2,in_r2);
  return;
}

