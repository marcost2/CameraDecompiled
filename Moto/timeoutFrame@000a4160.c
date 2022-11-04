
/* qcamera::QCamera3PicChannel::timeoutFrame(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3PicChannel::timeoutFrame(QCamera3PicChannel *this,uint param_1)

{
  int iVar1;
  
  iVar1 = QCamera3StreamMem::getBufferIndex(*(QCamera3StreamMem **)(this + 0x3190),param_1);
  if (-1 < iVar1) {
    QCamera3Stream::timeoutFrame(*(QCamera3Stream **)(this + 0x24),iVar1);
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000a41b0 + 0xa418c) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a41b8 + 0xa41a6,0x10fd,DAT_000a41b4 + 0xa419c,param_1);
  }
  return 0xffffffff;
}

