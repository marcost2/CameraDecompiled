
/* int qcamera::lookupFwkName<unsigned char,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_awb_mode,
   cam_wb_mode_type>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_awb_mode,
   cam_wb_mode_type> const*, unsigned int, unsigned char) */

int qcamera::
    lookupFwkName_unsigned_char_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_awb_mode_cam_wb_mode_type__
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
  if (*(int *)(*(int *)(DAT_0004d078 + 0x4d046) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

