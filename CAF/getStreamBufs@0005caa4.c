
/* qcamera::QCamera3ReprocessChannel::getStreamBufs(unsigned int) */

QCamera3ReprocessChannel * __thiscall
qcamera::QCamera3ReprocessChannel::getStreamBufs(QCamera3ReprocessChannel *this,uint param_1)

{
  QCamera3StreamMem *this_00;
  QCamera3ReprocessChannel *pQVar1;
  
  if (*(int *)(this + 0xc4) == 1) {
    this_00 = (QCamera3StreamMem *)operator_new(0xe30);
    pQVar1 = (QCamera3ReprocessChannel *)
             QCamera3StreamMem::QCamera3StreamMem(this_00,*(uint *)(this + 0x78),false);
    *(uint *)(this + 0xb4) = param_1;
    *(QCamera3ReprocessChannel **)(this + 0xf0) = pQVar1;
    return pQVar1;
  }
  return this + 0xf4;
}

