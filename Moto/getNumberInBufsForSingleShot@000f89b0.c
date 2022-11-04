
/* qcamera::QCameraParameters::getNumberInBufsForSingleShot() */

uint __thiscall qcamera::QCameraParameters::getNumberInBufsForSingleShot(QCameraParameters *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (this[0x2c9] == (QCameraParameters)0x0) {
    if (this[0x2c8] != (QCameraParameters)0x0) {
      iVar1 = *(int *)(this + 0x1d4);
      iVar2 = 0x383d;
      goto LAB_000f89fe;
    }
  }
  else if (1 < *(byte *)(*(int *)(this + 0x1d4) + 0x384f)) {
    return (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3849);
  }
  if (this[0x2cb] == (QCameraParameters)0x0) {
    if (this[0x2ca] == (QCameraParameters)0x0) {
      if ((this[0x288] == (QCameraParameters)0x0) && (this[0x299] == (QCameraParameters)0x0)) {
        if (this[0x2d9] == (QCameraParameters)0x0) {
          return 1;
        }
        if (this[0x2d8] != (QCameraParameters)0x0) {
          this[0x28d] = (QCameraParameters)0x1;
          return 1;
        }
        iVar1 = *(int *)(this + 0x1d4);
        uVar3 = (uint)(byte)this[0x28d];
        if ((uVar3 < *(byte *)(iVar1 + 0x3858)) || (*(byte *)(iVar1 + 0x3859) < uVar3)) {
          uVar3 = (uint)*(byte *)(iVar1 + 0x3857);
        }
      }
      else {
        uVar3 = *(uint *)(*(int *)(this + 0x1d4) + 0x2fd8);
        if (this[0x298] != (QCameraParameters)0x0) {
          return (byte)this[0x29b] + uVar3;
        }
      }
      return uVar3;
    }
    iVar1 = *(int *)(this + 0x1d4);
    iVar2 = 0x385a;
  }
  else {
    iVar1 = *(int *)(this + 0x1d4);
    iVar2 = 0x3855;
  }
LAB_000f89fe:
  return (uint)*(byte *)(iVar1 + iVar2);
}

