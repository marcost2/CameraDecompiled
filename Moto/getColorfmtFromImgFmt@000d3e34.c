
/* qcamera::QCameraPostProcessor::getColorfmtFromImgFmt(cam_format_t) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::getColorfmtFromImgFmt
          (QCameraPostProcessor *this,cam_format_t param_1)

{
  if (param_1 - 1 < 7) {
    return *(undefined4 *)(DAT_000d3e48 + 0xd3e40 + (param_1 - 1) * 4);
  }
  return 0;
}

