
/* qcamera::QCamera2HardwareInterface::stopCaptureChannel(bool) */

int __thiscall
qcamera::QCamera2HardwareInterface::stopCaptureChannel(QCamera2HardwareInterface *this,bool param_1)

{
  int iVar1;
  QCameraParametersIntf *this_00;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::isJpegPictureFormat(this_00);
  if (((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isNV16PictureFormat(this_00), iVar1 != 0)) ||
     (iVar1 = QCameraParametersIntf::isNV21PictureFormat(this_00), iVar1 != 0)) {
    QCameraParametersIntf::setQuadraCfaMode(this_00,0,true);
    if (*(int **)(this + 0x9b8) == (int *)0x0) {
      return -0x80000000;
    }
    iVar1 = (**(code **)(**(int **)(this + 0x9b8) + 0x18))();
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1 == false) {
      return 0;
    }
    waitDeferredWork(this,(uint *)(this + 0x1da8));
    if (*(QCameraChannel **)(this + 0x9b8) != (QCameraChannel *)0x0) {
      QCameraChannel::deleteChannel(*(QCameraChannel **)(this + 0x9b8));
    }
  }
  return 0;
}

