
/* qcamera::QCamera3VendorTags::get_section_name(vendor_tag_ops const*, unsigned int) */

int qcamera::QCamera3VendorTags::get_section_name(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0005e740 + 0x5e6aa);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  if (**(vendor_tag_ops ***)(DAT_0005e74c + 0x5e6ca) != param_1) {
    return 0;
  }
  iVar2 = 0;
  if ((0x7fffffff < param_2) && (param_2 < 0x80120000)) {
    iVar2 = *(int *)(*(int *)(DAT_0005e750 + 0x5e6ee) + (param_2 >> 0x10) * 4 + -0x20000);
    iVar1 = *(int *)(iVar3 + 0x4c);
    if (iVar2 == 0 || iVar1 == 0) goto LAB_0005e722;
    mm_camera_debug_log();
  }
  iVar1 = *(int *)(iVar3 + 0x4c);
LAB_0005e722:
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
  return iVar2;
}

