
undefined4 * FUN_00098e50(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = *(int *)(DAT_00098e8c + 0x98e5a) + 8;
  pvVar2 = (void *)param_1[1];
  pvVar1 = *(void **)((int)pvVar2 + 0x10);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x10) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0x10);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = (void *)param_1[1];
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 0xc) = pvVar3;
  *(undefined4 *)(param_1[1] + 0x10) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}

