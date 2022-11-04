
undefined4 * FUN_0007ce5c(undefined4 *param_1)

{
  void **piVar1;
  void **pvVar2;
  void **piVar2;
  
  *param_1 = *(int *)(DAT_0007ce98 + 0x7ce66) + 8;
  pvVar2 = (void **)param_1[1];
  piVar1 = (void **)pvVar2[2];
  piVar2 = pvVar2;
  if ((void **)pvVar2[2] != pvVar2) {
    do {
      piVar2 = (void **)piVar1[2];
      if (piVar1 != (void **)0x0) {
        operator_delete(piVar1);
        pvVar2 = (void **)param_1[1];
      }
      piVar1 = piVar2;
    } while (piVar2 != pvVar2);
  }
  piVar2[1] = piVar2;
  *(undefined4 *)(param_1[1] + 8) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}

