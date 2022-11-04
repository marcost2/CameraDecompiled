
undefined4 * FUN_00080488(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = *(int *)(DAT_000804c8 + 0x80492) + 8;
  iVar3 = param_1[1];
  iVar1 = *(int *)(iVar3 + 0x54);
  iVar4 = iVar3;
  if (*(int *)(iVar3 + 0x54) != iVar3) {
    do {
      iVar4 = *(int *)(iVar1 + 0x54);
      if (iVar1 != 0) {
        pvVar2 = (void *)FUN_00098ffc(iVar1);
        operator_delete(pvVar2);
        iVar3 = param_1[1];
      }
      iVar1 = iVar4;
    } while (iVar4 != iVar3);
  }
  *(int *)(iVar4 + 0x50) = iVar4;
  *(undefined4 *)(param_1[1] + 0x54) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}

