
/* qcamera::QCameraParameters::configureLowLight(cam_capture_frame_config_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::configureLowLight
          (QCameraParameters *this,cam_capture_frame_config_t *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)param_1 = 1;
  uVar1 = android::CameraParameters::getInt((char *)this);
  uVar2 = 1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1 & 0xff;
  }
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x10) = 1;
  if (*(int *)(*(int *)(DAT_000f1998 + 0xf1972) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f19a0 + 0xf198c,0x212e,DAT_000f199c + 0xf1980,uVar2);
  }
  return 0;
}

