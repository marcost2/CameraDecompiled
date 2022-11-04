
int _Unwind_VRS_Pop(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int **ppiVar4;
  FILE **ppFVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int **local_30;
  int *piStack44;
  int **local_24;
  int local_20;
  
  piVar8 = *(int **)(DAT_0006754c + 0x6743c);
  local_20 = *piVar8;
  if (param_2 == 1) {
    if (((param_4 | 4) != 5) || (iVar1 = unw_get_reg(param_1,0xd,&local_24), iVar1 != 0))
    goto LAB_000674a8;
    if ((param_3 & 0xffff) != 0) {
      uVar7 = param_3 >> 0x10;
      uVar6 = uVar7 + (param_3 & 0xffff);
      do {
        local_30 = (int **)*local_24;
        piStack44 = local_24[1];
        local_24 = local_24 + 2;
        iVar1 = _Unwind_VRS_Set(param_1,1,uVar7,param_4,&local_30);
        if (iVar1 != 0) goto LAB_000674a8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    ppiVar4 = local_24;
    if (param_4 == 1) {
      local_24 = local_24 + 1;
      ppiVar4 = local_24;
    }
  }
  else {
    if (param_2 != 0) {
      ppFVar5 = *(FILE ***)(DAT_00067550 + 0x67528);
      fprintf(*ppFVar5,(char *)(DAT_00067558 + 0x6753c),DAT_0006755c + 0x6753e,
              DAT_00067560 + 0x67540,0x3b6,DAT_00067554 + 0x67530);
      fflush(*ppFVar5);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((param_4 != 0) || (iVar1 = unw_get_reg(param_1,0xd,&local_30), iVar1 != 0)) {
LAB_000674a8:
      iVar1 = 2;
      goto LAB_000674aa;
    }
    uVar7 = 0;
    uVar6 = 0;
    do {
      if ((1 << (uVar6 & 0xff) & param_3) != 0) {
        piVar3 = *local_30;
        local_30 = local_30 + 1;
        iVar1 = unw_set_reg(param_1,uVar6,piVar3);
        if (iVar1 != 0) goto LAB_000674a8;
        uVar2 = count_leading_zeroes(uVar6 - 0xd);
        uVar7 = uVar7 | uVar2 >> 5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    ppiVar4 = local_30;
    if ((uVar7 & 1) != 0) {
      iVar1 = 0;
      goto LAB_000674aa;
    }
  }
  iVar1 = unw_set_reg(param_1,0xd,ppiVar4);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  iVar1 = iVar1 << 1;
LAB_000674aa:
  if (*piVar8 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}

