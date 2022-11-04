
void FUN_0007d8d0(undefined4 *param_1)

{
  void **pvVar1;
  void **ppvVar1;
  void **ppvVar2;
  
  *param_1 = *(int *)(DAT_0007d914 + 0x7d8da) + 8;
  ppvVar1 = (void **)param_1[1];
  pvVar1 = (void **)ppvVar1[2];
  ppvVar2 = ppvVar1;
  if ((void **)ppvVar1[2] != ppvVar1) {
    do {
      ppvVar2 = (void **)pvVar1[2];
      if (pvVar1 != (void **)0x0) {
        operator_delete(pvVar1);
        ppvVar1 = (void **)param_1[1];
      }
      pvVar1 = ppvVar2;
    } while (ppvVar2 != ppvVar1);
  }
  ppvVar2[1] = ppvVar2;
  *(undefined4 *)(param_1[1] + 8) = param_1[1];
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  operator_delete(param_1);
  return;
}

