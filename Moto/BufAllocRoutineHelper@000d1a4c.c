
/* qcamera::QCameraStream::BufAllocRoutineHelper(void*) */

undefined4 qcamera::QCameraStream::BufAllocRoutineHelper(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined local_29;
  int local_28;
  
  piVar1 = *(int **)(DAT_000d1afc + 0xd1a5a);
  local_28 = *piVar1;
  if (0 < *(int *)((int)param_1 + 0x10088)) {
    do {
      local_29 = 1;
      iVar2 = (**(code **)(**(int **)((int)param_1 + 0x114) + 4))
                        (*(int **)((int)param_1 + 0x114),*(undefined4 *)((int)param_1 + 0x10c),
                         *(undefined4 *)((int)param_1 + 0x2a4),&local_29);
      pthread_mutex_lock((pthread_mutex_t *)((int)param_1 + 0x10094));
      if (iVar2 == 0) {
        *(int *)((int)param_1 + 0x10088) = *(int *)((int)param_1 + 0x10088) + -1;
        *(int *)((int)param_1 + 0x1008c) = *(int *)((int)param_1 + 0x1008c) + 1;
        if (*(char *)((int)param_1 + 0x10085) != '\0') goto LAB_000d1aca;
      }
      else {
LAB_000d1aca:
        *(undefined *)((int)param_1 + 0x10090) = 1;
        *(undefined4 *)((int)param_1 + 0x10088) = 0;
      }
      pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x10098));
      pthread_mutex_unlock((pthread_mutex_t *)((int)param_1 + 0x10094));
    } while (0 < *(int *)((int)param_1 + 0x10088));
  }
  if (*piVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

