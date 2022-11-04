
/* qcamera::QCamera3PostProcessor::getColorfmtFromImgFmt(cam_format_t) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::getColorfmtFromImgFmt
          (QCamera3PostProcessor *this,cam_format_t param_1)

{
  if (param_1 - 1 < 7) {
    return *(undefined4 *)(DAT_000a8be8 + 0xa8be0 + (param_1 - 1) * 4);
  }
  return 0;
}

