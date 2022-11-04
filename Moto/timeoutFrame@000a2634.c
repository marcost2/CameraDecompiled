
/* qcamera::QCamera3YUVChannel::timeoutFrame(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3YUVChannel::timeoutFrame(QCamera3YUVChannel *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  pthread_mutex_t *__mutex;
  
  iVar5 = *(int *)(DAT_000a2774 + 0xa2644);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a277c + 0xa265e,0xd22,DAT_000a2778 + 0xa2654,param_1);
  }
  iVar1 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)(this + 0x6b0),param_1);
  if (iVar1 < 0) {
    if (*(int *)(iVar5 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a2784 + 0xa26f0,0xd25,DAT_000a2780 + 0xa26e6,param_1);
    }
    uVar3 = 0xffffffff;
  }
  else {
    if (this[0x3171] != (QCamera3YUVChannel)0x0) {
      __mutex = (pthread_mutex_t *)(this + 0x3198);
      pthread_mutex_lock(__mutex);
      puVar4 = *(uint **)(this + 0x31a0);
      puVar2 = puVar4;
      do {
        puVar2 = (uint *)puVar2[5];
        if (puVar2 == puVar4) goto LAB_000a26f8;
      } while (*puVar2 != param_1);
      if (puVar2 == puVar4) {
LAB_000a26f8:
        if (*(int *)(iVar5 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000a278c + 0xa2710,0xd35,DAT_000a2788 + 0xa2708);
        }
      }
      else if (*(char *)(puVar2 + 1) != '\0') {
        uVar3 = QCamera3PostProcessor::timeoutFrame((QCamera3PostProcessor *)(this + 0x94),param_1);
        if (*(int *)(iVar5 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000a279c + 0xa26cc,0xd38,DAT_000a2798 + 0xa26c2,param_1);
        }
        pthread_mutex_unlock(__mutex);
        return uVar3;
      }
      pthread_mutex_unlock(__mutex);
    }
    iVar1 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)(this + 0x6b0),param_1);
    if (iVar1 < 0) {
      if (*(int *)(iVar5 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000a2794 + 0xa274a,0x471,DAT_000a2790 + 0xa2740,param_1);
      }
    }
    else {
      QCamera3Stream::timeoutFrame(*(QCamera3Stream **)(this + 0x24),iVar1);
    }
    if (*(int *)(iVar5 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a27a4 + 0xa2766,0xd3d,DAT_000a27a0 + 0xa275c,param_1);
    }
    uVar3 = 0;
  }
  return uVar3;
}

