
/* qcamera::QCamera3PostProcessor::timeoutFrame(unsigned int) */

uint __thiscall
qcamera::QCamera3PostProcessor::timeoutFrame(QCamera3PostProcessor *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = (uint)(char)this[0x470];
  if (0 < (int)uVar3) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      piVar1 = *(int **)(this + iVar4 * 4 + 0x474);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_1);
        uVar3 = (uint)(byte)this[0x470];
        uVar5 = uVar5 | uVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (char)uVar3);
    return uVar5;
  }
  return 0;
}

