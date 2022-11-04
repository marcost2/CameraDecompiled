
undefined4 unw_set_fpreg(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1c))(param_1,param_2,param_3,param_4);
    return 0;
  }
  return 0xffffe672;
}

