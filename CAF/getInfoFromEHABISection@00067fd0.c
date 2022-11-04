
/* libunwind::UnwindCursor<libunwind::LocalAddressSpace,
   libunwind::Registers_arm>::getInfoFromEHABISection(unsigned int, libunwind::UnwindInfoSections
   const&) */

undefined4 __thiscall
libunwind::UnwindCursor<libunwind::LocalAddressSpace,libunwind::Registers_arm>::
getInfoFromEHABISection
          (UnwindCursor_libunwind__LocalAddressSpace_libunwind__Registers_arm_ *this,uint param_1,
          UnwindInfoSections *param_2)

{
  FILE *__stream;
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  FILE **ppFVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  if (*(uint *)(param_2 + 4) >> 3 == 0) {
    return 0;
  }
  iVar13 = *(int *)param_2;
  uVar12 = *(uint *)(param_2 + 4) >> 3;
  uVar10 = 0;
  uVar1 = uVar12;
  do {
    iVar4 = uVar10 + (uVar1 >> 1);
    uVar7 = *(uint *)(iVar13 + iVar4 * 8);
    if (param_1 < (uVar7 | (uVar7 & 0x40000000) << 1) + iVar13 + iVar4 * 8) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar10 = iVar4 + 1;
      uVar1 = ~(uVar1 >> 1) + uVar1;
    }
  } while (uVar1 != 0);
  if (uVar10 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(iVar13 + (uVar10 - 1) * 8);
  iVar4 = iVar13 + (uVar10 - 1) * 8;
  if (uVar10 == uVar12) {
    iVar13 = -1;
  }
  else {
    uVar12 = *(uint *)(iVar13 + uVar10 * 8);
    iVar13 = (uVar12 | (uVar12 & 0x40000000) << 1) + iVar13 + uVar10 * 8;
  }
  if (iVar4 == -4) {
    return 0;
  }
  puVar3 = (uint *)(iVar4 + 4);
  uVar10 = *puVar3;
  if (uVar10 == 1) {
    return 0;
  }
  if ((int)uVar10 < 0) {
    uVar12 = 1;
LAB_0006809e:
    uVar7 = (uVar10 << 4) >> 0x1c;
    if (uVar7 == 2) {
      iVar9 = 1;
      piVar5 = (int *)(DAT_00068174 + 0x680d2);
    }
    else {
      if (uVar7 != 1) {
        if (uVar7 != 0) {
          uVar2 = 0x570;
          ppFVar6 = *(FILE ***)(DAT_00068160 + 0x68122);
          __stream = *ppFVar6;
          iVar13 = DAT_00068164 + 0x6812a;
          goto LAB_0006813a;
        }
        puVar8 = puVar3 + 1;
        if (uVar12 != 0) {
          puVar8 = (uint *)0x0;
        }
        iVar11 = *(int *)(DAT_0006815c + 0x680bc);
        goto LAB_000680be;
      }
      iVar9 = 0;
      piVar5 = (int *)(DAT_00068158 + 0x680ca);
    }
    iVar11 = *piVar5;
    uVar7 = (uVar10 << 8) >> 0x18;
    uVar10 = count_leading_zeroes(uVar7);
    if ((uVar10 >> 5 | uVar12 ^ 1) == 0) {
      uVar2 = 0x577;
      ppFVar6 = *(FILE ***)(DAT_00068178 + 0x68134);
      __stream = *ppFVar6;
      iVar13 = DAT_0006817c + 0x6813c;
LAB_0006813a:
      fprintf(__stream,(char *)(DAT_00068168 + 0x68148),DAT_0006816c + 0x6814a,
              DAT_00068170 + 0x6814c,uVar2,iVar13);
      fflush(*ppFVar6);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = puVar3 + uVar7 + 1;
  }
  else {
    uVar10 = uVar10 | (uVar10 & 0x40000000) << 1;
    puVar8 = (uint *)(uVar10 + (int)puVar3);
    uVar10 = *(uint *)(uVar10 + (int)puVar3);
    puVar3 = puVar8;
    if ((int)uVar10 < 0) {
      uVar12 = 0;
      goto LAB_0006809e;
    }
    uVar12 = 0;
    iVar11 = (uVar10 | (uVar10 & 0x40000000) << 1) + (int)puVar8;
    puVar8 = puVar8 + 1 + (puVar8[1] >> 0x18) + 1;
LAB_000680be:
    iVar9 = 0;
  }
  *(uint **)(this + 0x178) = puVar3;
  *(uint *)(this + 0x158) = (uVar1 | (uVar1 & 0x40000000) << 1) + iVar4;
  *(int *)(this + 0x15c) = iVar13;
  *(uint **)(this + 0x160) = puVar8;
  *(int *)(this + 0x164) = iVar11;
  if (iVar9 != 0) {
    iVar9 = 2;
  }
  if (uVar12 != 0) {
    iVar9 = 1;
  }
  *(int *)(this + 0x16c) = iVar9;
  return 1;
}

