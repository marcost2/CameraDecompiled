
/* qcamera::QCamera3RawChannel::~QCamera3RawChannel() */

void __thiscall qcamera::QCamera3RawChannel::_QCamera3RawChannel(QCamera3RawChannel *this)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)this = *(int *)(DAT_000a092c + 0xa08d4) + 8;
  if (this[0x50] != (QCamera3RawChannel)0x0) {
    QCamera3PostProcessor::stop((QCamera3PostProcessor *)(this + 0x94));
    this[0x14f1] = (QCamera3RawChannel)0x0;
    QCamera3Channel::stop((QCamera3Channel *)this);
  }
  uVar2 = *(uint *)(this + 0x44);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(int **)(this + uVar3 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar3 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar3 * 4 + 0x24) = 0;
        uVar2 = *(uint *)(this + 0x44);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  *(undefined4 *)(this + 0x44) = 0;
  pvVar1 = (void *)QCamera3ProcessingChannel::_QCamera3ProcessingChannel
                             ((QCamera3ProcessingChannel *)this);
  operator_delete(pvVar1);
  return;
}

