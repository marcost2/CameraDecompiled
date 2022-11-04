
/* qcamera::QCameraParameters::getExifBufIndex(unsigned int) */

uint __thiscall qcamera::QCameraParameters::getExifBufIndex(QCameraParameters *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((this[0x2c9] != (QCameraParameters)0x0) && (1 < *(byte *)(*(int *)(this + 0x1d4) + 0x384f))) {
    if (*(byte *)(*(int *)(this + 0x1d4) + 0x3849) <= param_1) {
      param_1 = 0;
    }
    return param_1;
  }
  if (this[0x2ca] != (QCameraParameters)0x0) {
    return (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3861);
  }
  if ((this[0x288] != (QCameraParameters)0x0) || (this[0x299] != (QCameraParameters)0x0)) {
    if ((this[0x298] != (QCameraParameters)0x0) && (this[0x29b] != (QCameraParameters)0x0)) {
      return *(uint *)(*(int *)(this + 0x1d4) + 0x2fd8);
    }
    uVar2 = *(uint *)(*(int *)(this + 0x1d4) + 0x2fd8);
    if (uVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      do {
        if (*(char *)(*(int *)(this + 0x1d4) + 0x2fe0 + uVar1) == '\0') break;
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    if (uVar1 != uVar2) {
      param_1 = uVar1;
    }
  }
  return param_1;
}

