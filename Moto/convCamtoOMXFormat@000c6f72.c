
/* qcamera::QCameraVideoMemory::convCamtoOMXFormat(cam_format_t) */

undefined4 __thiscall
qcamera::QCameraVideoMemory::convCamtoOMXFormat(QCameraVideoMemory *this,cam_format_t param_1)

{
  if ((int)param_1 < 7) {
    if (param_1 - 2 < 2) {
      return 0x7fa30c00;
    }
  }
  else if (param_1 == 0x67) {
    return 0x7fa30c00;
  }
  return 0x15;
}

