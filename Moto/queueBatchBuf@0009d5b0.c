
/* qcamera::QCamera3Channel::queueBatchBuf() */

undefined4 qcamera::QCamera3Channel::queueBatchBuf(void)

{
  if (*(int *)(*(int *)(DAT_0009d5e0 + 0x9d5b6) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0009d5e8 + 0x9d5d2,0x135,DAT_0009d5e4 + 0x9d5ca);
  }
  return 0;
}

