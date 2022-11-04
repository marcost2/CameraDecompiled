
/* qcamera::QCameraParameters::getNumOfExtraBuffersForPreview() */

QCameraParameters __thiscall
qcamera::QCameraParameters::getNumOfExtraBuffersForPreview(QCameraParameters *this)

{
  if ((this[0x2d8] == (QCameraParameters)0x0) && (this[0x2da] == (QCameraParameters)0x0)) {
    return (QCameraParameters)0x0;
  }
  return this[0x213];
}

