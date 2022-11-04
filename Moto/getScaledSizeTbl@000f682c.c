
/* qcamera::QCameraParameters::QCameraReprocScaleParam::getScaledSizeTbl() */

QCameraReprocScaleParam * __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::getScaledSizeTbl(QCameraReprocScaleParam *this)

{
  QCameraReprocScaleParam *pQVar1;
  
  pQVar1 = this + 0x10;
  if ((QCameraReprocScaleParam *)(uint)(byte)*this == (QCameraReprocScaleParam *)0x0) {
    pQVar1 = (QCameraReprocScaleParam *)(uint)(byte)*this;
  }
  return pQVar1;
}

