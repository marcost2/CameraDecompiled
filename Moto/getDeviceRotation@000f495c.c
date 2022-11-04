
/* qcamera::QCameraParameters::getDeviceRotation() */

uint __thiscall qcamera::QCameraParameters::getDeviceRotation(QCameraParameters *this)

{
  return *(uint *)(this + 0x79c) & ~((int)*(uint *)(this + 0x79c) >> 0x1f);
}

