
/* qcamera::QCameraParameters::getNumOfExtraHDRInBufsIfNeeded() */

uint __thiscall qcamera::QCameraParameters::getNumOfExtraHDRInBufsIfNeeded(QCameraParameters *this)

{
  int iVar1;
  
  if ((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(this + 0x1d4) + 0x2fd8);
  if (this[0x298] != (QCameraParameters)0x0) {
    iVar1 = iVar1 + (uint)(byte)this[0x29b];
  }
  return iVar1 - 1U & 0xff;
}

