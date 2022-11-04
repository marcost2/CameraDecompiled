
/* qcamera::QCamera3HardwareInterface::switchStreamConfigInternal(unsigned int) */

int qcamera::QCamera3HardwareInterface::switchStreamConfigInternal(uint param_1)

{
  int *piVar1;
  QCamera3MetadataChannel *this;
  int *piVar2;
  int iVar3;
  QCamera3QCfaRawChannel *this_00;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_stack_fffffcec;
  undefined4 uVar10;
  undefined4 local_2f8;
  cam_padding_info_t *pcStack756;
  undefined auStack752 [56];
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_290;
  undefined4 uStack652;
  undefined auStack400 [360];
  int local_28;
  
  piVar1 = *(int **)(DAT_0008daec + 0x8d744);
  local_28 = *piVar1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3f0));
  flush((QCamera3HardwareInterface *)param_1,false);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3f0));
  cleanAndSortStreamInfo((QCamera3HardwareInterface *)param_1);
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 4))();
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  ppiVar7 = (int **)(QCameraParameters::FOCUS_MODES_MAP + param_1 + 0x1c);
  if (*(int **)(QCameraParameters::FOCUS_MODES_MAP + param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(QCameraParameters::FOCUS_MODES_MAP + param_1 + 0x1c) + 4))();
    *ppiVar7 = (int *)0x0;
  }
  __aeabi_memclr8(auStack400,0x168);
  pvVar4 = *(void **)(param_1 + 0x1b4);
  if (pvVar4 == (void *)0x0) {
LAB_0008d842:
    __android_log_print(6,DAT_0008dbd8 + 0x8d852,DAT_0008dbdc + 0x8d854,0,1);
  }
  else {
    __aeabi_memclr8(pvVar4,0x10f);
    *(undefined *)((int)pvVar4 + 0x117aec) = 0;
    *(undefined *)((int)pvVar4 + 0x106974) = 0;
    *(undefined *)((int)pvVar4 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar4 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar4 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar4 + 0xb7340) = 0;
    *(undefined *)((int)pvVar4 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar4 + 0x772c8) = 0;
    if (*(int *)(param_1 + 0x1b4) == 0) goto LAB_0008d842;
    *(undefined4 *)("No Advanced Capture feature enabled!" + *(int *)(param_1 + 0x1b4) + 2) = 3;
    *(undefined *)(*(int *)(param_1 + 0x1b4) + 1) = 1;
  }
  if (*(int *)(param_1 + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008dbe0 + 0x8d888,DAT_0008dbe4 + 0x8d88a,0,0x72);
  }
  else {
    __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(param_1 + 0x1b4) + 0x10,auStack400,
                    0x168);
    *(undefined *)(*(int *)(param_1 + 0x1b4) + 0x72) = 1;
  }
  (**(code **)((*(undefined4 **)(param_1 + 100))[1] + 0x18))
            (**(undefined4 **)(param_1 + 100),*(undefined4 *)(param_1 + 0x1b4));
  iVar6 = *(int *)(DAT_0008dbe8 + 0x8d8a0);
  iVar8 = *(int *)(DAT_0008dbec + 0x8d8a6);
  if (*(int *)(iVar8 + 0x2c) != 0) {
    iVar5 = *(int *)(*(int *)(iVar6 + *(int *)(param_1 + 0x60) * 4) + 0x33e0);
    uVar9 = 0;
    in_stack_fffffcec = 0;
    uVar10 = 7;
    iVar3 = iVar5;
    mm_camera_debug_log(1,4,DAT_0008dbf4 + 0x8d8da,0x35bf,DAT_0008dbf0 + 0x8d8d2);
    if ((iVar5 != 7) && (*(int *)(iVar8 + 0x2c) != 0)) {
      mm_camera_debug_log(1,4,DAT_0008dbfc + 0x8d8fc,0x35ca,DAT_0008dbf8 + 0x8d8f2,iVar5,uVar9,
                          in_stack_fffffcec,uVar10,iVar3);
    }
  }
  this = (QCamera3MetadataChannel *)operator_new(0x98);
  piVar2 = (int *)QCamera3MetadataChannel::QCamera3MetadataChannel
                            (this,**(uint **)(param_1 + 100),*(uint *)(param_1 + 0xf4),
                             (mm_camera_ops_t *)(*(uint **)(param_1 + 100))[1],
                             *(FuncDef69 **)(DAT_0008dc04 + 0x8d928),
                             *(FuncDef70 **)(DAT_0008dc00 + 0x8d91e),
                             (cam_padding_info_t *)
                             (*(int *)(iVar6 + *(int *)(param_1 + 0x60) * 4) + 0x3008),
                             (ulonglong)in_stack_fffffcec,(void *)0x0,param_1);
  *(int **)(param_1 + 0x8c) = piVar2;
  (**(code **)(*piVar2 + 0x24))(piVar2,0);
  iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x60) * 4);
  if (*(int *)(iVar3 + 0x25b0) == 0) {
    if (*(int *)(iVar8 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008dc14 + 580000,0x117e,DAT_0008dc10 + 0x8d998);
    }
    pcStack756 = (cam_padding_info_t *)0x0;
    local_2f8 = 0;
  }
  else {
    pcStack756 = *(cam_padding_info_t **)(iVar3 + 0x25b8);
    local_2f8 = *(undefined4 *)(iVar3 + 0x25b4);
    if (*(int *)(iVar8 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0008dc0c + 0x8d982,0x117c,DAT_0008dc08 + 0x8d978,local_2f8,
                          pcStack756);
    }
  }
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_0008dc1c + 0x8d9c6,0x1143,DAT_0008dc18 + 0x8d9bc,local_2f8,
                        pcStack756);
  }
  this_00 = (QCamera3QCfaRawChannel *)operator_new(0x118050);
  piVar2 = (int *)QCamera3QCfaRawChannel::QCamera3QCfaRawChannel
                            (this_00,**(uint **)(param_1 + 100),*(uint *)(param_1 + 0xf4),
                             (mm_camera_ops_t *)(*(uint **)(param_1 + 100))[1],SUB41(local_2f8,0),
                             pcStack756,
                             (void *)(*(int *)(iVar6 + *(int *)(param_1 + 0x60) * 4) + 0x3008),
                             (ulonglong)param_1,0);
  *ppiVar7 = piVar2;
  __aeabi_memclr8(auStack752,0x160);
  local_290 = 0;
  uStack652 = 0;
  local_2b4 = 8;
  local_2b8 = 1;
  pvVar4 = *(void **)(param_1 + 0x1b4);
  if (pvVar4 != (void *)0x0) {
    __aeabi_memclr8(pvVar4,0x10f);
    *(undefined *)((int)pvVar4 + 0x117aec) = 0;
    *(undefined *)((int)pvVar4 + 0x106974) = 0;
    *(undefined *)((int)pvVar4 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar4 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar4 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar4 + 0xb7340) = 0;
    *(undefined *)((int)pvVar4 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar4 + 0x772c8) = 0;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)("No Advanced Capture feature enabled!" + *(int *)(param_1 + 0x1b4) + 2) = 3;
      *(undefined *)(*(int *)(param_1 + 0x1b4) + 1) = 1;
      goto LAB_0008dac8;
    }
  }
  __android_log_print(6,DAT_0008dc20 + 0x8dac4,DAT_0008dc24 + 0x8dac6,0,1);
