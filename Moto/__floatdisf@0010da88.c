
uint __floatdisf(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_1 | param_2) != 0) {
    uVar1 = (int)param_2 >> 0x1f;
    uVar5 = (param_1 ^ uVar1) - uVar1;
    iVar2 = count_leading_zeroes(uVar5);
    iVar2 = iVar2 + 0x20;
    uVar3 = (param_2 ^ uVar1) - (uVar1 + ((param_1 ^ uVar1) < uVar1));
    if (uVar3 != 0) {
      iVar2 = count_leading_zeroes(uVar3);
    }
    iVar9 = 0x3f - iVar2;
    iVar2 = -iVar2;
    iVar4 = iVar2 + 0x40;
    if (iVar4 < 0x19) {
      uVar5 = uVar5 << (0x18U - iVar4 & 0xff);
      if (-1 < -8 - iVar4) {
        uVar5 = 0;
      }
    }
    else {
      if (iVar4 != 0x1a) {
        if (iVar4 == 0x19) {
          uVar5 = uVar5 * 2;
        }
        else {
          uVar8 = 0x3a - iVar4;
          uVar7 = 0xffffffff >> (0x5aU - iVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar7 = 0;
          }
          uVar6 = 0x5aU - iVar4 & 0x1f;
          uVar6 = 0xffffffffU >> uVar6 | -1 << 0x20 - uVar6;
          if (-1 < (int)uVar8) {
            uVar6 = 0xffffffff >> (uVar8 & 0xff);
          }
          uVar7 = uVar6 & uVar5 | uVar7 & uVar3;
          if (uVar7 != 0) {
            uVar7 = 1;
          }
          uVar5 = uVar5 >> (iVar2 + 0x26U & 0xff) | uVar3 << (uVar8 & 0xff);
          if (-1 < (int)(iVar2 + 6U)) {
            uVar5 = uVar3 >> (iVar2 + 6U & 0xff);
          }
          uVar5 = uVar5 | uVar7;
        }
      }
      uVar3 = ((uVar5 << 0x1d) >> 0x1f | uVar5) + 1;
      uVar5 = uVar3 >> 2;
      if ((uVar3 & 0x4000000) != 0) {
        uVar5 = uVar3 >> 3;
        iVar9 = iVar4;
      }
    }
    return uVar5 & 0x7fffff | uVar1 & 0x80000000 | (iVar9 + 0x7f) * 0x800000;
  }
  return DAT_0010dbb8;
}

