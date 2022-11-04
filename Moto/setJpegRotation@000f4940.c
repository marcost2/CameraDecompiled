
/* qcamera::QCameraParameters::setJpegRotation(int) */

void __thiscall qcamera::QCameraParameters::setJpegRotation(QCameraParameters *this,int param_1)

{
  if (param_1 < 0xb4) {
    if ((param_1 != 0) && (param_1 != 0x5a)) {
      return;
    }
  }
  else if (param_1 != 0x10e && param_1 != 0xb4) {
    return;
  }
  *(int *)(this + 0x7a0) = param_1;
  return;
}

