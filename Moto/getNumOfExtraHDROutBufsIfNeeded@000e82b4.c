
/* qcamera::QCameraParameters::getNumOfExtraHDROutBufsIfNeeded() */

QCameraParameters __thiscall
qcamera::QCameraParameters::getNumOfExtraHDROutBufsIfNeeded(QCameraParameters *this)

{
  if ((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) {
    return (QCameraParameters)0x0;
  }
  return this[0x298];
}

