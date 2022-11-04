
/* qcamera::QCameraParameters::getFrameFmtString(cam_format_t) */

undefined4 __thiscall
qcamera::QCameraParameters::getFrameFmtString(QCameraParameters *this,cam_format_t param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(cam_format_t *)(*(int *)(DAT_000f6228 + 0xf620c) + uVar1 * 8 + 4) == param_1) {
      return *(undefined4 *)(*(int *)(DAT_000f6228 + 0xf620c) + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x5b);
  return 0;
}

