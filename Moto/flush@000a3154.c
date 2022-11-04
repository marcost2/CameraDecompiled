
/* qcamera::QCamera3PicChannel::flush() */

int __thiscall qcamera::QCamera3PicChannel::flush(QCamera3PicChannel *this)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  void **ppvVar8;
  
  if (this[0x50] == (QCamera3PicChannel)0x0) {
    if (*(int *)(*(int *)(DAT_000a3258 + 0xa31d0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a3260 + 0xa31e8,0xf03,DAT_000a325c + 0xa31e0);
    }
    iVar1 = -0x13;
  }
  else {
    iVar1 = QCamera3PostProcessor::flush((QCamera3PostProcessor *)(this + 0x94));
    if (iVar1 == 0) {
      iVar1 = 0;
      if (*(int *)(*(int *)(DAT_000a3264 + 0xa31fa) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a326c + 0xa3214,0xf09,DAT_000a3268 + 0xa320a,0);
      }
    }
    else {
      ppvVar8 = (void **)(this + 0x319c);
      iVar2 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x232c));
      if (iVar2 != 0) {
        QCamera3StreamMem::deallocate((QCamera3StreamMem *)(this + 0x232c));
      }
      iVar2 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x14fc));
      if (iVar2 != 0) {
        QCamera3StreamMem::unregisterBuffers((QCamera3StreamMem *)(this + 0x14fc));
      }
      pthread_mutex_lock((pthread_mutex_t *)(this + 0x3194));
      pvVar4 = *ppvVar8;
      pvVar5 = *(void **)((int)pvVar4 + 8);
      pvVar6 = pvVar4;
      if (*(void **)((int)pvVar4 + 8) != pvVar4) {
        do {
          pvVar6 = *(void **)((int)pvVar5 + 8);
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
            pvVar4 = *ppvVar8;
          }
          pvVar5 = pvVar6;
        } while (pvVar6 != pvVar4);
      }
      *(void **)((int)pvVar6 + 4) = pvVar6;
      *(void **)((int)*ppvVar8 + 8) = *ppvVar8;
      if (*(int *)(*(int *)(this + 0x14e0) + 0x14) != 0) {
        uVar7 = 0;
        do {
          pvVar5 = *ppvVar8;
          puVar3 = (uint *)operator_new(0xc);
          puVar3[2] = (uint)pvVar5;
          *puVar3 = uVar7;
          uVar7 = uVar7 + 1;
          puVar3[1] = *(uint *)((int)pvVar5 + 4);
          *(uint **)(*(int *)((int)pvVar5 + 4) + 8) = puVar3;
          *(uint **)((int)pvVar5 + 4) = puVar3;
        } while (uVar7 < *(uint *)(*(int *)(this + 0x14e0) + 0x14));
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3194));
    }
  }
  return iVar1;
}

