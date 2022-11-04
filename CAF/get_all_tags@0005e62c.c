
/* qcamera::QCamera3VendorTags::get_all_tags(vendor_tag_ops const*, unsigned int*) */

void qcamera::QCamera3VendorTags::get_all_tags(vendor_tag_ops *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (**(vendor_tag_ops ***)(DAT_0005e688 + 0x5e63a) == param_1) {
    iVar2 = 0;
    iVar3 = *(int *)(DAT_0005e68c + 0x5e648);
    iVar1 = *(int *)(DAT_0005e690 + 0x5e64e);
    do {
      param_2[iVar2] = *(uint *)(iVar3 + iVar2 * 4);
      if (*(int *)(iVar1 + 0x48) != 0) {
        mm_camera_debug_log();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
  }
  return;
}

