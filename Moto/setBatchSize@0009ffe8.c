
/* qcamera::QCamera3RegularChannel::setBatchSize(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3RegularChannel::setBatchSize(QCamera3RegularChannel *this,uint param_1)

{
  *(uint *)(this + 0x3174) = param_1;
  if (*(int *)(*(int *)(DAT_000a0020 + 0x9fff4) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a0028 + 0xa0012,0x85b,DAT_000a0024 + 0xa0006,param_1);
  }
  return 0;
}

