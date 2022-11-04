
/* __invoke(dl_phdr_info*, unsigned int, void*) */

byte libunwind::LocalAddressSpace::findUnwindSections(unsigned_int,libunwind::UnwindInfoSections&)::
     {lambda(dl_phdr_info*,unsigned_int,void*)#1}::__invoke
               (dl_phdr_info *param_1,uint param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  
  if (*(uint *)((int)param_3 + 8) < *(uint *)param_1) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xc);
  bVar6 = 0;
  if (uVar4 == 0) {
    bVar7 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = 0;
    bVar7 = 0;
    do {
      iVar5 = *(int *)(param_1 + 8);
      if (*(int *)(iVar5 + iVar2) == 0x70000001) {
        bVar6 = 1;
        **(int **)((int)param_3 + 4) = *(int *)(iVar5 + iVar2 + 8) + *(int *)param_1;
        *(undefined4 *)(*(int *)((int)param_3 + 4) + 4) = *(undefined4 *)(iVar5 + iVar2 + 0x14);
        uVar4 = (uint)*(ushort *)(param_1 + 0xc);
      }
      else if (*(int *)(iVar5 + iVar2) == 1) {
        uVar1 = *(int *)(iVar5 + iVar2 + 8) + *(int *)param_1;
        if (uVar1 <= *(uint *)((int)param_3 + 8)) {
          bVar7 = bVar7 | *(uint *)((int)param_3 + 8) < uVar1 + *(int *)(iVar5 + iVar2 + 0x14);
        }
      }
      iVar2 = iVar2 + 0x20;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return bVar6 & bVar7;
}

