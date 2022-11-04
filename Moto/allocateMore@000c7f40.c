
/* qcamera::QCameraGrallocMemory::allocateMore(unsigned char, unsigned int) */

undefined4 qcamera::QCameraGrallocMemory::allocateMore(uchar param_1,uint param_2)

{
  if (*(int *)(*(int *)(DAT_000c7f70 + 0xc7f46) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000c7f78 + 0xc7f62,0x90d,DAT_000c7f74 + 0xc7f5a);
  }
  return 0x80000000;
}

