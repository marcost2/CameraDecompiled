
/* qcamera::QCamera3MetadataChannel::getStreamBufs(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3MetadataChannel::getStreamBufs(QCamera3MetadataChannel *this,uint param_1)

{
  QCamera3StreamMem *pQVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 < &PTR_bufDone_00117af8) {
    if (*(int *)(*(int *)(DAT_000a07ec + 0xa06f8) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a07f4 + 0xa0712,0x934,DAT_000a07f0 + 0xa0708,param_1,
                          &PTR_bufDone_00117af8);
    }
    return 0;
  }
  pQVar1 = (QCamera3StreamMem *)operator_new(0xe30);
  pQVar1 = (QCamera3StreamMem *)QCamera3StreamMem::QCamera3StreamMem(pQVar1,0x12,true);
  *(QCamera3StreamMem **)(this + 0x94) = pQVar1;
  iVar2 = QCamera3StreamMem::allocateAll(pQVar1,param_1);
  if (-1 < iVar2) {
    pvVar3 = (void *)QCamera3StreamMem::getPtr(*(QCamera3StreamMem **)(this + 0x94),0);
    if (pvVar3 != (void *)0x0) {
      __aeabi_memclr8(pvVar3,0x10f);
      *(undefined *)((int)pvVar3 + 0x106974) = 0;
      *(undefined *)((int)pvVar3 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar3 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar3 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar3 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar3 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar3 + 0x772c8) = 0;
      *(undefined *)((int)pvVar3 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar3 + 0xb7340) = 0;
      *(undefined *)((int)pvVar3 + 0x117aec) = 0;
    }
    return *(undefined4 *)(this + 0x94);
  }
  if (*(int *)(*(int *)(DAT_000a07f8 + 0xa07ba) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a0800 + 0xa07d2,0x93e,DAT_000a07fc + 0xa07ca);
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  *(undefined4 *)(this + 0x94) = 0;
  return 0;
}

