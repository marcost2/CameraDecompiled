
/* qcamera::QCamera3VendorTags::get_section_name(vendor_tag_ops const*, unsigned int) */

int qcamera::QCamera3VendorTags::get_section_name(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000a749c + 0xa7406);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a74a4 + 0xa741e,0x267,DAT_000a74a0 + 0xa7416);
  }
  if (**(vendor_tag_ops ***)(DAT_000a74a8 + 0xa7426) != param_1) {
    return 0;
  }
  iVar2 = 0;
  if ((0x7fffffff < param_2) && (param_2 < 0x801b0000)) {
    iVar2 = *(int *)(*(int *)(DAT_000a74ac + 0xa744c) + (param_2 >> 0x10) * 4 + -0x20000);
    iVar1 = *(int *)(iVar3 + 0x4c);
    if (iVar2 == 0 || iVar1 == 0) goto LAB_000a747e;
    mm_camera_debug_log(2,5,DAT_000a74b4 + 0xa747a,0x274,DAT_000a74b0 + 0xa746e,param_2,iVar2);
  }
  iVar1 = *(int *)(iVar3 + 0x4c);
LAB_000a747e:
  if (iVar1 != 0) {
    mm_camera_debug_log(2,5,DAT_000a74bc + 0xa7494,0x275,DAT_000a74b8 + 0xa748c);
  }
  return iVar2;
}

