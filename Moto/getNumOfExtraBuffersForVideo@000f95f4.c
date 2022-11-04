
/* qcamera::QCameraParameters::getNumOfExtraBuffersForVideo() */

undefined4 __thiscall
qcamera::QCameraParameters::getNumOfExtraBuffersForVideo(QCameraParameters *this)

{
  if ((this[0x2d8] == (QCameraParameters)0x0) && (this[0x2da] == (QCameraParameters)0x0)) {
    return 0;
  }
  return 1;
}

