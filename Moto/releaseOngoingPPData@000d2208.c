
/* qcamera::QCameraPostProcessor::releaseOngoingPPData(void*, void*) */

void qcamera::QCameraPostProcessor::releaseOngoingPPData(void *param_1,void *param_2)

{
  int *piVar1;
  void *__ptr;
  void *extraout_r1;
  void *extraout_r1_00;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != (void *)0x0) {
    iVar4 = *(int *)((int)param_1 + 8);
    pvVar2 = param_2;
    if (iVar4 != 0) {
      if (*(char *)((int)param_1 + 0xc) == '\0') {
        piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                  (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                   *(uint *)(iVar4 + 4));
        if (piVar1 == (int *)0x0) {
          if (0 < *(char *)((int)param_2 + 0x140)) {
            iVar3 = 0;
            do {
              piVar1 = *(int **)((int)param_2 + iVar3 * 4 + 0x144);
              if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar4 + 4))) goto LAB_000d2226;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(char *)((int)param_2 + 0x140));
          }
          if (*(int *)(*(int *)(DAT_000d231c + 0xd22f8) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d2324 + 0xd2316,0x79f,DAT_000d2320 + 0xd230a,
                                *(undefined4 *)(iVar4 + 4));
          }
        }
        else {
LAB_000d2226:
          (**(code **)(*piVar1 + 0x1c))(piVar1,iVar4);
        }
      }
      if (*(void **)((int)param_1 + 8) == *(void **)((int)param_1 + 0x14)) {
        *(undefined4 *)((int)param_1 + 0x14) = 0;
      }
      free(*(void **)((int)param_1 + 8));
      *(undefined4 *)((int)param_1 + 8) = 0;
      pvVar2 = extraout_r1;
    }
    iVar4 = *(int *)((int)param_1 + 0x14);
    if (iVar4 != 0) {
      piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                 *(uint *)(iVar4 + 4));
      if (piVar1 == (int *)0x0) {
        if (0 < *(char *)((int)param_2 + 0x140)) {
          iVar3 = 0;
          do {
            piVar1 = *(int **)((int)param_2 + iVar3 * 4 + 0x144);
            if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar4 + 4))) goto LAB_000d2250;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(char *)((int)param_2 + 0x140));
        }
        if (*(int *)(*(int *)(DAT_000d2328 + 0xd22ac) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d2330 + 0xd22ca,0x79f,DAT_000d232c + 0xd22be,
                              *(undefined4 *)(iVar4 + 4));
        }
      }
      else {
LAB_000d2250:
        (**(code **)(*piVar1 + 0x1c))(piVar1,iVar4);
      }
      free(*(void **)((int)param_1 + 0x14));
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      pvVar2 = extraout_r1_00;
    }
    __ptr = *(void **)((int)param_1 + 0x1c);
    if (__ptr != (void *)0x0) {
      pvVar2 = (void *)(uint)*(byte *)((int)param_1 + 0x18);
    }
    if (__ptr != (void *)0x0 && pvVar2 != (void *)0x0) {
      free(__ptr);
      *(undefined *)((int)param_1 + 0x18) = 0;
    }
    *(undefined *)((int)param_1 + 4) = 0;
  }
  return;
}

