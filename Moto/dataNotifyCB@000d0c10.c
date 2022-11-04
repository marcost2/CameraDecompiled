
/* qcamera::QCameraStream::dataNotifyCB(mm_camera_super_buf_t*, void*) */

void qcamera::QCameraStream::dataNotifyCB(mm_camera_super_buf_t *param_1,void *param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int *unaff_r7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(DAT_000d0cd0 + 0xd0c1e);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000d0cd8 + 0xd0c36,0x42f,DAT_000d0cd4 + 0xd0c2e);
  }
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    if (param_2 != (void *)0x0) {
      unaff_r7 = *(int **)(param_1 + 0x10);
    }
    if ((param_2 != (void *)0x0 && unaff_r7 != (int *)0x0) &&
       (*unaff_r7 == *(int *)((int)param_2 + 0x68))) {
      puVar1 = (undefined8 *)malloc(0x30);
      if (puVar1 == (undefined8 *)0x0) {
        if (*(int *)(iVar2 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d0ce8 + 0xd0cbc,0x43c,DAT_000d0ce4 + 0xd0cb4);
          unaff_r7 = *(int **)(param_1 + 0x10);
        }
                    /* WARNING: Load size is inaccurate */
        puVar1 = (undefined8 *)unaff_r7[3];
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x10);
      }
      else {
        uVar3 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)(param_1 + 8);
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        puVar1[2] = *(undefined8 *)(param_1 + 0x10);
        puVar1[3] = uVar5;
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[4] = uVar6;
        puVar1[5] = uVar7;
                    /* WARNING: Load size is inaccurate */
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x18);
      }
                    /* WARNING: Could not recover jumptable at 0x000d0cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,puVar1);
      return;
    }
  }
  if (*(int *)(iVar2 + 0x20) == 0) {
    return;
  }
  mm_camera_debug_log(1,1,DAT_000d0ce0 + 0xd0c5e,0x435,DAT_000d0cdc + 0xd0c56);
  return;
}

