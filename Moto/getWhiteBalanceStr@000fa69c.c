
/* qcamera::QCameraParameters::getWhiteBalanceStr(cam_wb_mode_type) */

undefined4 qcamera::QCameraParameters::getWhiteBalanceStr(cam_wb_mode_type param_1)

{
  if ((param_1 < 10) && ((0x3fdU >> (param_1 & 0xff) & 1) != 0)) {
    return *(undefined4 *)
            (*(int *)(DAT_000fa6cc + 0xfa6c0) + *(int *)(DAT_000fa6c8 + 0xfa6b8 + param_1 * 4) * 8);
  }
  return 0;
}

