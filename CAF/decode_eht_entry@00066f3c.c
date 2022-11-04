
uint * decode_eht_entry(uint *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  if (-1 < (int)uVar1) {
    *param_2 = 1;
    *param_3 = (param_1[1] >> 0x18) * 4 + 4;
    return param_1 + 1;
  }
  uVar3 = (uVar1 << 4) >> 0x1c;
  if (uVar3 == 0) {
    uVar4 = 1;
    iVar2 = 4;
  }
  else {
    if ((uVar3 != 3) && (uVar3 != 1)) {
      return (uint *)0x0;
    }
    iVar2 = ((uVar1 << 8) >> 0x18) * 4 + 4;
    uVar4 = 2;
  }
  *param_3 = iVar2;
  *param_2 = uVar4;
  return param_1;
}

