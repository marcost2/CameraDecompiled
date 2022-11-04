
/* qcamera::QCameraParameters::getNumberOutBufsForSingleShot() */

byte __thiscall qcamera::QCameraParameters::getNumberOutBufsForSingleShot(QCameraParameters *this)

{
  byte bVar1;
  
  if ((this[0x2c9] == (QCameraParameters)0x0) ||
     (bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x384f), bVar1 < 2)) {
    if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
      bVar1 = 2;
      if (this[0x298] == (QCameraParameters)0x0) {
        bVar1 = 1;
      }
      return bVar1;
    }
    bVar1 = 1;
  }
  return bVar1;
}

