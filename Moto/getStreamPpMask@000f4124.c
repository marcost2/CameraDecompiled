
/* qcamera::QCameraParameters::getStreamPpMask(cam_stream_type_t, unsigned long long&) */

undefined4 __thiscall
qcamera::QCameraParameters::getStreamPpMask
          (QCameraParameters *this,cam_stream_type_t param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  
  if (0xb < (int)param_1) {
    return 0x80000001;
  }
  uVar1 = *(undefined4 *)(this + param_1 * 8 + 0x314);
  *(undefined4 *)param_2 = *(undefined4 *)(this + param_1 * 8 + 0x310);
  *(undefined4 *)((int)param_2 + 4) = uVar1;
  return 0;
}

