
undefined4 unw_get_proc_info(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x24))(param_1,param_2);
  uVar1 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar1 = 0xffffe66b;
  }
  return uVar1;
}

