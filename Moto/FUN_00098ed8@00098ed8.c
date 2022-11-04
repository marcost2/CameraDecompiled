
void FUN_00098ed8(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *param_1 = *(int *)(DAT_00098f1c + 0x98ee2) + 8;
  pvVar2 = (void *)param_1[1];
  pvVar1 = *(void **)((int)pvVar2 + 0x44);
  pvVar3 = pvVar2;
  if (*(void **)((int)pvVar2 + 0x44) != pvVar2) {
    do {
      pvVar3 = *(void **)((int)pvVar1 + 0x44);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar2 = (void *)param_1[1];
      }
      pvVar1 = pvVar3;
    } while (pvVar3 != pvVar2);
  }
  *(void **)((int)pvVar3 + 0x40) = pvVar3;
  *(undefined4 *)(param_1[1] + 0x44) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}

