
void FUN_00098b8c(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = *(int *)(DAT_00098c0c + 0x98b98) + 8;
  pvVar1 = (void *)param_1[1];
  pvVar6 = pvVar1;
  if (*(void **)((int)pvVar1 + 0x1c) != pvVar1) {
    iVar2 = *(int *)(DAT_00098c10 + 0x98baa);
    pvVar4 = *(void **)((int)pvVar1 + 0x1c);
    do {
      pvVar6 = *(void **)((int)pvVar4 + 0x1c);
      if (pvVar4 != (void *)0x0) {
        *(int *)((int)pvVar4 + 0x10) = iVar2 + 8;
        pvVar3 = *(void **)((int)pvVar4 + 0x14);
        pvVar1 = *(void **)((int)pvVar3 + 0x10);
        pvVar5 = pvVar3;
        if (*(void **)((int)pvVar3 + 0x10) != pvVar3) {
          do {
            pvVar5 = *(void **)((int)pvVar1 + 0x10);
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1);
              pvVar3 = *(void **)((int)pvVar4 + 0x14);
            }
            pvVar1 = pvVar5;
          } while (pvVar5 != pvVar3);
        }
        *(void **)((int)pvVar5 + 0xc) = pvVar5;
        *(int *)(*(int *)((int)pvVar4 + 0x14) + 0x10) = *(int *)((int)pvVar4 + 0x14);
        if (*(void **)((int)pvVar4 + 0x14) != (void *)0x0) {
          operator_delete__(*(void **)((int)pvVar4 + 0x14));
        }
        operator_delete(pvVar4);
        pvVar1 = (void *)param_1[1];
      }
      pvVar4 = pvVar6;
    } while (pvVar6 != pvVar1);
  }
  *(void **)((int)pvVar6 + 0x18) = pvVar6;
  *(undefined4 *)(param_1[1] + 0x1c) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}

