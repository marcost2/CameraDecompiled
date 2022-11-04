
ulonglong __fixdfdi(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  ulonglong uVar2;
  
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = 0.0 - (double)CONCAT44(param_2,param_1);
    uVar2 = __aeabi_d2ulz(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
    return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  uVar2 = __aeabi_d2ulz(param_1,param_2);
  return uVar2;
}

