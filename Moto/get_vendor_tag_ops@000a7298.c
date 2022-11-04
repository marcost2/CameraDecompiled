
/* qcamera::QCamera3VendorTags::get_vendor_tag_ops(vendor_tag_ops*) */

void qcamera::QCamera3VendorTags::get_vendor_tag_ops(vendor_tag_ops *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(DAT_000a7310 + 0xa72a4);
  if (*(int *)(iVar4 + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a7318 + 0xa72bc,0x214,DAT_000a7314 + 0xa72b4);
  }
  **(vendor_tag_ops ***)(DAT_000a731c + 0xa72c4) = param_1;
  uVar1 = *(undefined4 *)(DAT_000a7320 + 0xa72d6);
  uVar2 = *(undefined4 *)(DAT_000a7324 + 0xa72d8);
  uVar3 = *(undefined4 *)(DAT_000a7328 + 0xa72da);
  uVar5 = *(undefined4 *)(DAT_000a732c + 0xa72dc);
  *(undefined4 *)param_1 = *(undefined4 *)(DAT_000a7330 + 0xa72de);
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(iVar4 + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a7338 + 0xa730a,0x21f,DAT_000a7334 + 0xa7302);
  }
  return;
}

