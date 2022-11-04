
/* qcamera::QCameraParameters::getFocusModeStr(cam_focus_mode_type) */

undefined4 qcamera::QCameraParameters::getFocusModeStr(cam_focus_mode_type param_1)

{
  if (param_1 - 1 < 8) {
    return *(undefined4 *)
            (*(int *)(DAT_000fa5d0 + 0xfa5c0) +
            *(int *)(DAT_000fa5cc + 0xfa5b8 + (param_1 - 1) * 4) * 8);
  }
  return 0;
}

