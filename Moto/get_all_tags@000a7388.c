
/* qcamera::QCamera3VendorTags::get_all_tags(vendor_tag_ops const*, unsigned int*) */

void qcamera::QCamera3VendorTags::get_all_tags(vendor_tag_ops *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (**(vendor_tag_ops ***)(DAT_000a73e4 + 0xa7396) == param_1) {
    iVar5 = 0;
    iVar6 = *(int *)(DAT_000a73e8 + 0xa73a4);
    iVar4 = *(int *)(DAT_000a73ec + 0xa73aa);
    iVar1 = DAT_000a73f0 + 0xa73b0;
    iVar2 = DAT_000a73f4 + 0xa73b6;
    do {
      uVar3 = *(uint *)(iVar6 + iVar5 * 4);
      param_2[iVar5] = uVar3;
      if (*(int *)(iVar4 + 0x48) != 0) {
        mm_camera_debug_log(2,4,iVar2,0x251,iVar1,iVar5,uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x61);
  }
  return;
}

