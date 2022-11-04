
/* int qcamera::lookupFwkName<unsigned char,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_lens_info_focus_distance_calibration,
   cam_focus_calibration_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_lens_info_focus_distance_calibration,
   cam_focus_calibration_t> const*, unsigned int, unsigned char) */

int qcamera::
    lookupFwkName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_lens_info_focus_distance_calibration_cam_focus_calibration_t__
              (QCameraMap *param_1,uint param_2,uchar param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(uint *)(param_1 + uVar1 * 8 + 4) == (uint)param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004cf74 + 0x4cf42) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

