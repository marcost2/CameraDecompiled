
int __gnu_unwind_frame(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = unw_step(param_2);
  iVar1 = iVar1 + -1;
  if (iVar1 != 0) {
    iVar1 = 9;
  }
  return iVar1;
}

