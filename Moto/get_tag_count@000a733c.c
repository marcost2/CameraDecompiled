
/* qcamera::QCamera3VendorTags::get_tag_count(vendor_tag_ops const*) */

undefined4 qcamera::QCamera3VendorTags::get_tag_count(vendor_tag_ops *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (**(vendor_tag_ops ***)(DAT_000a7378 + 0xa7348) == param_1) {
    uVar1 = 0x61;
  }
  if (*(int *)(*(int *)(DAT_000a737c + 0xa7356) + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a7384 + 0xa7370,0x236,DAT_000a7380 + 0xa7366,uVar1);
  }
  return uVar1;
}

