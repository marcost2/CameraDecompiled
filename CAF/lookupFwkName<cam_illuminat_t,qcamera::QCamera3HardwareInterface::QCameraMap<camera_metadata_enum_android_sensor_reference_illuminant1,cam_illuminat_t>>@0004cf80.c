
/* int qcamera::lookupFwkName<cam_illuminat_t,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_sensor_reference_illuminant1,
   cam_illuminat_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_sensor_reference_illuminant1,
   cam_illuminat_t> const*, unsigned int, cam_illuminat_t) */

int qcamera::
    lookupFwkName_cam_illuminat_t_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_sensor_reference_illuminant1_cam_illuminat_t__
              (QCameraMap *param_1,uint param_2,cam_illuminat_t param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(cam_illuminat_t *)(param_1 + uVar1 * 8 + 4) == param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004cfd0 + 0x4cf9e) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

