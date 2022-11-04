
/* qcamera::QCameraParameters::setStreamPpMask(cam_stream_type_t, unsigned long long) */

undefined4 qcamera::QCameraParameters::setStreamPpMask(cam_stream_type_t param_1,ulonglong param_2)

{
  int iVar1;
  int in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  if (0xb < in_r1) {
    return 0x80000001;
  }
  iVar1 = param_1 + in_r1 * 8;
  *(undefined4 *)(iVar1 + 0x310) = in_r2;
  *(undefined4 *)(iVar1 + 0x314) = in_r3;
  return 0;
}

