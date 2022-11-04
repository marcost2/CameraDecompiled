
/* qcamera::QCamera3RegularChannel::setBatchSize(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3RegularChannel::setBatchSize(QCamera3RegularChannel *this,uint param_1)

{
  *(uint *)(this + 0x2ed8) = param_1;
  if (*(int *)(*(int *)(DAT_00058cb0 + 0x58c84) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  return 0;
}

