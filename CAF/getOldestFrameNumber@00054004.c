
/* qcamera::QCamera3GrallocMemory::getOldestFrameNumber(unsigned int&) */

int __thiscall
qcamera::QCamera3GrallocMemory::getOldestFrameNumber(QCamera3GrallocMemory *this,uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = *(uint *)(this + 0x80c);
  if (uVar3 < 0x40) {
    piVar4 = (int *)(this + uVar3 * 0x10);
    iVar2 = 0x7fffffff;
    bVar1 = true;
    do {
      piVar4 = piVar4 + 4;
      if (*piVar4 != 0) {
        if (!bVar1) {
          bVar1 = false;
          if ((iVar2 <= *(int *)(this + uVar3 * 4 + 0x508)) ||
             (*(int *)(this + uVar3 * 4 + 0x508) == -1)) goto LAB_00054044;
        }
        iVar2 = *(int *)(this + uVar3 * 4 + 0x508);
        *param_1 = uVar3;
        bVar1 = false;
      }
LAB_00054044:
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x40);
    if (!bVar1) {
      return iVar2;
    }
  }
  return -1;
}

