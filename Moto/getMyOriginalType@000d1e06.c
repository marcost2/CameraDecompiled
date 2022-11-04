
/* qcamera::QCameraStream::getMyOriginalType() */

int __thiscall qcamera::QCameraStream::getMyOriginalType(QCameraStream *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x70);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == 9) {
    if (*(int *)(iVar2 + 0x248) != 1) {
      if (*(int *)(iVar2 + 0x248) == 0) {
        return *(int *)(iVar2 + 0x250);
      }
      return 9;
    }
    iVar1 = *(int *)(iVar2 + 0x3e4);
  }
  return iVar1;
}

