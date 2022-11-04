
/* qcamera::QCamera3PicChannel::timeoutFrame(unsigned int) */

undefined4 qcamera::QCamera3PicChannel::timeoutFrame(uint param_1)

{
  int iVar1;
  uint in_r1;
  
  iVar1 = QCamera3StreamMem::getBufferIndex(*(QCamera3StreamMem **)(param_1 + 0x2ef4),in_r1);
  if (-1 < iVar1) {
    QCamera3Stream::timeoutFrame(*(uint *)(param_1 + 0x24));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_0005c398 + 0x5c374) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffff;
}

