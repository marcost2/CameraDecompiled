
/* qcamera::QCameraPostProcessor::releasePPInputData(void*, void*) */

void qcamera::QCameraPostProcessor::releasePPInputData(void *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (void *)0x0) {
    iVar3 = *(int *)((int)param_1 + 4);
    if (iVar3 != 0) {
      piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                 *(uint *)(iVar3 + 4));
      if (piVar1 == (int *)0x0) {
        if (0 < *(char *)((int)param_2 + 0x140)) {
          iVar2 = 0;
          do {
            piVar1 = *(int **)((int)param_2 + iVar2 * 4 + 0x144);
            if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar3 + 4))) goto LAB_000d592a;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(char *)((int)param_2 + 0x140));
        }
        if (*(int *)(*(int *)(DAT_000d5a04 + 0xd595c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d5a0c + 0xd5978,0x79f,DAT_000d5a08 + 0xd596c,
                              *(undefined4 *)(iVar3 + 4));
        }
      }
      else {
LAB_000d592a:
        (**(code **)(*piVar1 + 0x1c))(piVar1,iVar3);
      }
      if (*(void **)((int)param_1 + 4) == *(void **)((int)param_1 + 8)) {
        *(undefined4 *)((int)param_1 + 8) = 0;
      }
      free(*(void **)((int)param_1 + 4));
      *(undefined4 *)((int)param_1 + 4) = 0;
    }
    iVar3 = *(int *)((int)param_1 + 8);
    if (iVar3 != 0) {
      piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                 *(uint *)(iVar3 + 4));
      if (piVar1 == (int *)0x0) {
        if (0 < *(char *)((int)param_2 + 0x140)) {
          iVar2 = 0;
          do {
            piVar1 = *(int **)((int)param_2 + iVar2 * 4 + 0x144);
            if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)(iVar3 + 4))) goto LAB_000d599e;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(char *)((int)param_2 + 0x140));
        }
        if (*(int *)(*(int *)(DAT_000d5a10 + 0xd59d0) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d5a18 + 0xd59ec,0x79f,DAT_000d5a14 + 0xd59e0,
                              *(undefined4 *)(iVar3 + 4));
        }
      }
      else {
LAB_000d599e:
        (**(code **)(*piVar1 + 0x1c))(piVar1,iVar3);
      }
      free(*(void **)((int)param_1 + 8));
      *(undefined4 *)((int)param_1 + 8) = 0;
    }
    *(undefined *)param_1 = 0;
  }
  return;
}

