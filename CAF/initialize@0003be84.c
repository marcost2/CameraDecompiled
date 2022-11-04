
/* qcamera::QCamera3HardwareInterface::initialize(camera3_callback_ops const*) */

int qcamera::QCamera3HardwareInterface::initialize
              (camera3_device *param_1,camera3_callback_ops *param_2)

{
  int iVar1;
  int iVar2;
  char *extraout_r1;
  char *extraout_r1_00;
  char *extraout_r1_01;
  char *pcVar3;
  char *extraout_r1_02;
  pthread_mutex_t *__mutex;
  int iVar4;
  int *piVar5;
  int in_stack_ffffffc4;
  ScopedTraceDbg aSStack48 [12];
  int local_24;
  
  piVar5 = *(int **)(DAT_0003bfdc + 0x3be94);
  local_24 = *piVar5;
  iVar1 = DAT_0003bfe0 + 0x3bea2;
  ScopedTraceDbg::ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffc4,iVar1),(char *)param_2);
  iVar4 = *(int *)(DAT_0003bfe4 + 0x3beb4);
  if (*(int *)(iVar4 + 0x34) != 0) {
    in_stack_ffffffc4 = *(int *)(param_1 + 0x4c);
    iVar1 = DAT_0003bfe8 + 0x3beca;
    mm_camera_debug_log();
  }
  __mutex = (pthread_mutex_t *)(param_1 + 0x388);
  pthread_mutex_lock(__mutex);
  iVar2 = *(int *)(param_1 + 0x117910);
  if (iVar2 == 1) {
    iVar2 = initParameters((QCamera3HardwareInterface *)param_1);
    if (-1 < iVar2) {
      *(camera3_callback_ops **)(param_1 + 0x74) = param_2;
      iVar2 = (**(code **)((*(undefined4 **)(param_1 + 0x50))[1] + 0x34))
                        (**(undefined4 **)(param_1 + 0x50),0,0,param_1);
      *(int *)(param_1 + 0xdc) = iVar2;
      if (iVar2 == 0) {
        if (*(int *)(iVar4 + 0x20) != 0) {
          iVar1 = DAT_0003c000 + 0x3bfbc;
          mm_camera_debug_log();
        }
        pthread_mutex_unlock(__mutex);
        iVar2 = -0xc;
        pcVar3 = extraout_r1_02;
      }
      else {
        pthread_mutex_unlock(__mutex);
        param_1[0x54] = (camera3_device)0x1;
        *(undefined4 *)(param_1 + 0x117910) = 2;
        pcVar3 = extraout_r1;
        if (*(int *)(iVar4 + 0x34) != 0) {
          iVar1 = DAT_0003c008 + 0x3bf3e;
          mm_camera_debug_log();
          pcVar3 = extraout_r1_00;
        }
        iVar2 = 0;
      }
      goto LAB_0003bf78;
    }
    if (*(int *)(iVar4 + 0x20) != 0) {
      iVar1 = DAT_0003bff8 + 0x3bf9e;
      in_stack_ffffffc4 = iVar2;
      mm_camera_debug_log();
    }
  }
  else {
    if (*(int *)(iVar4 + 0x20) != 0) {
      iVar1 = DAT_0003bff0 + 0x3bf5c;
      mm_camera_debug_log();
      in_stack_ffffffc4 = iVar2;
    }
    iVar2 = -0x13;
  }
  pthread_mutex_unlock(__mutex);
  pcVar3 = extraout_r1_01;
LAB_0003bf78:
  ScopedTraceDbg::_ScopedTraceDbg(aSStack48,CONCAT44(in_stack_ffffffc4,iVar1),pcVar3);
  if (*piVar5 == local_24) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

