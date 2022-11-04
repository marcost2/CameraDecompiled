
/* qcamera::QCameraGrallocMemory::setMappable(unsigned char) */

void __thiscall qcamera::QCameraGrallocMemory::setMappable(QCameraGrallocMemory *this,uchar param_1)

{
  if (this[0xa88] != (QCameraGrallocMemory)0x0) {
    return;
  }
  this[0xa88] = (QCameraGrallocMemory)param_1;
  return;
}

