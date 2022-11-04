
/* qcamera::FrameNumberRegistry::allocStoreInternalFrameNumber(unsigned int, unsigned int&) */

undefined4 __thiscall
qcamera::FrameNumberRegistry::allocStoreInternalFrameNumber
          (FrameNumberRegistry *this,uint param_1,uint *param_2)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  piVar5 = *(int **)(this + 0xc);
  *(uint *)(this + 0xc) = (int)piVar5 + 1;
  *param_2 = (uint)piVar5;
  if (*(int *)(*(int *)(DAT_0008d608 + 0x8d518) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0008d610 + 0x8d534,0x1212,DAT_0008d60c + 0x8d528,param_1,piVar5);
    piVar5 = (int *)*param_2;
  }
  ppiVar1 = (int **)(this + 4);
  ppiVar4 = ppiVar1;
  ppiVar6 = ppiVar1;
  if ((int **)*ppiVar1 != (int **)0x0) {
    ppiVar3 = (int **)*ppiVar1;
    ppiVar6 = (int **)(this + 4);
    do {
      while (ppiVar4 = ppiVar3, piVar5 < ppiVar4[4]) {
        ppiVar3 = (int **)*ppiVar4;
        ppiVar6 = ppiVar4;
        if ((int **)*ppiVar4 == (int **)0x0) goto LAB_0008d56e;
      }
      if (piVar5 <= ppiVar4[4]) break;
      ppiVar6 = ppiVar4 + 1;
      ppiVar3 = (int **)*ppiVar6;
    } while ((int **)*ppiVar6 != (int **)0x0);
  }
LAB_0008d56e:
  if (*ppiVar6 == (int *)0x0) {
    piVar2 = (int *)operator_new(0x18);
    piVar2[4] = (int)piVar5;
    piVar2[5] = param_1;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = (int)ppiVar4;
    *ppiVar6 = piVar2;
    if (**(int **)this != 0) {
      *(int *)this = **(int **)this;
      piVar2 = *ppiVar6;
    }
    std::__1::__tree_balance_after_insert_std____1____tree_node_base_void____
              (*(__tree_node_base **)(this + 4),(__tree_node_base *)piVar2);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  while ((ppiVar6 = *(int ***)this, ppiVar1 != ppiVar6 &&
         (ppiVar6[4] < (int *)(*(int *)(this + 0xc) + -0x100)))) {
    ppiVar4 = (int **)ppiVar6[1];
    if ((int **)ppiVar6[1] == (int **)0x0) {
      ppiVar4 = ppiVar6 + 2;
      ppiVar3 = (int **)*ppiVar4;
      if ((int **)*ppiVar3 != ppiVar6) {
        do {
          piVar5 = *ppiVar4;
          ppiVar4 = (int **)(piVar5 + 2);
          ppiVar3 = (int **)*ppiVar4;
        } while (*ppiVar3 != piVar5);
      }
    }
    else {
      do {
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar3;
      } while ((int **)*ppiVar3 != (int **)0x0);
    }
    *(int ***)this = ppiVar3;
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
    std::__1::__tree_remove_std____1____tree_node_base_void____
              (*(__tree_node_base **)(this + 4),(__tree_node_base *)ppiVar6);
    operator_delete(ppiVar6);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return 0;
}

