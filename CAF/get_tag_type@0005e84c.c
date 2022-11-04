
/* qcamera::QCamera3VendorTags::get_tag_type(vendor_tag_ops const*, unsigned int) */

uint qcamera::QCamera3VendorTags::get_tag_type(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0005e910 + 0x5e85a);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  if (**(vendor_tag_ops ***)(DAT_0005e91c + 0x5e87a) == param_1) {
    uVar2 = 0xffffffff;
    if ((0x7fffffff < param_2) && (param_2 < 0x80120000)) {
      iVar1 = (param_2 >> 0x10) - 0x8000;
      if (param_2 < *(uint *)(*(int *)(DAT_0005e920 + 0x5e8b2) + iVar1 * 4)) {
        uVar2 = (uint)*(byte *)(*(int *)(*(int *)(DAT_0005e924 + 0x5e8c2) + iVar1 * 4) +
                                (param_2 & 0xffff) * 8 + 4);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    if (*(int *)(iVar3 + 0x4c) != 0) {
      mm_camera_debug_log();
      if (*(int *)(iVar3 + 0x4c) != 0) {
        mm_camera_debug_log();
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

