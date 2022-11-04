
/* qcamera::QCamera3ProcessingChannel::releaseInputBuffer(unsigned int) */

int __thiscall
qcamera::QCamera3ProcessingChannel::releaseInputBuffer(QCamera3ProcessingChannel *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x1254),param_1);
  if ((int)uVar1 < 0) {
    if (*(int *)(*(int *)(DAT_0005899c + 0x58976) + 0x24) != 0) {
      mm_camera_debug_log();
    }
    iVar2 = 0;
  }
  else {
    iVar2 = QCamera3StreamMem::unregisterBuffer((QCamera3StreamMem *)(this + 0x1254),uVar1);
    if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_000589a8 + 0x58954) + 0x20) != 0)) {
      mm_camera_debug_log();
    }
  }
  return iVar2;
}

