
/* qcamera::QCamera3Stream::cleanInvalidateBuf(unsigned int) */

undefined4 qcamera::QCamera3Stream::cleanInvalidateBuf(uint param_1)

{
  undefined4 uVar1;
  uint in_r1;
  
  if (*(QCamera3StreamMem **)(param_1 + 0xcc) != (QCamera3StreamMem *)0x0) {
    uVar1 = QCamera3StreamMem::cleanInvalidateCache(*(QCamera3StreamMem **)(param_1 + 0xcc),in_r1);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_0009bc7c + 0x9bc50) + 0x3c) != 0) {
    mm_camera_debug_log(2,1,DAT_0009bc84 + 0x9bc6c,0x413,DAT_0009bc80 + 0x9bc64);
  }
  return 0xffffffda;
}

