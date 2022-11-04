
/* qcamera::QCameraParameters::setHDRSceneEnable(bool) */

void __thiscall qcamera::QCameraParameters::setHDRSceneEnable(QCameraParameters *this,bool param_1)

{
  QCameraParameters QVar1;
  
  QVar1 = this[0x299];
  this[0x299] = (QCameraParameters)param_1;
  if (QVar1 == (QCameraParameters)param_1) {
    return;
  }
  updateFlash(SUB41(this,0));
  return;
}

