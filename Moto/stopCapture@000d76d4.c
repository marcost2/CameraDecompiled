
/* qcamera::QCameraPostProcessor::stopCapture() */

undefined4 __thiscall qcamera::QCameraPostProcessor::stopCapture(QCameraPostProcessor *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = QCamera2HardwareInterface::isRegularCapture(*(QCamera2HardwareInterface **)(this + 8));
  if (iVar1 != 0) {
    uVar2 = QCamera2HardwareInterface::processAPI(*(qcamera_sm_evt_enum_t *)(this + 8),(void *)0x26)
    ;
    return uVar2;
  }
  return 0;
}

