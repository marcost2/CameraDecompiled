
/* qcamera::QCamera2HardwareInterface::configureOptiZoom() */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::configureOptiZoom(QCamera2HardwareInterface *this)

{
  undefined4 uVar1;
  QCameraParametersIntf *this_00;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  uVar1 = QCameraParametersIntf::getParmZoomLevel(this_00);
  *(undefined4 *)(this + 0x1bdc) = uVar1;
  QCameraParametersIntf::setAndCommitZoom(this_00,0);
  QCameraParametersIntf::set3ALock(this_00,true);
  this[0xab9] = (QCamera2HardwareInterface)0x1;
  return 0;
}

