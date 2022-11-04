
/* qcamera::QCamera3VendorTags::get_tag_type(vendor_tag_ops const*, unsigned int) */

uint qcamera::QCamera3VendorTags::get_tag_type(vendor_tag_ops *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(DAT_000a766c + 0xa75b6);
  if (*(int *)(iVar3 + 0x4c) != 0) {
    mm_camera_debug_log(2,5,DAT_000a7674 + 0xa75ce,0x2b3,DAT_000a7670 + 0xa75c6);
  }
  if (**(vendor_tag_ops ***)(DAT_000a7678 + 0xa75d6) == param_1) {
    uVar2 = 0xffffffff;
    if ((0x7fffffff < param_2) && (param_2 < 0x801b0000)) {
      iVar1 = (param_2 >> 0x10) - 0x8000;
      if (param_2 < *(uint *)(*(int *)(DAT_000a767c + 0xa760e) + iVar1 * 4)) {
        uVar2 = (uint)*(byte *)(*(int *)(*(int *)(DAT_000a7680 + 0xa761e) + iVar1 * 4) +
                                (param_2 & 0xffff) * 8 + 4);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    if (*(int *)(iVar3 + 0x4c) != 0) {
      uVar4 = uVar2;
      mm_camera_debug_log(2,5,DAT_000a7688 + 0xa764a,0x2c4,DAT_000a7684 + 0xa7640,param_2,uVar2);
      if (*(int *)(iVar3 + 0x4c) != 0) {
        mm_camera_debug_log(2,5,DAT_000a7690 + 0xa7666,0x2c5,DAT_000a768c + 0xa765e,param_2,uVar4);
      }
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

