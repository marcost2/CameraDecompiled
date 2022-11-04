
/* qcamera::QCamera3VendorTags::get_tag_count(vendor_tag_ops const*) */

uint qcamera::QCamera3VendorTags::get_tag_count(vendor_tag_ops *param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(**(int **)(DAT_0005e61c + 0x5e5e6) - (int)param_1);
  if (*(int *)(*(int *)(DAT_0005e620 + 0x5e5f8) + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  return uVar1 & 0xffffffe0;
}

