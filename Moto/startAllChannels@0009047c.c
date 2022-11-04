
/* qcamera::QCamera3HardwareInterface::startAllChannels() */

uint __thiscall
qcamera::QCamera3HardwareInterface::startAllChannels(QCamera3HardwareInterface *this)

{
  uint uVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int **ppiVar7;
  
  iVar6 = *(int *)(DAT_000905ac + 0x90488);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000905b4 + 0x904a0,0x3410,DAT_000905b0 + 0x90498);
  }
  if (*(int **)(this + 0x8c) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(int **)(this + 0x8c) + 0xc))();
    if (0x7fffffff < uVar1) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return uVar1;
      }
      uVar2 = 1;
      uVar5 = 0x3416;
      iVar6 = DAT_000905c0 + 0x904c8;
      iVar4 = DAT_000905c4 + 0x904d0;
      goto LAB_000905a2;
    }
  }
  ppiVar3 = *(int ***)(this + 0x3fc);
  ppiVar7 = (int **)ppiVar3[2];
  if (ppiVar7 != ppiVar3) {
    do {
      while (*(int **)(**ppiVar7 + 0x18) != (int *)0x0) {
        uVar1 = (**(code **)(**(int **)(**ppiVar7 + 0x18) + 0xc))();
        if ((int)uVar1 < 0) {
          if (*(int *)(iVar6 + 0x20) == 0) {
            return uVar1;
          }
          uVar2 = 1;
          uVar5 = 0x3420;
          iVar6 = DAT_000905c8 + 0x9056c;
          iVar4 = DAT_000905cc + 0x90574;
          goto LAB_000905a2;
        }
        ppiVar3 = *(int ***)(this + 0x3fc);
        ppiVar7 = (int **)ppiVar7[2];
        if (ppiVar7 == ppiVar3) goto LAB_00090504;
      }
      ppiVar7 = (int **)ppiVar7[2];
    } while (ppiVar7 != ppiVar3);
  }
LAB_00090504:
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 0xc))();
  }
  if ((*(int **)(this + 0x98) == (int *)0x0) ||
     (uVar1 = (**(code **)(**(int **)(this + 0x98) + 0xc))(), -1 < (int)uVar1)) {
    if ((*(int **)(this + 0xa0) == (int *)0x0) ||
       (uVar1 = (**(code **)(**(int **)(this + 0xa0) + 0xc))(), -1 < (int)uVar1)) {
      this[0x117fe0] = (QCamera3HardwareInterface)0x1;
      if (*(int *)(iVar6 + 0x2c) == 0) {
        return uVar1;
      }
      uVar2 = 4;
      uVar5 = 0x343b;
      iVar6 = DAT_000905d8 + 0x90554;
      iVar4 = DAT_000905dc + 0x9055c;
    }
    else {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return uVar1;
      }
      uVar2 = 1;
      uVar5 = 0x3432;
      iVar6 = DAT_000905d0 + 0x9059c;
      iVar4 = DAT_000905d4 + 0x905a4;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return uVar1;
    }
    uVar2 = 1;
    uVar5 = 0x342b;
    iVar6 = DAT_000905b8 + 0x90584;
    iVar4 = DAT_000905bc + 0x9058c;
  }
LAB_000905a2:
  mm_camera_debug_log(1,uVar2,iVar4,uVar5,iVar6);
  return uVar1;
}

