
/* qcamera::QCameraParameters::getNumOfExtraBuffersForImageProc() */

char __thiscall
qcamera::QCameraParameters::getNumOfExtraBuffersForImageProc(QCameraParameters *this)

{
  QCameraParameters QVar1;
  int iVar2;
  int iVar3;
  
  if (this[0x2c9] == (QCameraParameters)0x0) {
    if (this[0x2c8] == (QCameraParameters)0x0) goto LAB_000f88b2;
    iVar2 = *(int *)(this + 0x1d4);
    iVar3 = 0x383d;
  }
  else {
    if (1 < *(byte *)(*(int *)(this + 0x1d4) + 0x384f)) {
      return *(char *)(*(int *)(this + 0x1d4) + 0x3849) + -1;
    }
LAB_000f88b2:
    if (this[0x2cb] == (QCameraParameters)0x0) {
      if (this[0x2ca] == (QCameraParameters)0x0) {
        if (this[0x2d9] == (QCameraParameters)0x0) {
          QVar1 = this[0x7b8];
          goto LAB_000f88d4;
        }
        if (this[0x2d8] != (QCameraParameters)0x0) {
          this[0x28d] = (QCameraParameters)0x1;
          QVar1 = (QCameraParameters)0x0;
          goto LAB_000f88d4;
        }
        iVar2 = *(int *)(this + 0x1d4);
        QVar1 = this[0x28d];
        if (((byte)*(QCameraParameters *)(iVar2 + 0x3858) <= (byte)QVar1) &&
           ((byte)QVar1 <= (byte)*(QCameraParameters *)(iVar2 + 0x3859))) {
          QVar1 = (QCameraParameters)((char)QVar1 - 1);
          goto LAB_000f88d4;
        }
        iVar3 = 0x3857;
      }
      else {
        iVar2 = *(int *)(this + 0x1d4);
        iVar3 = 0x385a;
      }
    }
    else {
      iVar2 = *(int *)(this + 0x1d4);
      iVar3 = 0x3855;
    }
  }
  QVar1 = (QCameraParameters)(*(char *)(iVar2 + iVar3) + -1);
LAB_000f88d4:
  return (char)this[0x800] + (char)QVar1;
}

