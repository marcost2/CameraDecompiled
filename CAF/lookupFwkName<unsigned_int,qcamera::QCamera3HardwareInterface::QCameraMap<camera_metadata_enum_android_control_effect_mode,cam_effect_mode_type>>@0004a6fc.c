
/* int qcamera::lookupFwkName<unsigned int,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_effect_mode,
   cam_effect_mode_type>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_effect_mode,
   cam_effect_mode_type> const*, unsigned int, unsigned int) */

int qcamera::
    lookupFwkName_unsigned_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_effect_mode_cam_effect_mode_type__
              (QCameraMap *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + uVar1 * 8 + 4) == param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004a74c + 0x4a71a) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

