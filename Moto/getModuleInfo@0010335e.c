
/* qcamera::QCameraParametersIntf::getModuleInfo() */

int __thiscall qcamera::QCameraParametersIntf::getModuleInfo(QCameraParametersIntf *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x80c;
  }
  return iVar1;
}

