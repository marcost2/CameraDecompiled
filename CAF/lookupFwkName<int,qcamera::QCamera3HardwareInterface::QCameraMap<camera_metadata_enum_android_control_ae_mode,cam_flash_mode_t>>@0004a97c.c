
/* int qcamera::lookupFwkName<int,
   qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_ae_mode,
   cam_flash_mode_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<camera_metadata_enum_android_control_ae_mode,
   cam_flash_mode_t> const*, unsigned int, int) */

int qcamera::
    lookupFwkName_int_qcamera__QCamera3HardwareInterface__QCameraMap_camera_metadata_enum_android_control_ae_mode_cam_flash_mode_t__
              (QCameraMap *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + uVar1 * 8 + 4) == param_3) {
        return *(int *)(param_1 + uVar1 * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_0004a9cc + 0x4a99a) + 0x28) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

