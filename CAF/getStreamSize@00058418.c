
/* qcamera::QCamera3ProcessingChannel::getStreamSize(cam_dimension_t&) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::getStreamSize
          (QCamera3ProcessingChannel *this,cam_dimension_t *param_1)

{
  if (*(int *)(this + 0x1238) != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x1238) + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(this + 0x1238) + 8);
    return 0;
  }
  return 0xffffffea;
}

