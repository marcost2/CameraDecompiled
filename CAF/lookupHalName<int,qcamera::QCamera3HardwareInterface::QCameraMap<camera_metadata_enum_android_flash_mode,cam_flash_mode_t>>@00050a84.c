
/* int qcamera::lookupHalName<int,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_flash_mode,
   cam_flash_mode_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_flash_mode,
   cam_flash_mode_t> const*, unsigned int, int) */

int qcamera::
    lookupHalName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_flash_mode_cam_flash_mode_t__
              (QCameraMap *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + uVar1 * 8) == param_3) {
        return *(int *)(param_1 + uVar1 * 8 + 4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_00050ad8 + 0x50aa0) + 0x20) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

