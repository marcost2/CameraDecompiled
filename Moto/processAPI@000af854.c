
/* qcamera::QCamera2HardwareInterface::processAPI(qcamera::qcamera_sm_evt_enum_t, void*) */

undefined4
qcamera::QCamera2HardwareInterface::processAPI(qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined4 uVar1;
  void *in_r2;
  
  if (*(char *)(param_1 + 0x54c) != '\0') {
    uVar1 = QCameraStateMachine::procAPI
                      ((QCameraStateMachine *)(param_1 + 0x4dc),(qcamera_sm_evt_enum_t)param_2,in_r2
                      );
    return uVar1;
  }
  return 0xffffffe0;
}

