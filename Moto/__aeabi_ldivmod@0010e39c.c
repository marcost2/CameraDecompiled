
ulonglong __aeabi_ldivmod(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  uint local_10 [2];
  
  uVar1 = __udivmoddi4(param_1,param_2,param_3,param_4,local_10);
  return uVar1;
}

