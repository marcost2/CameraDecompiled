
/* qcamera::QCamera2HardwareInterface::needDeferred(cam_stream_type_t) */

uint __thiscall
qcamera::QCamera2HardwareInterface::needDeferred
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 1:
    uVar2 = *(uint *)(this + 0x4a8);
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    return uVar2;
  case 2:
  case 7:
    goto switchD_000bb530_caseD_b;
  case 3:
    iVar1 = QCameraParametersIntf::getRecordingHintValue((QCameraParametersIntf *)(this + 0x4ac));
    if (iVar1 != 0) {
      return 0;
    }
switchD_000bb530_caseD_b:
    return 1;
  default:
    return 0;
  case 8:
    uVar2 = QCameraParametersIntf::getofflineRAW((QCameraParametersIntf *)(this + 0x4ac));
    return uVar2 ^ 1;
  case 0xb:
    return 0;
  }
}

