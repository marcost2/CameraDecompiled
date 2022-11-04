
undefined4 * FUN_00098b68(undefined4 *param_1)

{
  *param_1 = *(int *)(DAT_00098b88 + 0x98b72) + 8;
  FUN_0008035c((int)param_1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}

