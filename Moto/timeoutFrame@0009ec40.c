
/* qcamera::QCamera3ProcessingChannel::timeoutFrame(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::timeoutFrame(QCamera3ProcessingChannel *this,uint param_1)

{
  int iVar1;
  
  iVar1 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)(this + 0x6b0),param_1);
  if (-1 < iVar1) {
    QCamera3Stream::timeoutFrame(*(QCamera3Stream **)(this + 0x24),iVar1);
    return 0;
  }
  if (*(int *)(*(int *)(DAT_0009ec90 + 0x9ec6a) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009ec98 + 0x9ec84,0x471,DAT_0009ec94 + 0x9ec7a,param_1);
  }
  return 0xffffffff;
}

