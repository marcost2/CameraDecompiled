
/* qcamera::QCamera3ReprocessChannel::getMetaStreamBufs(unsigned int) */

void __thiscall
qcamera::QCamera3ReprocessChannel::getMetaStreamBufs(QCamera3ReprocessChannel *this,uint param_1)

{
  QCamera3StreamMem *this_00;
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(DAT_000a4a5c + 0xa4a22) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a4a64 + 0xa4a3c,0x1238,DAT_000a4a60 + 0xa4a32,param_1);
  }
  this_00 = (QCamera3StreamMem *)operator_new(0xe30);
  uVar1 = QCamera3StreamMem::QCamera3StreamMem(this_00,*(uint *)(this + 0x78),false);
  *(uint *)(this + 0xbc) = param_1;
  *(undefined4 *)(this + 0x104) = uVar1;
  return;
}

