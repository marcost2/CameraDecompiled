
/* int qcamera::lookupHalName<float, qcamera::QCamera3HardwareInterface::QCameraMap<int,
   cam_hfr_mode_t>>(qcamera::QCamera3HardwareInterface::QCameraMap<int, cam_hfr_mode_t> const*,
   unsigned int, float) */

int qcamera::lookupHalName_float_qcamera__QCamera3HardwareInterface__QCameraMap_int_cam_hfr_mode_t__
              (QCameraMap *param_1,uint param_2,float param_3)

{
  float in_r2;
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      if ((float)(longlong)*(int *)(param_1 + uVar1 * 8) == in_r2) {
        return *(int *)((int)(param_1 + uVar1 * 8) + 4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  if (*(int *)(*(int *)(DAT_00050b48 + 0x50b0e) + 0x20) != 0) {
    mm_camera_debug_log();
    return -2;
  }
  return -2;
}

