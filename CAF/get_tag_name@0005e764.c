
/* qcamera::QCamera3VendorTags::get_tag_name(vendor_tag_ops const*, unsigned int) */

int qcamera::QCamera3VendorTags::get_tag_name(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0005e824 + 0x5e772);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  if (**(vendor_tag_ops ***)(DAT_0005e830 + 0x5e792) != param_1) {
    return 0;
  }
  iVar2 = 0;
  if ((0x7fffffff < param_2) && (param_2 < 0x80120000)) {
    iVar2 = (param_2 >> 0x10) - 0x8000;
    if (param_2 < *(uint *)(*(int *)(DAT_0005e834 + 0x5e7c2) + iVar2 * 4)) {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_0005e838 + 0x5e7d2) + iVar2 * 4) +
                      (param_2 & 0xffff) * 8);
      iVar1 = *(int *)(iVar3 + 0x4c);
      if (iVar2 == 0 || iVar1 == 0) goto LAB_0005e804;
      mm_camera_debug_log();
    }
    else {
      iVar2 = 0;
    }
  }
  iVar1 = *(int *)(iVar3 + 0x4c);
LAB_0005e804:
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return iVar2;
}

