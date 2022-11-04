
void __udivsi3(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_0010e178();
    return;
  }
  if (param_2 != 1) {
    if (param_2 <= param_1) {
      iVar2 = count_leading_zeroes(param_1);
      iVar1 = count_leading_zeroes(param_2);
                    /* WARNING: Could not recover jumptable at 0x0010dfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((iVar1 - iVar2) * -0xc + 0x10e164))();
      return;
    }
    return;
  }
  return;
}

