
/* qcamera::QCamera3Channel::setBatchSize(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Channel::setBatchSize(QCamera3Channel *this,uint param_1)

{
  if (*(int *)(*(int *)(DAT_0009d5a4 + 0x9d57a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009d5ac + 0x9d598,0x124,DAT_0009d5a8 + 0x9d58c,param_1);
  }
  return 0;
}

