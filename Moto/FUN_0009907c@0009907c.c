
void FUN_0009907c(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = *(int *)(DAT_000990c0 + 0x99086) + 8;
  pvVar2 = (void *)param_1[1];
  pvVar1 = *(void **)((int)pvVar2 + 0xc);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0xc) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0xc);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = (void *)param_1[1];
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 8) = pvVar3;
  *(undefined4 *)(param_1[1] + 0xc) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}

