
/* qcamera::QCamera3ProcessingChannel::~QCamera3ProcessingChannel() */

QCamera3ProcessingChannel * __thiscall
qcamera::QCamera3ProcessingChannel::_QCamera3ProcessingChannel(QCamera3ProcessingChannel *this)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void **ppvVar5;
  void *pvVar6;
  uint uVar7;
  QCamera3StreamMem *this_00;
  QCamera3StreamMem *this_01;
  
  *(int *)this = *(int *)(DAT_0009df10 + 0x9ddce) + 8;
  if (this[0x50] != (QCamera3ProcessingChannel)0x0) {
    QCamera3PostProcessor::stop((QCamera3PostProcessor *)(this + 0x94));
    this[0x14f1] = (QCamera3ProcessingChannel)0x0;
    QCamera3Channel::stop((QCamera3Channel *)this);
  }
  uVar3 = *(uint *)(this + 0x44);
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      if (*(int **)(this + uVar7 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar7 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar7 * 4 + 0x24) = 0;
        uVar3 = *(uint *)(this + 0x44);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  *(undefined4 *)(this + 0x44) = 0;
  iVar1 = QCamera3PostProcessor::deinit((QCamera3PostProcessor *)(this + 0x94));
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_0009df14 + 0x9de2c) + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_0009df1c + 0x9de44,0x32d,DAT_0009df18 + 0x9de3c);
  }
  ppvVar5 = (void **)(this + 0x3160);
  this_01 = (QCamera3StreamMem *)(this + 0x232c);
  iVar1 = QCamera3StreamMem::getCnt(this_01);
  if (iVar1 != 0) {
    QCamera3StreamMem::deallocate(this_01);
  }
  this_00 = (QCamera3StreamMem *)(this + 0x14fc);
  iVar1 = QCamera3StreamMem::getCnt(this_00);
  if (iVar1 != 0) {
    QCamera3StreamMem::unregisterBuffers(this_00);
  }
  *(int *)(this + 0x3168) = *(int *)(DAT_0009df20 + 0x9de7c) + 8;
  pvVar4 = *(void **)(this + 0x316c);
  pvVar2 = *(void **)((int)pvVar4 + 8);
  pvVar6 = pvVar4;
  if (*(void **)((int)pvVar4 + 8) != pvVar4) {
    do {
      pvVar6 = *(void **)((int)pvVar2 + 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        pvVar4 = *(void **)(this + 0x316c);
      }
      pvVar2 = pvVar6;
    } while (pvVar6 != pvVar4);
  }
  *(void **)((int)pvVar6 + 4) = pvVar6;
  *(int *)(*(int *)(this + 0x316c) + 8) = *(int *)(this + 0x316c);
  if (*(void **)(this + 0x316c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x316c));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x3164));
  *(int *)(this + 0x315c) = *(int *)(DAT_0009df24 + 0x9debe) + 8;
  pvVar4 = *ppvVar5;
  pvVar2 = *(void **)((int)pvVar4 + 8);
  pvVar6 = pvVar4;
  if (*(void **)((int)pvVar4 + 8) != pvVar4) {
    do {
      pvVar6 = *(void **)((int)pvVar2 + 8);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        pvVar4 = *ppvVar5;
      }
      pvVar2 = pvVar6;
    } while (pvVar6 != pvVar4);
  }
  *(void **)((int)pvVar6 + 4) = pvVar6;
  *(void **)((int)*ppvVar5 + 8) = *ppvVar5;
  if (*ppvVar5 != (void *)0x0) {
    operator_delete__(*ppvVar5);
  }
  QCamera3StreamMem::_QCamera3StreamMem(this_01);
  QCamera3StreamMem::_QCamera3StreamMem(this_00);
  QCamera3StreamMem::_QCamera3StreamMem((QCamera3StreamMem *)(this + 0x6b0));
  QCamera3PostProcessor::_QCamera3PostProcessor((QCamera3PostProcessor *)(this + 0x94));
  return this;
}

