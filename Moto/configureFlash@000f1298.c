
/* qcamera::QCameraParameters::configureFlash(cam_capture_frame_config_t&) */

int __thiscall
qcamera::QCameraParameters::configureFlash
          (QCameraParameters *this,cam_capture_frame_config_t *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(DAT_000f13f4 + 0xf12a8);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f13fc + 0xf12c4,0x2084,DAT_000f13f8 + 0xf12bc);
  }
  if (this[0x2ca] == (QCameraParameters)0x0) {
    if (*(int *)(this + 0x2f4) != 0) {
      uVar2 = 0;
      puVar5 = (uint *)(param_1 + 8);
      *(undefined4 *)param_1 = 1;
      do {
        uVar4 = android::CameraParameters::getInt((char *)this);
        uVar6 = 1;
        puVar5[1] = 1;
        if (0 < (int)uVar4) {
          uVar6 = uVar4 & 0xff;
        }
        *puVar5 = uVar6;
        uVar2 = uVar2 + 1;
        puVar5[2] = *(uint *)(this + 0x2f4);
        puVar5 = puVar5 + 8;
      } while (uVar2 < *(uint *)param_1);
    }
  }
  else {
    iVar1 = setToneMapMode(this,0,false);
    if (iVar1 != 0) {
      if (*(int *)(iVar7 + 0x20) == 0) {
        return iVar1;
      }
      mm_camera_debug_log(1,1,DAT_000f1404 + 0xf12f6,0x208c,DAT_000f1400 + 0xf12ee);
      return iVar1;
    }
    iVar1 = setCDSMode(this,0,false);
    if (iVar1 != 0) {
      if (*(int *)(iVar7 + 0x20) == 0) {
        return iVar1;
      }
      mm_camera_debug_log(1,1,DAT_000f140c + 0xf1390,0x2092,DAT_000f1408 + 0xf1388);
      return iVar1;
    }
    if (*(int *)(iVar7 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f1414 + 0xf13ae,0x2096,DAT_000f1410 + 0xf13a6);
    }
    uVar2 = (uint)*(byte *)(*(int *)(this + 0x1d4) + 0x385a);
    if (4 < uVar2) {
      uVar2 = 5;
    }
    *(uint *)param_1 = uVar2;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 8);
      uVar4 = 0;
      do {
        uVar6 = (uint)*(byte *)(*(int *)(this + 0x1d4) + uVar4 + 0x385c);
        if (uVar6 != 0) {
          uVar6 = 1;
        }
        *puVar3 = 1;
        puVar3[1] = 1;
        uVar4 = uVar4 + 1;
        puVar3[2] = uVar6 << 1;
        puVar3 = puVar3 + 8;
      } while (uVar4 < uVar2);
    }
  }
  if (*(int *)(iVar7 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f1420 + 0xf135a,0x20ad,DAT_000f141c + 0xf134e,
                        *(undefined4 *)param_1);
  }
  return 0;
}

