
/* qcamera::QCamera3Stream::invalidateBuf(unsigned int) */

undefined4 qcamera::QCamera3Stream::invalidateBuf(uint param_1)

{
  undefined4 uVar1;
  uint in_r1;
  
  if (*(QCamera3StreamMem **)(param_1 + 0xcc) != (QCamera3StreamMem *)0x0) {
    uVar1 = QCamera3StreamMem::invalidateCache(*(QCamera3StreamMem **)(param_1 + 0xcc),in_r1);
    return uVar1;
  }
  if (*(int *)(*(int *)(DAT_0009bae0 + 0x9bab4) + 0x3c) != 0) {
    mm_camera_debug_log(2,1,DAT_0009bae8 + 0x9bad0,0x3fe,DAT_0009bae4 + 0x9bac8);
  }
  return 0xffffffda;
}

