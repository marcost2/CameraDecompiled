
void __divmoddi4(uint param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = __divdi3(param_1,param_2,param_3,param_4);
  lVar1 = (ulonglong)param_3 * (uVar3 & 0xffffffff);
  uVar2 = (uint)lVar1;
  *param_5 = param_1 - uVar2;
  param_5[1] = param_2 - ((int)(uVar3 >> 0x20) * param_3 +
                          (int)uVar3 * param_4 + (int)((ulonglong)lVar1 >> 0x20) +
                         (uint)(param_1 < uVar2));
  return;
}

