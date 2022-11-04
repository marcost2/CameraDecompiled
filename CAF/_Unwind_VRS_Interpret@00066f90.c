
undefined4 _Unwind_VRS_Interpret(int *param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint local_30;
  undefined4 *local_2c;
  int local_28;
  
  piVar8 = *(int **)(DAT_000672e0 + 0x66fa0);
  local_28 = *piVar8;
  if (param_3 < param_4) {
    local_30 = 0;
LAB_000671fc:
    uVar7 = param_3 + 1;
    uVar9 = (uint)*(byte *)(param_2 + (param_3 ^ 3));
    if (-1 < (int)(uVar9 << 0x18)) {
      unw_get_reg(param_1,0xd,&local_2c);
      if ((int)(uVar9 << 0x19) < 0) {
        local_2c = (undefined4 *)((-4 - (uVar9 * 4 & 0xfc)) + (int)local_2c);
      }
      else {
        local_2c = local_2c + uVar9 + 1;
      }
LAB_00067298:
      unw_set_reg(param_1,0xd,local_2c);
      param_3 = uVar7;
      goto joined_r0x0006704a;
    }
    switch((uVar9 & 0xf0) - 0x80 >> 4) {
    case 0:
      if (param_4 <= uVar7) break;
      uVar7 = (uVar9 & 0xf) << 0xc | (uint)*(byte *)(param_2 + (uVar7 ^ 3)) << 4;
      if (uVar7 != 0) {
        param_3 = param_3 + 2;
        iVar2 = unw_get_reg(param_1,0xd,&local_2c);
        local_30 = local_30 | (uVar9 & 8) >> 3;
        if (iVar2 == 0) {
          uVar9 = 0;
          uVar5 = 0;
          do {
            if ((1 << (uVar5 & 0xff) & uVar7) != 0) {
              uVar4 = *local_2c;
              local_2c = local_2c + 1;
              iVar2 = unw_set_reg(param_1,uVar5,uVar4);
              if (iVar2 != 0) goto joined_r0x0006704a;
              uVar6 = count_leading_zeroes(uVar5 - 0xd);
              uVar9 = uVar9 | uVar6 >> 5;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0x10);
          if ((uVar9 & 1) == 0) {
            unw_set_reg(param_1,0xd,local_2c);
          }
        }
        goto joined_r0x0006704a;
      }
      uVar4 = 9;
      goto switchD_00067000_caseD_b4;
    case 1:
      if ((uVar9 & 0xf | 2) != 0xf) {
        unw_get_reg(param_1,uVar9 & 0xf,&local_2c);
        goto LAB_00067298;
      }
      break;
    case 2:
      iVar2 = unw_get_reg(param_1,0xd,&local_2c);
      param_3 = uVar7;
      if (iVar2 == 0) {
        uVar5 = 0;
        uVar6 = 0;
        do {
          if ((1 << (uVar6 & 0xff) & ((0x20 << (uVar9 & 7)) - 0x10U | (uVar9 & 8) << 0xb)) != 0) {
            uVar4 = *local_2c;
            local_2c = local_2c + 1;
            iVar2 = unw_set_reg(param_1,uVar6,uVar4);
            if (iVar2 != 0) goto joined_r0x0006704a;
            uVar3 = count_leading_zeroes(uVar6 - 0xd);
            uVar5 = uVar5 | uVar3 >> 5;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x10);
        if ((uVar5 & 1) == 0) {
          unw_set_reg(param_1,0xd,local_2c);
        }
      }
      goto joined_r0x0006704a;
    case 3:
      if (uVar9 - 0xb0 < 8) {
        uVar4 = 9;
        switch(uVar9) {
        case 0xb0:
          goto switchD_00067000_caseD_b0;
        case 0xb1:
          if (param_4 <= uVar7) goto switchD_00067236_caseD_6;
          bVar1 = *(byte *)(param_2 + (uVar7 ^ 3));
          uVar4 = 9;
          if ((bVar1 != 0) && ((bVar1 & 0xf0) == 0)) {
            param_3 = param_3 + 2;
            iVar2 = unw_get_reg(param_1,0xd,&local_2c);
            if (iVar2 == 0) {
              uVar7 = 0;
              uVar9 = 0;
              do {
                if ((1 << (uVar9 & 0xff) & (uint)bVar1) != 0) {
                  uVar4 = *local_2c;
                  local_2c = local_2c + 1;
                  iVar2 = unw_set_reg(param_1,uVar9,uVar4);
                  if (iVar2 != 0) goto joined_r0x0006704a;
                  uVar5 = count_leading_zeroes(uVar9 - 0xd);
                  uVar7 = uVar7 | uVar5 >> 5;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < 0x10);
              if ((uVar7 & 1) == 0) {
                unw_set_reg(param_1,0xd,local_2c);
              }
            }
            break;
          }
          goto switchD_00067000_caseD_b4;
        case 0xb2:
          uVar5 = 0;
          uVar9 = 0;
          do {
            if (param_4 <= uVar7) goto switchD_00067236_caseD_6;
            uVar6 = uVar7 ^ 3;
            uVar7 = uVar7 + 1;
            uVar3 = (uint)*(byte *)(param_2 + uVar6);
            uVar6 = uVar9 & 0xff;
            uVar9 = uVar9 + 7;
            uVar5 = uVar5 | (uVar3 & 0x7f) << uVar6;
          } while ((int)(uVar3 << 0x18) < 0);
          unw_get_reg(param_1,0xd,&local_2c);
          local_2c = local_2c + uVar5 + 0x81;
          goto LAB_00067298;
        case 0xb3:
          uVar5 = 1;
          uVar7 = (uint)*(byte *)(param_2 + (uVar7 ^ 3));
          uVar7 = (uVar7 & 0xf) + 1 | (uVar7 & 0xf0) << 0xc;
LAB_000671a4:
          _Unwind_VRS_Pop(param_1,1,uVar7,uVar5);
          param_3 = param_3 + 2;
          break;
        default:
          goto switchD_00067000_caseD_b4;
        }
      }
      else {
        uVar5 = 1;
LAB_00067142:
        _Unwind_VRS_Pop(param_1,1,(uVar9 & 7) + 0x80001,uVar5);
        param_3 = uVar7;
      }
joined_r0x0006704a:
      if (param_4 <= param_3) goto switchD_00067000_caseD_b0;
      goto LAB_000671fc;
    case 4:
      if ((uVar9 & 0xfe) == 200) {
        bVar1 = *(byte *)(param_2 + (uVar7 ^ 3));
        uVar7 = count_leading_zeroes(uVar9 - 200);
        uVar9 = bVar1 & 0xf;
        uVar7 = (uint)(bVar1 >> 4) | (uVar7 >> 5) << 4;
        if (uVar7 + uVar9 < 0x20) {
          uVar5 = 5;
          uVar7 = uVar9 + 1 | uVar7 << 0x10;
          goto LAB_000671a4;
        }
      }
      break;
    case 5:
      if (-1 < (int)(uVar9 << 0x1c)) {
        uVar5 = 5;
        goto LAB_00067142;
      }
    }
switchD_00067236_caseD_6:
    uVar4 = 9;
    goto switchD_00067000_caseD_b4;
  }
LAB_000672aa:
  unw_get_reg(param_1,0xe,&local_2c);
  unw_set_reg(param_1,0xf,local_2c);
LAB_000672be:
  uVar4 = 8;
switchD_00067000_caseD_b4:
  if (*piVar8 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
switchD_00067000_caseD_b0:
  if (local_30 != 0) goto LAB_000672be;
  goto LAB_000672aa;
}

