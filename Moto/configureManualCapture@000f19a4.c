
/* qcamera::QCameraParameters::configureManualCapture(cam_capture_frame_config_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::configureManualCapture
          (QCameraParameters *this,cam_capture_frame_config_t *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar1 = *(int *)(DAT_000f1a78 + 0xf19b4);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f1a80 + 0xf19ce,0x2143,DAT_000f1a7c + 0xf19c6);
  }
  if (*(int *)(this + 0x7c0) != 0) {
    uVar6 = 0;
    *(undefined4 *)param_1 = 1;
    puVar5 = (undefined4 *)(param_1 + 0x24);
    do {
      uVar2 = android::CameraParameters::getInt((char *)this);
      uVar3 = 1;
      if (0 < (int)uVar2) {
        uVar3 = uVar2 & 0xff;
      }
      puVar5[-7] = uVar3;
      puVar5[-6] = 5;
      if ((*(uint *)(this + 0x7b0) | *(uint *)(this + 0x7b4)) == 0) {
        uVar4 = 0;
        puVar5[-5] = 2;
        uVar2 = 0;
      }
      else {
        puVar5[-5] = 1;
        uVar2 = *(uint *)(this + 0x7b0);
        uVar4 = *(undefined4 *)(this + 0x7b4);
      }
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar4;
      if (*(int *)(this + 0x7bc) == 0) {
        puVar5[-1] = 2;
        uVar4 = 0;
      }
      else {
        puVar5[-1] = 1;
        uVar4 = *(undefined4 *)(this + 0x7bc);
      }
      *puVar5 = uVar4;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar6 < *(uint *)param_1);
  }
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f1a8c + 0xf1a6c,0x215a,DAT_000f1a88 + 0xf1a60,
                        *(undefined4 *)param_1);
  }
  return 0;
}

