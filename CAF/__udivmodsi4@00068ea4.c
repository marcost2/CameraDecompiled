
uint __udivmodsi4(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar1 = __aeabi_idiv0();
    return uVar1;
  }
  if (param_2 != 1) {
    if (param_2 <= param_1) {
      iVar3 = count_leading_zeroes(param_1);
      iVar2 = count_leading_zeroes(param_2);
                    /* WARNING: Could not recover jumptable at 0x00068ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((iVar2 - iVar3) * -0xc + 0x6904c))();
      return uVar1;
    }
    *param_3 = param_1;
    return 0;
  }
  *param_3 = 0;
  return param_1;
}

