
/* qcamera::QCameraParameters::isZSLMode() */

QCameraParameters __thiscall qcamera::QCameraParameters::isZSLMode(QCameraParameters *this)

{
  QCameraParameters QVar1;
  
  if (this[0x213] != (QCameraParameters)0x0) {
    return (QCameraParameters)0x0;
  }
  QVar1 = this[0x210];
  if (QVar1 != (QCameraParameters)0x0) {
    QVar1 = (QCameraParameters)0x1;
  }
  return QVar1;
}

