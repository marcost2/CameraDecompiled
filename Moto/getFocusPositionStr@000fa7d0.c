
/* qcamera::QCameraParameters::getFocusPositionStr() */

void __thiscall qcamera::QCameraParameters::getFocusPositionStr(QCameraParameters *this)

{
  android::CameraParameters::get((char *)this);
  return;
}

