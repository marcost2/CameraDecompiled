
/* qcamera::QCamera3ReprocessChannel::unmapOfflineBuffers(bool) */

int __thiscall
qcamera::QCamera3ReprocessChannel::unmapOfflineBuffers(QCamera3ReprocessChannel *this,bool param_1)

{
  QCamera3Stream *pQVar1;
  QCamera3Stream **ppQVar2;
  QCamera3Stream *pQVar3;
  int iVar4;
  int iVar5;
  QCamera3Stream **ppQVar6;
  QCamera3Stream **ppQVar7;
  int iVar8;
  
  iVar8 = *(int *)(DAT_000a5188 + 0xa4fe4);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a5190 + 0xa5006,0x130b,DAT_000a518c + 0xa4ff8,param_1,
                        *(undefined4 *)(this + 0x44));
  }
  iVar4 = *(int *)(this + 0x44);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xa8));
  iVar5 = 0;
  ppQVar6 = (QCamera3Stream **)(*(QCamera3Stream ***)(this + 0x9c))[4];
  if (ppQVar6 != *(QCamera3Stream ***)(this + 0x9c)) {
    do {
      if (*ppQVar6 != (QCamera3Stream *)0x0) {
        iVar5 = QCamera3Stream::unmapBuf(*ppQVar6,*(uchar *)(ppQVar6 + 1),(uint)ppQVar6[2],-1);
        if ((iVar5 != 0) && (*(int *)(iVar8 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000a5198 + 0xa5050,0x131b,DAT_000a5194 + 0xa5046,iVar5);
        }
        if (*(int *)(iVar8 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a51a0 + 0xa5070,0x131d,DAT_000a519c + 0xa5064,ppQVar6[2]);
        }
      }
      if (param_1 == false) {
        pQVar1 = ppQVar6[3];
        pQVar3 = ppQVar6[4];
        *(QCamera3Stream **)(pQVar1 + 0x10) = pQVar3;
        *(QCamera3Stream **)(pQVar3 + 0xc) = pQVar1;
        operator_delete(ppQVar6);
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_000a50be;
      }
      ppQVar6 = (QCamera3Stream **)ppQVar6[4];
    } while (ppQVar6 != *(QCamera3Stream ***)(this + 0x9c));
    if (param_1 != false) {
      ppQVar2 = (QCamera3Stream **)ppQVar6[4];
      ppQVar7 = ppQVar6;
      if ((QCamera3Stream **)ppQVar6[4] != ppQVar6) {
        do {
          ppQVar6 = (QCamera3Stream **)ppQVar2[4];
          if (ppQVar2 != (QCamera3Stream **)0x0) {
            operator_delete(ppQVar2);
            ppQVar7 = *(QCamera3Stream ***)(this + 0x9c);
          }
          ppQVar2 = ppQVar6;
        } while (ppQVar6 != ppQVar7);
      }
      ppQVar6[3] = (QCamera3Stream *)ppQVar6;
      *(int *)(*(int *)(this + 0x9c) + 0x10) = *(int *)(this + 0x9c);
    }
  }
LAB_000a50be:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xa8));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xac));
  ppQVar6 = (QCamera3Stream **)(*(QCamera3Stream ***)(this + 0xa4))[4];
  if (ppQVar6 != *(QCamera3Stream ***)(this + 0xa4)) {
    iVar4 = *(int *)(this + 0x44);
    do {
      if (*ppQVar6 != (QCamera3Stream *)0x0) {
        iVar5 = QCamera3Stream::unmapBuf(*ppQVar6,*(uchar *)(ppQVar6 + 1),(uint)ppQVar6[2],-1);
        if ((iVar5 != 0) && (*(int *)(iVar8 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000a51a8 + 0xa510a,0x133a,DAT_000a51a4 + 0xa5100,iVar5);
        }
        if (*(int *)(iVar8 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000a51b0 + 0xa512a,0x133c,DAT_000a51ac + 0xa511e,ppQVar6[2]);
        }
      }
      if (param_1 == false) {
        pQVar1 = ppQVar6[3];
        pQVar3 = ppQVar6[4];
        *(QCamera3Stream **)(pQVar1 + 0x10) = pQVar3;
        *(QCamera3Stream **)(pQVar3 + 0xc) = pQVar1;
        operator_delete(ppQVar6);
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_000a5178;
      }
      ppQVar6 = (QCamera3Stream **)ppQVar6[4];
    } while (ppQVar6 != *(QCamera3Stream ***)(this + 0xa4));
    if (param_1 != false) {
      ppQVar2 = (QCamera3Stream **)ppQVar6[4];
      ppQVar7 = ppQVar6;
      if ((QCamera3Stream **)ppQVar6[4] != ppQVar6) {
        do {
          ppQVar6 = (QCamera3Stream **)ppQVar2[4];
          if (ppQVar2 != (QCamera3Stream **)0x0) {
            operator_delete(ppQVar2);
            ppQVar7 = *(QCamera3Stream ***)(this + 0xa4);
          }
          ppQVar2 = ppQVar6;
        } while (ppQVar6 != ppQVar7);
      }
      ppQVar6[3] = (QCamera3Stream *)ppQVar6;
      *(int *)(*(int *)(this + 0xa4) + 0x10) = *(int *)(this + 0xa4);
    }
  }
LAB_000a5178:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xac));
  return iVar5;
}

