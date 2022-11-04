
/* qcamera::QCamera3ProcessingChannel::isFwkInputBuffer(unsigned int) */

uint __thiscall
qcamera::QCamera3ProcessingChannel::isFwkInputBuffer(QCamera3ProcessingChannel *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x1254),param_1);
  return ~uVar1 >> 0x1f;
}

