
/* qcamera::QCamera3YUVChannel::getNextPendingCbBuffer() */

int __thiscall qcamera::QCamera3YUVChannel::getNextPendingCbBuffer(QCamera3YUVChannel *this)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  
  pvVar3 = *(void **)(this + 0x31a0);
  pvVar2 = *(void **)((int)pvVar3 + 0x14);
  pvVar5 = pvVar2;
  if (pvVar2 != pvVar3) {
    do {
      ppvVar1 = (void **)((int)pvVar5 + 0x14);
      pvVar5 = *ppvVar1;
    } while (pvVar3 != *ppvVar1);
    iVar7 = *(int *)((int)pvVar2 + 0xc);
    if (iVar7 != 0) {
      iVar4 = *(int *)((int)pvVar2 + 0x10);
      iVar6 = *(int *)((int)pvVar2 + 0x14);
      *(int *)(iVar4 + 0x14) = iVar6;
      *(int *)(iVar6 + 0x10) = iVar4;
      operator_delete(pvVar2);
      return iVar7;
    }
  }
  return 0;
}

