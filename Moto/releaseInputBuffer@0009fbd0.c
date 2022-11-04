
/* qcamera::QCamera3ProcessingChannel::releaseInputBuffer(unsigned int) */

int __thiscall
qcamera::QCamera3ProcessingChannel::releaseInputBuffer(QCamera3ProcessingChannel *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x14fc),param_1);
  if ((int)uVar1 < 0) {
    if (*(int *)(*(int *)(DAT_0009fc44 + 0x9fc1e) + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_0009fc4c + 0x9fc38,0x79f,DAT_0009fc48 + 0x9fc2e,param_1);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = QCamera3StreamMem::unregisterBuffer((QCamera3StreamMem *)(this + 0x14fc),uVar1);
    if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_0009fc50 + 0x9fbfc) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0009fc58 + 0x9fc14,0x7a2,DAT_0009fc54 + 0x9fc0c);
    }
  }
  return iVar2;
}

