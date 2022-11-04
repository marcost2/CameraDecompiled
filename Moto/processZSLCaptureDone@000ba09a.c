
/* qcamera::QCamera2HardwareInterface::processZSLCaptureDone() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::processZSLCaptureDone(QCamera2HardwareInterface *this)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1dc0);
  *(uint *)(this + 0x1dc0) = iVar3 + 1U;
  uVar1 = QCameraParametersIntf::getBurstCountForAdvancedCapture
                    ((QCameraParametersIntf *)(this + 0x4ac));
  if (iVar3 + 1U < uVar1) {
    return 0;
  }
  uVar2 = unconfigureAdvancedCapture(this);
  return uVar2;
}

