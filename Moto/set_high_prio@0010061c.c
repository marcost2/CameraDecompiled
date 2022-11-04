
/* set_high_prio(char const*, int) */

undefined4 set_high_prio(char *param_1,int param_2)

{
  pthread_t __target_thread;
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  sched_param sStack28;
  int local_18;
  
  piVar6 = *(int **)(DAT_00100738 + 0x10062a);
  local_18 = *piVar6;
  if (param_2 < 1) {
    if (*(int *)(*(int *)(DAT_00100770 + 0x100690) + 0x2c) == 0) goto LAB_00100724;
    uVar4 = 0xa5;
    iVar5 = DAT_00100774 + 0x1006a0;
    puVar3 = &LAB_001006aa + DAT_00100778;
  }
  else {
    iVar5 = 2;
    if (param_2 == 2) {
      iVar5 = 1;
    }
    sched_get_priority_min(iVar5);
    sStack28 = sched_get_priority_max(iVar5);
    __target_thread = pthread_self();
    iVar5 = pthread_setschedparam(__target_thread,iVar5,&sStack28);
    if (iVar5 == 0) {
      if (*(int *)(*(int *)(DAT_0010075c + 0x1006b0) + 0x2c) == 0) goto LAB_00100724;
      uVar4 = 0xa1;
      iVar5 = DAT_00100768 + 0x1006cc;
      puVar3 = &LAB_001006dc + DAT_0010076c;
    }
    else if (iVar5 == 1) {
      iVar5 = setpriority(PRIO_PROCESS,0,-0xf);
      iVar1 = *(int *)(*(int *)(DAT_0010073c + 0x10066e) + 0x2c);
      if (iVar5 == -1) {
        if (iVar1 == 0) goto LAB_00100724;
        piVar2 = (int *)__errno();
        strerror(*piVar2);
        uVar4 = 0x9a;
        iVar5 = DAT_00100740 + 0x100714;
        puVar3 = (undefined *)(DAT_00100744 + 0x100722);
      }
      else {
        if (iVar1 == 0) goto LAB_00100724;
        uVar4 = 0x9c;
        iVar5 = DAT_00100748 + 0x100680;
        puVar3 = (undefined *)(DAT_0010074c + 0x10068a);
      }
    }
    else {
      if (*(int *)(*(int *)(DAT_00100750 + 0x1006e2) + 0x2c) == 0) goto LAB_00100724;
      strerror(iVar5);
      uVar4 = 0x9e;
      iVar5 = DAT_00100754 + 0x1006f2;
      puVar3 = &LAB_00100700 + DAT_00100758;
    }
  }
  mm_camera_debug_log(1,4,puVar3,uVar4,iVar5,param_1);
LAB_00100724:
  if (*piVar6 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

