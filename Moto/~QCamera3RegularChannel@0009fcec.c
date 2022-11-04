
/* qcamera::QCamera3RegularChannel::~QCamera3RegularChannel() */

void __thiscall
qcamera::QCamera3RegularChannel::_QCamera3RegularChannel(QCamera3RegularChannel *this)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)this = *(int *)(DAT_0009fd4c + 0x9fcf8) + 8;
  if (this[0x50] != (QCamera3RegularChannel)0x0) {
    QCamera3PostProcessor::stop((QCamera3PostProcessor *)(this + 0x94));
    this[0x14f1] = (QCamera3RegularChannel)0x0;
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
  QCamera3ProcessingChannel::_QCamera3ProcessingChannel((QCamera3ProcessingChannel *)this);
  return;
}

