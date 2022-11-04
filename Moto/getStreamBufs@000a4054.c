
/* qcamera::QCamera3PicChannel::getStreamBufs(unsigned int) */

void __thiscall qcamera::QCamera3PicChannel::getStreamBufs(QCamera3PicChannel *this,uint param_1)

{
  QCamera3StreamMem *this_00;
  undefined4 uVar1;
  
  this_00 = (QCamera3StreamMem *)operator_new(0xe30);
  uVar1 = QCamera3StreamMem::QCamera3StreamMem
                    (this_00,*(uint *)(*(int *)(this + 0x14e0) + 0x14),false);
  *(uint *)(this + 0x31a0) = param_1;
  *(undefined4 *)(this + 0x3190) = uVar1;
  return;
}

