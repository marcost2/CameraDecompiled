
undefined4 unw_get_fpreg(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    *param_3 = (int)uVar2;
    param_3[1] = (int)((ulonglong)uVar2 >> 0x20);
    return 0;
  }
  return 0xffffe672;
}

