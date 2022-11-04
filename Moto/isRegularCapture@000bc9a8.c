
/* qcamera::QCamera2HardwareInterface::isRegularCapture() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::isRegularCapture(QCamera2HardwareInterface *this)

{
  int iVar1;
  QCameraParametersIntf *this_00;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::getNumOfSnapshots(this_00);
  if ((((iVar1 == 1) && (this[0xa9e] == (QCamera2HardwareInterface)0x0)) &&
      (iVar1 = QCameraParametersIntf::isHDREnabled(this_00), iVar1 == 0)) &&
     (((iVar1 = QCameraParametersIntf::getRecordingHintValue(this_00), iVar1 == 0 &&
       (iVar1 = QCameraParametersIntf::isZSLMode(this_00), iVar1 == 0)) &&
      ((iVar1 = QCameraParametersIntf::getofflineRAW(this_00), iVar1 == 0 ||
       (iVar1 = QCameraParametersIntf::getQuadraCfa(this_00), iVar1 != 0)))))) {
    return 1;
  }
  return 0;
}

