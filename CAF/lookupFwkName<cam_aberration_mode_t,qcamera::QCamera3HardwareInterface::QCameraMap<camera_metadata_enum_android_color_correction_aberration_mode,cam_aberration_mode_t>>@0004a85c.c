
/* int qcamera::lookupFwkName<cam_aberration_mode_t,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_color_correction_aberration_mode,
   cam_aberration_mode_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_color_correction_aberration_mode,
   cam_aberration_mode_t> const*, unsigned int, cam_aberration_mode_t) */

int qcamera::
    lookupFwkName_cam_aberration_mode_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_color_correction_aberration_mode_cam_aberration_mode_t__
              (QCameraMap *param_1,uint param_2,cam_aberration_mode_t param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(cam_aberration_mode_t *)(param_1 + uVar1 * 8 + 4) == param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004a8ac + 0x4a87a) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

