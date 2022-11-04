
/* qcamera::QCamera3HardwareInterface::cleanAndSortStreamInfo() */

void __thiscall
qcamera::QCamera3HardwareInterface::cleanAndSortStreamInfo(QCamera3HardwareInterface *this)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  int *piVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar1 = (int **)operator_new__(0xc);
  ppiVar1[1] = (int *)ppiVar1;
  ppiVar1[2] = (int *)ppiVar1;
  ppiVar2 = *(int ***)(this + 0x3fc);
  ppiVar5 = (int **)ppiVar2[2];
  if (ppiVar2 == ppiVar5) {
    ppiVar6 = ppiVar2;
    if (ppiVar2 == ppiVar5) goto LAB_00084052;
LAB_00084092:
    do {
      uVar3 = *(int *)(**ppiVar5 + 0xc) - 0x20;
      if ((uVar3 < 6) && ((1 << (uVar3 & 0xff) & 0x31U) != 0)) {
        ppiVar6 = (int **)ppiVar5[2];
      }
      else {
        ppiVar2 = (int **)operator_new(0xc);
        piVar4 = ppiVar1[1];
        *ppiVar2 = *ppiVar5;
        ppiVar2[1] = piVar4;
        ppiVar2[2] = (int *)ppiVar1;
        piVar4[2] = (int)ppiVar2;
        ppiVar1[1] = (int *)ppiVar2;
        piVar4 = ppiVar5[1];
        ppiVar6 = (int **)ppiVar5[2];
        piVar4[2] = (int)ppiVar6;
        ppiVar6[1] = piVar4;
        operator_delete(ppiVar5);
        ppiVar2 = *(int ***)(this + 0x3fc);
      }
      ppiVar5 = ppiVar6;
    } while (ppiVar2 != ppiVar6);
    ppiVar6 = (int **)ppiVar2[2];
    ppiVar5 = ppiVar6;
    if (ppiVar6 != ppiVar2) {
LAB_00084056:
      do {
        ppiVar2 = (int **)operator_new(0xc);
        piVar4 = ppiVar1[1];
        *ppiVar2 = *ppiVar5;
        ppiVar2[1] = piVar4;
        ppiVar2[2] = (int *)ppiVar1;
        piVar4[2] = (int)ppiVar2;
        ppiVar1[1] = (int *)ppiVar2;
        piVar4 = ppiVar5[1];
        ppiVar6 = (int **)ppiVar5[2];
        piVar4[2] = (int)ppiVar6;
        ppiVar6[1] = piVar4;
        if (ppiVar5 != (int **)0x0) {
          operator_delete(ppiVar5);
        }
        ppiVar5 = ppiVar6;
      } while (ppiVar6 != *(int ***)(this + 0x3fc));
    }
  }
  else {
    do {
      if ((*ppiVar5)[4] == 0) {
        piVar4 = *(int **)(**ppiVar5 + 0x18);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        free(*ppiVar5);
        piVar4 = ppiVar5[1];
        ppiVar6 = (int **)ppiVar5[2];
        piVar4[2] = (int)ppiVar6;
        ppiVar6[1] = piVar4;
        operator_delete(ppiVar5);
        ppiVar2 = *(int ***)(this + 0x3fc);
      }
      else {
        ppiVar6 = (int **)ppiVar5[2];
      }
      ppiVar5 = ppiVar6;
    } while (ppiVar2 != ppiVar6);
    ppiVar5 = (int **)ppiVar2[2];
    ppiVar6 = ppiVar5;
    if (ppiVar2 != ppiVar5) goto LAB_00084092;
LAB_00084052:
    ppiVar5 = ppiVar6;
    if (ppiVar6 != ppiVar2) goto LAB_00084056;
  }
  ppiVar5 = (int **)ppiVar1[2];
  ppiVar2 = (int **)ppiVar6[2];
  while (ppiVar1 != ppiVar5) {
    if (ppiVar6 == ppiVar2) {
      if (ppiVar5 != ppiVar1) goto LAB_00084100;
      break;
    }
    piVar4 = *ppiVar5;
    ppiVar5 = (int **)ppiVar5[2];
    *ppiVar2 = piVar4;
    ppiVar2 = (int **)ppiVar2[2];
  }
  while (ppiVar5 = ppiVar2, ppiVar6 != ppiVar5) {
    piVar4 = ppiVar5[1];
    ppiVar2 = (int **)ppiVar5[2];
    piVar4[2] = (int)ppiVar2;
    ppiVar2[1] = piVar4;
    if (ppiVar5 != (int **)0x0) {
      operator_delete(ppiVar5);
    }
  }
LAB_00084138:
  ppiVar2 = (int **)ppiVar1[2];
  ppiVar5 = ppiVar1;
  while (ppiVar6 = ppiVar2, ppiVar6 != ppiVar1) {
    ppiVar5 = (int **)ppiVar6[2];
    ppiVar2 = ppiVar5;
    if (ppiVar6 != (int **)0x0) {
      operator_delete(ppiVar6);
    }
  }
  ppiVar5[1] = (int *)ppiVar5;
  ppiVar1[2] = (int *)ppiVar1;
  if (ppiVar1 != (int **)0x0) {
    operator_delete__(ppiVar1);
  }
  return;
LAB_00084100:
  do {
    ppiVar2 = (int **)operator_new(0xc);
    piVar4 = *ppiVar5;
    ppiVar2[2] = (int *)ppiVar6;
    *ppiVar2 = piVar4;
    ppiVar2[1] = ppiVar6[1];
    ppiVar6[1][2] = (int)ppiVar2;
    ppiVar6[1] = (int *)ppiVar2;
    ppiVar5 = (int **)ppiVar5[2];
  } while (ppiVar5 != ppiVar1);
  goto LAB_00084138;
}

