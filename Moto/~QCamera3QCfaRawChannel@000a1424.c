
/* qcamera::QCamera3QCfaRawChannel::~QCamera3QCfaRawChannel() */

QCamera3QCfaRawChannel * __thiscall
qcamera::QCamera3QCfaRawChannel::_QCamera3QCfaRawChannel(QCamera3QCfaRawChannel *this)

{
  int *this_00;
  QCamera3StreamMem *this_01;
  uint uVar1;
  uint uVar2;
  int **ppiVar3;
  
  *(int *)this = *(int *)(DAT_000a151c + 0xa1432) + 8;
  ppiVar3 = (int **)(this + 0x118030);
  if (this[0x50] != (QCamera3QCfaRawChannel)0x0) {
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
  this_00 = *ppiVar3;
  if (this_00 != (int *)0x0) {
    if (*(int *)(*(int *)(DAT_000a1520 + 0xa147e) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a1528 + 0xa1496,0xb2a,DAT_000a1524 + 0xa148e);
      this_00 = *ppiVar3;
    }
    QCamera3StreamMem::deallocate((QCamera3StreamMem *)this_00);
    if (*ppiVar3 != (int *)0x0) {
      (**(code **)(**ppiVar3 + 4))();
    }
    *ppiVar3 = (int *)0x0;
  }
  this_01 = *(QCamera3StreamMem **)(this + 0x118034);
  if (this_01 != (QCamera3StreamMem *)0x0) {
    if (*(int *)(*(int *)(DAT_000a152c + 0xa14be) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a1534 + 0xa14d6,0xb30,DAT_000a1530 + 0xa14ce);
      this_01 = *(QCamera3StreamMem **)(this + 0x118034);
    }
    QCamera3StreamMem::deallocate(this_01);
    if (*(int **)(this + 0x118034) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x118034) + 4))();
    }
    *(undefined4 *)(this + 0x118034) = 0;
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x11803c));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x118040));
  *(undefined4 *)(this + 0x118038) = 0;
  return this;
}

