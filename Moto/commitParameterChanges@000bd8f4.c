
/* qcamera::QCamera2HardwareInterface::commitParameterChanges() */

void qcamera::QCamera2HardwareInterface::commitParameterChanges(void)

{
  int in_r0;
  int iVar1;
  
  iVar1 = QCameraParametersIntf::commitParameters();
  if (iVar1 == 0) {
    (*(code *)PTR_setNumOfSnapshot_00119e48)(in_r0 + 0x4ac);
    return;
  }
  return;
}