LAB_0008dac8:
  if (*(int *)(param_1 + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008dc28 + 0x8db00,DAT_0008dc2c + 0x8db02,0,0x72);
  }
  else {
    __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(param_1 + 0x1b4) + 0x10,&local_2f8,
                    0x168);
    *(undefined *)(*(int *)(param_1 + 0x1b4) + 0x72) = 1;
  }
  if (*(int *)(param_1 + 0x1b4) == 0) {
    __android_log_print(6,DAT_0008dc30 + 0x8db32,DAT_0008dc34 + 0x8db34,0,0x103);
  }
  else {
    *(undefined4 *)
     ("Could not find input request for frame number %d" + *(int *)(param_1 + 0x1b4) + 0x17) = 1;
    *(undefined *)(*(int *)(param_1 + 0x1b4) + 0x103) = 1;
  }
  (**(code **)((*(undefined4 **)(param_1 + 100))[1] + 0x18))
            (**(undefined4 **)(param_1 + 100),*(undefined4 *)(param_1 + 0x1b4));
  (**(code **)(**ppiVar7 + 0x24))(*ppiVar7,0);
  iVar6 = setBundleInfo((QCamera3HardwareInterface *)param_1);
  if (iVar6 < 0) {
    if (*(int *)(iVar8 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008dc3c + 0x8dbbe,0x115c,DAT_0008dc38 + 0x8dbb4,iVar6);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))();
    (**(code **)(**ppiVar7 + 0xc))();
    if (*(int *)(param_1 + 0xf4) != 0) {
      (**(code **)((*(undefined4 **)(param_1 + 100))[1] + 100))(**(undefined4 **)(param_1 + 100));
    }
    if (*(int *)(iVar8 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0008dc44 + 0x8db9a,0x1167,DAT_0008dc40 + 0x8db92);
    }
    iVar6 = 0;
  }
  if (*piVar1 == local_28) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

