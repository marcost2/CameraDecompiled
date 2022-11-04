
/* qcamera::QCameraParametersIntf::getMotCtrl() */

undefined4 __thiscall qcamera::QCameraParametersIntf::getMotCtrl(QCameraParametersIntf *this)

{
  if (*(int *)this != 0) {
    return *(undefined4 *)(*(int *)this + 0xd1c);
  }
  return 0;
}

