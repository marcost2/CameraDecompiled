
/* qcamera::QCamera3VendorTags::get_vendor_tag_ops(vendor_tag_ops*) */

void qcamera::QCamera3VendorTags::get_vendor_tag_ops(vendor_tag_ops *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(DAT_0005e5b0 + 0x5e544);
  if (*(int *)(iVar4 + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  **(vendor_tag_ops ***)(DAT_0005e5bc + 0x5e564) = param_1;
  uVar1 = *(undefined4 *)(DAT_0005e5c0 + 0x5e56e);
  uVar2 = *(undefined4 *)(DAT_0005e5c4 + 0x5e574);
  uVar3 = *(undefined4 *)(DAT_0005e5c8 + 0x5e57a);
  uVar5 = *(undefined4 *)(DAT_0005e5cc + 0x5e580);
  *(undefined4 *)param_1 = *(undefined4 *)(DAT_0005e5d0 + 0x5e586);
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(iVar4 + 0x4c) != 0) {
    mm_camera_debug_log();
  }
  return;
}

