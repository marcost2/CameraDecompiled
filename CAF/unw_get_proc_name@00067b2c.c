
undefined4 unw_get_proc_name(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  uVar2 = 0xffffe674;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

