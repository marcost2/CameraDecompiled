
/* qcamera::QCameraParameters::QCameraReprocScaleParam::getTotalSizeTbl() */

QCameraReprocScaleParam * __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::getTotalSizeTbl(QCameraReprocScaleParam *this)

{
  QCameraReprocScaleParam *pQVar1;
  
  pQVar1 = this + 0x5c;
  if ((QCameraReprocScaleParam *)(uint)(byte)*this == (QCameraReprocScaleParam *)0x0) {
    pQVar1 = (QCameraReprocScaleParam *)(uint)(byte)*this;
  }
  return pQVar1;
}

