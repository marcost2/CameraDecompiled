
/* qcamera::QCameraParameters::getBrightness() */

void __thiscall qcamera::QCameraParameters::getBrightness(QCameraParameters *this)

{
  android::CameraParameters::getInt((char *)this);
  return;
}

