
/* qcamera::QCamera3ProcessingChannel::timeoutFrame(unsigned int) */

undefined4 qcamera::QCamera3ProcessingChannel::timeoutFrame(uint param_1)

{
  int iVar1;
  uint in_r1;
  
  iVar1 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)(param_1 + 0x408),in_r1);
  if (-1 < iVar1) {
    QCamera3Stream::timeoutFrame(*(uint *)(param_1 + 0x24));
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000579bc + 0x57996) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffff;
}

