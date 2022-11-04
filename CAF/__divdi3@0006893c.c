
undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = (int)param_2 >> 0x1f;
  uVar2 = (int)param_4 >> 0x1f;
  uVar3 = __udivmoddi4((param_1 ^ uVar1) - uVar1,
                       (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1)),
                       (param_3 ^ uVar2) - uVar2,
                       (param_4 ^ uVar2) - (uVar2 + ((param_3 ^ uVar2) < uVar2)),(uint *)0x0);
  uVar2 = (int)(param_4 ^ param_2) >> 0x1f;
  uVar1 = (uint)uVar3 ^ uVar2;
  return CONCAT44(((uint)(uVar3 >> 0x20) ^ uVar2) - (uVar2 + (uVar1 < uVar2)),uVar1 - uVar2);
}

