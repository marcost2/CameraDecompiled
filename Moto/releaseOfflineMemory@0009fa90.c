
/* qcamera::QCamera3ProcessingChannel::releaseOfflineMemory(unsigned int) */

int __thiscall
qcamera::QCamera3ProcessingChannel::releaseOfflineMemory
          (QCamera3ProcessingChannel *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = QCamera3StreamMem::getGrallocBufferIndex((QCamera3StreamMem *)(this + 0x14fc),param_1);
  if ((int)uVar1 < 0) {
    if (*(int *)(*(int *)(DAT_0009fb64 + 0x9fade) + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_0009fb6c + 0x9faf8,0x783,DAT_0009fb68 + 0x9faee,param_1);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = QCamera3StreamMem::unregisterBuffer((QCamera3StreamMem *)(this + 0x14fc),uVar1);
    if ((iVar2 != 0) && (*(int *)(*(int *)(DAT_0009fb70 + 0x9fabc) + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0009fb78 + 0x9fad4,0x786,DAT_0009fb74 + 0x9facc);
    }
  }
  iVar3 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x232c),param_1);
  if (iVar3 < 0) {
    if (*(int *)(*(int *)(DAT_0009fb7c + 0x9fb42) + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_0009fb84 + 0x9fb5c,0x790,DAT_0009fb80 + 0x9fb52,param_1);
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(this + 0x3164));
    iVar5 = *(int *)(this + 0x3160);
    piVar4 = (int *)operator_new(0xc);
    piVar4[2] = iVar5;
    *piVar4 = iVar3;
    piVar4[1] = *(int *)(iVar5 + 4);
    *(int **)(*(int *)(iVar5 + 4) + 8) = piVar4;
    *(int **)(iVar5 + 4) = piVar4;
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3164));
  }
  return iVar2;
}

