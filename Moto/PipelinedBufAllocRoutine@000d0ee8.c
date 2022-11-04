
/* qcamera::QCameraStream::PipelinedBufAllocRoutine(void*) */

undefined4 qcamera::QCameraStream::PipelinedBufAllocRoutine(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  pthread_mutex_t *ppVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  pthread_t local_2c;
  int local_28;
  
  piVar6 = *(int **)(DAT_000d10f8 + 0xd0ef6);
  local_28 = *piVar6;
  iVar8 = *(int *)(DAT_000d10fc + 0xd0f04);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d1104 + 0xd0f20,0x829,DAT_000d1100 + 0xd0f18);
  }
  ppVar4 = (pthread_mutex_t *)((int)param_1 + 0x10064);
  pthread_mutex_lock(ppVar4);
  if (*(char *)((int)param_1 + 0x10061) != '\0') {
    do {
      pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x10068),ppVar4);
    } while (*(char *)((int)param_1 + 0x10061) != '\0');
  }
  pthread_mutex_unlock(ppVar4);
  uVar5 = (uint)*(byte *)((int)param_1 + 0x8e);
  if ((uVar5 != 0) && (*(char *)((int)param_1 + 0x10085) == '\0')) {
    local_2c = 0;
    *(undefined *)((int)param_1 + 0x10090) = 0;
    *(undefined4 *)((int)param_1 + 0x1008c) = 0;
    *(uint *)((int)param_1 + 0x10088) = uVar5;
    pthread_create(&local_2c,(pthread_attr_t *)0x0,*(__start_routine **)(DAT_000d1108 + 0xd0f92),
                   param_1);
    pthread_setname_np(local_2c,(char *)(DAT_000d110c + 0xd0fa0));
    uVar5 = *(byte *)((int)param_1 + 0x8c) - uVar5 & 0xff;
    if (uVar5 < *(byte *)((int)param_1 + 0x8c)) {
      ppVar4 = (pthread_mutex_t *)((int)param_1 + 0x10094);
      iVar7 = 0;
      do {
        pthread_mutex_lock(ppVar4);
        while (*(int *)((int)param_1 + 0x1008c) == 0) {
          if (*(char *)((int)param_1 + 0x10090) != '\0') {
            pthread_mutex_unlock(ppVar4);
            goto LAB_000d10aa;
          }
          pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x10098),ppVar4);
        }
        *(int *)((int)param_1 + 0x1008c) = *(int *)((int)param_1 + 0x1008c) + -1;
        pthread_mutex_unlock(ppVar4);
        if ((iVar7 != 0) || (*(QCameraMemory **)((int)param_1 + 0x10c) == (QCameraMemory *)0x0))
        break;
        iVar7 = QCameraMemory::getSize(*(QCameraMemory **)((int)param_1 + 0x10c),uVar5);
        if (iVar7 == -0x4b) {
          __android_log_print(6,DAT_000d111c + 0xd1010,DAT_000d1120 + 0xd1012);
LAB_000d1094:
          iVar7 = 0;
        }
        else {
          pcVar3 = *(code **)((int)param_1 + 0x2e8);
          uVar1 = QCameraMemory::getFd(*(QCameraMemory **)((int)param_1 + 0x10c),uVar5);
          uVar2 = (**(code **)(**(int **)((int)param_1 + 0x10c) + 0x24))
                            (*(int **)((int)param_1 + 0x10c),uVar5);
          iVar7 = (*pcVar3)(uVar5,0xffffffff,uVar1,iVar7,uVar2,3,
                            *(undefined4 *)((int)param_1 + 0x2f4));
          if (iVar7 == 0) {
            QCameraMemory::getBufDef
                      (*(QCameraMemory **)((int)param_1 + 0x10c),
                       (cam_frame_len_offset_t *)((int)param_1 + 0x120),
                       (mm_camera_buf_def *)(uVar5 * 0x218 + *(int *)((int)param_1 + 0x118)),uVar5);
            (**(code **)(*(int *)((int)param_1 + 0x6c) + 0x6c))
                      (*(undefined4 *)((int)param_1 + 0x60),*(undefined4 *)((int)param_1 + 100),
                       uVar5 * 0x218 + *(int *)((int)param_1 + 0x118));
            goto LAB_000d1094;
          }
          __android_log_print(6,DAT_000d1110 + 0xd1062,DAT_000d1114 + 0xd1064,DAT_000d1118 + 0xd1066
                              ,iVar7,uVar5);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)((int)param_1 + 0x8c));
    }
LAB_000d10aa:
    *(undefined *)((int)param_1 + 0x8e) = 0;
    pthread_join(local_2c,(void **)0x0);
  }
  *(undefined *)((int)param_1 + 0x10085) = 1;
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d1128 + 0xd10de,0x86b,DAT_000d1124 + 0xd10d6);
  }
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

