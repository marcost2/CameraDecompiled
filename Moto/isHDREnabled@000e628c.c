
/* qcamera::QCameraParameters::isHDREnabled() */

QCameraParameters __thiscall qcamera::QCameraParameters::isHDREnabled(QCameraParameters *this)

{
  QCameraParameters QVar1;
  
  if (this[0x288] != (QCameraParameters)0x0) {
    return (QCameraParameters)0x1;
  }
  QVar1 = this[0x299];
  if (QVar1 != (QCameraParameters)0x0) {
    QVar1 = (QCameraParameters)0x1;
  }
  return QVar1;
}

