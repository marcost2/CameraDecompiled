
ulonglong __udivmoddi4(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint uVar10;
  uint extraout_r1_00;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_2 == 0) {
    if (param_4 != 0) {
      if (param_5 == (uint *)0x0) {
        return 0;
      }
      *param_5 = param_1;
      param_5[1] = 0;
      return 0;
    }
    if (param_5 != (uint *)0x0) {
      param_5[1] = 0;
      __aeabi_uidivmod(param_1,param_3);
      *param_5 = extraout_r1;
    }
LAB_0010defc:
    uVar7 = __udivsi3(param_1,param_3);
    return (ulonglong)uVar7;
  }
  if (param_3 == 0) {
    if (param_4 == 0) {
      if (param_5 == (uint *)0x0) {
        return 0;
      }
      *param_5 = 0;
      param_5[1] = 0;
      return 0;
    }
    if (param_1 == 0) {
      param_1 = param_2;
      param_3 = param_4;
      if (param_5 != (uint *)0x0) {
        *param_5 = 0;
        __aeabi_uidivmod(param_2,param_4);
        param_5[1] = extraout_r1_00;
      }
      goto LAB_0010defc;
    }
    if ((param_4 - 1 & param_4) == 0) {
      uVar7 = param_2;
      if (param_5 != (uint *)0x0) {
        uVar7 = param_4 - 1 & param_2;
      }
      bVar3 = (byte)param_4;
      bVar4 = (byte)(param_4 >> 8);
      bVar5 = (byte)(param_4 >> 0x10);
      bVar2 = (byte)(param_4 >> 0x18);
      uVar9 = count_leading_zeroes
                        ((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1
                                          ) << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                       bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                         0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                 bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                               bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                         (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1
                                          ) << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                       bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) <<
                         8 | (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                              bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                            bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                          bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = uVar7;
      }
      return (ulonglong)(param_2 >> (uVar9 & 0xff));
    }
    iVar6 = count_leading_zeroes(param_2);
    iVar8 = count_leading_zeroes(param_4);
    uVar7 = iVar8 - iVar6;
    if (0x1e < uVar7) goto LAB_0010dcf8;
    uVar9 = 0x1f - uVar7;
    uVar7 = uVar7 + 1;
  }
  else if (param_4 == 0) {
    if ((param_3 - 1 & param_3) == 0) {
      if (param_5 != (uint *)0x0) {
        *param_5 = param_3 - 1 & param_1;
        param_5[1] = 0;
      }
      if (param_3 != 1) {
        bVar3 = (byte)param_3;
        bVar4 = (byte)(param_3 >> 8);
        bVar5 = (byte)(param_3 >> 0x10);
        bVar2 = (byte)(param_3 >> 0x18);
        uVar7 = count_leading_zeroes
                          ((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 |
                                            bVar3 >> 2 & 1) << 1 | bVar3 >> 3 & 1) << 1 |
                                          bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                                        bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                           (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                            bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                          bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                        bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                           (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                            bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                          bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                        bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 |
                                            bVar2 >> 2 & 1) << 1 | bVar2 >> 3 & 1) << 1 |
                                          bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                                        bVar2 >> 6 & 1) << 1 | bVar2 >> 7));
        param_1 = param_2 << (0x20 - uVar7 & 0xff) | param_1 >> (uVar7 & 0xff);
        param_2 = param_2 >> (uVar7 & 0xff);
      }
      return CONCAT44(param_2,param_1);
    }
    iVar8 = count_leading_zeroes(param_3);
    iVar6 = count_leading_zeroes(param_2);
    uVar7 = (iVar8 + 0x21) - iVar6;
    if (uVar7 == 0x20) {
LAB_0010dde4:
      uVar14 = 0;
      uVar7 = 0x20;
      uVar13 = 0;
      uVar9 = param_1;
      goto LAB_0010de4c;
    }
    if (0x1f < uVar7) {
      uVar9 = param_2 << (0x40 - uVar7 & 0xff) | param_1 >> (uVar7 - 0x20 & 0xff);
      param_2 = param_2 >> (uVar7 - 0x20 & 0xff);
      uVar14 = param_1 << (0x40 - uVar7 & 0xff);
      uVar13 = 0;
      goto LAB_0010de4c;
    }
    uVar9 = 0x20 - uVar7;
  }
  else {
    iVar6 = count_leading_zeroes(param_2);
    iVar8 = count_leading_zeroes(param_4);
    uVar9 = iVar8 - iVar6;
    if (0x1f < uVar9) {
LAB_0010dcf8:
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
      }
      return 0;
    }
    uVar7 = uVar9 + 1;
    if (uVar7 == 0x20) goto LAB_0010dde4;
    uVar9 = 0x1f - uVar9;
  }
  uVar14 = 0;
  uVar13 = param_2 >> (uVar7 & 0xff);
  param_2 = param_2 << (uVar9 & 0xff) | param_1 >> (uVar7 & 0xff);
  uVar9 = param_1 << (uVar9 & 0xff);
LAB_0010de4c:
  uVar12 = 0;
  do {
    uVar11 = param_2 << 1 | uVar9 >> 0x1f;
    uVar13 = param_2 >> 0x1f | uVar13 << 1;
    uVar1 = (int)(~uVar13 + param_4 + (uint)CARRY4(~uVar11,param_3)) >> 0x1f;
    param_2 = uVar11 - (param_3 & uVar1);
    uVar13 = uVar13 - ((param_4 & uVar1) + (uint)(uVar11 < (param_3 & uVar1)));
    uVar11 = uVar14 << 1;
    uVar10 = uVar12 | uVar11;
    uVar9 = uVar14 >> 0x1f | uVar9 << 1;
    uVar7 = uVar7 - 1;
    uVar12 = uVar1 & 1;
    uVar14 = uVar10;
  } while (uVar7 != 0);
  if (param_5 != (uint *)0x0) {
    *param_5 = param_2;
    param_5[1] = uVar13;
  }
  return CONCAT44(uVar11 >> 0x1f | uVar9 << 1,uVar10 << 1 | uVar1 & 1);
}

