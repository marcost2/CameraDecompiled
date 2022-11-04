
/* qcamera::QCameraPostProcessor::getJpegPaddingReq(cam_padding_info_t&) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::getJpegPaddingReq
          (QCameraPostProcessor *this,cam_padding_info_t *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x10;
  *(undefined4 *)(param_1 + 8) = 4;
  return 0;
}

