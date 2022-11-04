
/* qcamera::QCameraPostProcessor::releaseNotifyData(void*, void*, int) */

void qcamera::QCameraPostProcessor::releaseNotifyData(void *param_1,void *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_000d414c + 0xd402e);
  local_20 = *piVar5;
  iVar6 = *(int *)(DAT_000d4150 + 0xd403c);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d4158 + 0xd405a,0x754,DAT_000d4154 + 0xd4050,param_1);
  }
  if (param_1 != (void *)0x0 && param_2 != (void *)0x0) {
    cVar1 = *(char *)((int)param_2 + 0x2c8);
    if (cVar1 != '\0') {
      if (param_3 != 0) {
        cVar1 = *(char *)((int)param_1 + 0x1c);
      }
      if (param_3 != 0 && cVar1 != '\0') {
        android::String8::String8
                  ((String8 *)&local_24,**(char ***)((int)param_1 + 0x10),
                   (uint)(*(char ***)((int)param_1 + 0x10))[1]);
        iVar2 = unlink(local_24);
        if (*(int *)(iVar6 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000d4160 + 0xd40a4,0x762,DAT_000d415c + 0xd4098,iVar2);
        }
        android::String8::_String8((String8 *)&local_24);
      }
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      (**(code **)(*(int *)((int)param_1 + 0x10) + 0xc))();
      *(undefined4 *)((int)param_1 + 0x10) = 0;
    }
    iVar2 = *(int *)((int)param_1 + 0x14);
    if (iVar2 != 0) {
      piVar3 = (int *)QCamera2HardwareInterface::getChannelByHandle
                                (*(QCamera2HardwareInterface **)((int)param_2 + 8),
                                 *(uint *)(iVar2 + 4));
      if (piVar3 == (int *)0x0) {
        if (0 < *(char *)((int)param_2 + 0x140)) {
          iVar4 = 0;
          do {
            piVar3 = *(int **)((int)param_2 + iVar4 * 4 + 0x144);
            if ((piVar3 != (int *)0x0) && (piVar3[4] == *(int *)(iVar2 + 4))) goto LAB_000d40c6;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(char *)((int)param_2 + 0x140));
        }
        if (*(int *)(iVar6 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d4168 + 0xd4144,0x79f,DAT_000d4164 + 0xd4138,
                              *(undefined4 *)(iVar2 + 4));
        }
      }
      else {
LAB_000d40c6:
        (**(code **)(*piVar3 + 0x1c))(piVar3,iVar2);
      }
      free(*(void **)((int)param_1 + 0x14));
      *(undefined4 *)((int)param_1 + 0x14) = 0;
    }
    if (*(int **)((int)param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x18) + 0xc))();
      if (*(int **)((int)param_1 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)((int)param_1 + 0x18) + 0x2c))();
      }
    }
    free(param_1);
  }
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

