
/* qcamera::QCamera3RawDumpChannel::~QCamera3RawDumpChannel() */

QCamera3RawDumpChannel * __thiscall
qcamera::QCamera3RawDumpChannel::_QCamera3RawDumpChannel(QCamera3RawDumpChannel *this)

{
  uint uVar1;
  uint uVar2;
  
  *(int *)this = *(int *)(DAT_000a0ee0 + 0xa0ea0) + 8;
  if (this[0x50] != (QCamera3RawDumpChannel)0x0) {
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
  return this;
}

