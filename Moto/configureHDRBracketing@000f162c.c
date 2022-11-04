
/* qcamera::QCameraParameters::configureHDRBracketing(cam_capture_frame_config_t&) */

int __thiscall
qcamera::QCameraParameters::configureHDRBracketing
          (QCameraParameters *this,cam_capture_frame_config_t *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_34;
  
  iVar4 = *(int *)(DAT_000f1760 + 0xf163c);
  if (*(int *)(iVar4 + 0x28) == 0) {
    uVar5 = *(uint *)(*(int *)(this + 0x1d4) + 0x2fd8);
  }
  else {
    mm_camera_debug_log(1,3,DAT_000f1768 + 0xf1658,0x20bf,DAT_000f1764 + 0xf1650);
    iVar1 = *(int *)(this + 0x1d4);
    uVar5 = *(uint *)(iVar1 + 0x2fd8);
    if (*(int *)(iVar4 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f1770 + 0xf1694,0x20c7,DAT_000f176c + 0xf1684,
                          (int)*(char *)(iVar1 + 0x2fe0),(int)*(char *)(iVar1 + 0x2fe1),uVar5);
    }
  }
  *(uint *)param_1 = uVar5;
  iVar1 = *(int *)(*(int *)(this + 0x1d4) + 0x2fdc);
  if (iVar1 == 1) {
    local_34 = setToneMapMode(this,0,true);
    iVar2 = local_34;
    if (local_34 != 0) {
      iVar2 = *(int *)(iVar4 + 0x24);
    }
    if (local_34 != 0 && iVar2 != 0) {
      mm_camera_debug_log(1,2,DAT_000f1778 + 0xf16ee,0x20d0,DAT_000f1774 + 0xf16e6);
    }
    uVar5 = *(uint *)param_1;
  }
  else {
    local_34 = 0;
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    puVar6 = (undefined4 *)(param_1 + 0xc);
    iVar2 = DAT_000f177c + 0xf171e;
    do {
      *puVar6 = 2;
      puVar6[1] = iVar1;
      puVar6[-1] = 1;
      uVar3 = (uint)*(byte *)(*(int *)(this + 0x1d4) + uVar7 + 0x2fe0);
      puVar6[2] = uVar3;
      if (*(int *)(iVar4 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000f1780 + 0xf1744,0x20da,iVar2,uVar3);
        uVar5 = *(uint *)param_1;
      }
      puVar6 = puVar6 + 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return local_34;
}

