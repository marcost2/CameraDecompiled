
/* int qcamera::lookupFwkName<cam_wb_mode_type,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_awb_mode,
   cam_wb_mode_type>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_awb_mode,
   cam_wb_mode_type> const*, unsigned int, cam_wb_mode_type) */

int qcamera::
    lookupFwkName_cam_wb_mode_type_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
              (QCameraMap *param_1,uint param_2,cam_wb_mode_type param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(cam_wb_mode_type *)(param_1 + uVar1 * 8 + 4) == param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004cf18 + 0x4cee6) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

