
/* qcamera::QCamera3GrallocMemory::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3GrallocMemory::getOldestFrameNumber(QCamera3GrallocMemory *this,uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(this + 0x80c);
  if (uVar3 < 0x40) {
    iVar5 = 0x7fffffff;
    bVar1 = true;
    iVar2 = uVar3 << 2;
    do {
      iVar2 = iVar2 + 4;
      if ((*(int *)(this + iVar2 * 4) != 0) &&
         ((iVar4 = *(int *)(this + uVar3 * 4 + 0x508), bVar1 ||
          ((bVar1 = false, iVar4 < iVar5 && (iVar4 != -1)))))) {
        bVar1 = false;
        *param_1 = uVar3;
        iVar5 = iVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x40);
    if (!bVar1) {
      return iVar5;
    }
  }
  return -1;
}

