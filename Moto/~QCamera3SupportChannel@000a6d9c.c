
/* qcamera::QCamera3SupportChannel::~QCamera3SupportChannel() */

void __thiscall
qcamera::QCamera3SupportChannel::_QCamera3SupportChannel(QCamera3SupportChannel *this)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)this = *(int *)(DAT_000a6e04 + 0xa6da8) + 8;
  if (this[0x50] != (QCamera3SupportChannel)0x0) {
    QCamera3Channel::stop((QCamera3Channel *)this);
  }
  uVar1 = *(uint *)(this + 0x44);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int **)(this + uVar2 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar2 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar2 * 4 + 0x24) = 0;
        uVar1 = *(uint *)(this + 0x44);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)(this + 0x44) = 0;
  if (*(QCamera3StreamMem **)(this + 0x94) != (QCamera3StreamMem *)0x0) {
    QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0x94));
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
  }
  operator_delete(this);
  return;
}

