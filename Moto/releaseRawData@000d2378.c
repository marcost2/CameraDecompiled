
/* qcamera::QCameraPostProcessor::releaseRawData(void*, void*) */

void qcamera::QCameraPostProcessor::releaseRawData(void *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000d2434 + 0xd2386);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d243c + 0xd239e,0x83a,DAT_000d2438 + 0xd2396);
  }
  if (param_2 == (void *)0x0) {
    if (*(int *)(iVar5 + 0x20) == 0) {
      return;
    }
    uVar2 = 1;
    uVar4 = 0x83e;
    iVar5 = DAT_000d2440 + 0xd23c8;
    iVar3 = DAT_000d2444 + 0xd23d0;
  }
  else {
    if (param_1 != (void *)0x0) {
      piVar1 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                 *(uint *)((int)param_1 + 4));
      if (piVar1 == (int *)0x0) {
        if (0 < *(char *)((int)param_2 + 0x140)) {
          iVar3 = 0;
          do {
            piVar1 = *(int **)((int)param_2 + iVar3 * 4 + 0x144);
            if ((piVar1 != (int *)0x0) && (piVar1[4] == *(int *)((int)param_1 + 4)))
            goto LAB_000d23ae;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(char *)((int)param_2 + 0x140));
        }
        if (*(int *)(iVar5 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d244c + 0xd240e,0x79f,DAT_000d2448 + 0xd2402,
                              *(undefined4 *)((int)param_1 + 4));
        }
      }
      else {
LAB_000d23ae:
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
      }
    }
    if (*(int *)(iVar5 + 0x2c) == 0) {
      return;
    }
    uVar2 = 4;
    uVar4 = 0x844;
    iVar5 = DAT_000d2450 + 0xd2420;
    iVar3 = DAT_000d2454 + 0xd2428;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar5);
  return;
}

