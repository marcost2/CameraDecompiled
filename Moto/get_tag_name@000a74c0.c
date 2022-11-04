
/* qcamera::QCamera3VendorTags::get_tag_name(vendor_tag_ops const*, unsigned int) */

int qcamera::QCamera3VendorTags::get_tag_name(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000a7580 + 0xa74ce);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a7588 + 0xa74e6,0x289,DAT_000a7584 + 0xa74de);
  }
  if (**(vendor_tag_ops ***)(DAT_000a758c + 0xa74ee) != param_1) {
    return 0;
  }
  iVar2 = 0;
  if ((0x7fffffff < param_2) && (param_2 < 0x801b0000)) {
    iVar2 = (param_2 >> 0x10) - 0x8000;
    if (param_2 < *(uint *)(*(int *)(DAT_000a7590 + 0xa751e) + iVar2 * 4)) {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_000a7594 + 0xa752e) + iVar2 * 4) +
                      (param_2 & 0xffff) * 8);
      iVar1 = *(int *)(iVar3 + 0x4c);
      if (iVar2 == 0 || iVar1 == 0) goto LAB_000a7560;
      mm_camera_debug_log(2,5,DAT_000a759c + 0xa7558,0x29c,DAT_000a7598 + 0xa754c,param_2,iVar2);
    }
    else {
      iVar2 = 0;
    }
  }
  iVar1 = *(int *)(iVar3 + 0x4c);
LAB_000a7560:
  if (iVar1 != 0) {
    mm_camera_debug_log(2,5,DAT_000a75a4 + 0xa7576,0x29d,DAT_000a75a0 + 0xa756e);
  }
  return iVar2;
}

