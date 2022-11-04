
/* void 
   std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*,
   std::__1::__tree_node_base<void*>*) */

void std::__1::__tree_balance_after_insert_std____1____tree_node_base_void____
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  uint uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  
  iVar4 = (int)param_2 - (int)param_1;
  uVar5 = count_leading_zeroes(iVar4);
  param_2[0xc] = SUB41(uVar5 >> 5,0);
  do {
    if ((iVar4 == 0) || (ppiVar7 = *(int ***)((int)param_2 + 8), *(char *)(ppiVar7 + 3) != '\0')) {
      return;
    }
    ppiVar8 = (int **)ppiVar7[2];
    ppiVar6 = (int **)*ppiVar8;
    if (ppiVar6 == ppiVar7) {
      if ((ppiVar8[1] == (int *)0x0) ||
         (ppiVar6 = (int **)(ppiVar8[1] + 3), *(char *)ppiVar6 != '\0')) {
        if (*ppiVar7 != (int *)param_2) {
          ppiVar6 = (int **)ppiVar7[1];
          piVar2 = *ppiVar6;
          ppiVar7[1] = piVar2;
          if (piVar2 != (int *)0x0) {
            piVar2[2] = (int)ppiVar7;
            ppiVar8 = (int **)ppiVar7[2];
          }
          ppiVar6[2] = (int *)ppiVar8;
          piVar1 = ppiVar7[2];
          piVar2 = piVar1 + 1;
          if ((int **)*piVar1 == ppiVar7) {
            piVar2 = piVar1;
          }
          *piVar2 = (int)ppiVar6;
          *ppiVar6 = (int *)ppiVar7;
          ppiVar7[2] = (int *)ppiVar6;
          ppiVar8 = (int **)ppiVar6[2];
          ppiVar7 = ppiVar6;
        }
        *(undefined *)(ppiVar7 + 3) = 1;
        *(undefined *)(ppiVar8 + 3) = 0;
        piVar2 = *ppiVar8;
        piVar1 = (int *)piVar2[1];
        *ppiVar8 = piVar1;
        if (piVar1 != (int *)0x0) {
          piVar1[2] = (int)ppiVar8;
        }
        piVar2[2] = (int)ppiVar8[2];
        ppiVar6 = (int **)ppiVar8[2];
        ppiVar7 = ppiVar6 + 1;
        if ((int **)*ppiVar6 == ppiVar8) {
          ppiVar7 = ppiVar6;
        }
        *ppiVar7 = piVar2;
        piVar2[1] = (int)ppiVar8;
        ppiVar8[2] = piVar2;
        return;
      }
    }
    else if ((ppiVar6 == (int **)0x0) || (ppiVar6 = ppiVar6 + 3, *(char *)ppiVar6 != '\0')) {
      if (*ppiVar7 == (int *)param_2) {
        piVar2 = *(int **)((int)param_2 + 4);
        *ppiVar7 = piVar2;
        if (piVar2 != (int *)0x0) {
          piVar2[2] = (int)ppiVar7;
          ppiVar8 = (int **)ppiVar7[2];
        }
        *(int ***)((int)param_2 + 8) = ppiVar8;
        piVar1 = ppiVar7[2];
        piVar2 = piVar1 + 1;
        if ((int **)*piVar1 == ppiVar7) {
          piVar2 = piVar1;
        }
        *piVar2 = (int)param_2;
        *(int ***)((int)param_2 + 4) = ppiVar7;
        ppiVar7[2] = (int *)param_2;
        ppiVar8 = *(int ***)((int)param_2 + 8);
        ppiVar7 = (int **)param_2;
      }
      *(undefined *)(ppiVar7 + 3) = 1;
      *(undefined *)(ppiVar8 + 3) = 0;
      ppiVar7 = (int **)ppiVar8[1];
      piVar2 = *ppiVar7;
      ppiVar8[1] = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar2[2] = (int)ppiVar8;
      }
      ppiVar7[2] = ppiVar8[2];
      ppiVar3 = (int **)ppiVar8[2];
      ppiVar6 = ppiVar3 + 1;
      if ((int **)*ppiVar3 == ppiVar8) {
        ppiVar6 = ppiVar3;
      }
      *ppiVar6 = (int *)ppiVar7;
      *ppiVar7 = (int *)ppiVar8;
      ppiVar8[2] = (int *)ppiVar7;
      return;
    }
    iVar4 = (int)ppiVar8 - (int)param_1;
    *(undefined *)(ppiVar7 + 3) = 1;
    uVar5 = count_leading_zeroes(iVar4);
    *(char *)(ppiVar8 + 3) = (char)(uVar5 >> 5);
    *(char *)ppiVar6 = '\x01';
    param_2 = (__tree_node_base *)ppiVar8;
  } while( true );
}

