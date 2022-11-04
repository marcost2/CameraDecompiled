
/* qcamera::QCamera3Stream::dataNotifyCB(mm_camera_super_buf_t*, void*) */

void qcamera::QCamera3Stream::dataNotifyCB(mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar4 = *(int *)(DAT_000557a0 + 0x556ea);
  piVar1 = *(int **)(iVar4 + 0x48);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log();
  }
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    if (param_2 != (void *)0x0) {
      piVar1 = *(int **)(param_1 + 0x10);
    }
    if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) &&
       (iVar5 = *piVar1,
       iVar2 = android::List<qcamera::ReprocessBuffer>::_Node::getNext((_Node *)param_2),
       iVar5 == iVar2)) {
      puVar3 = (undefined8 *)malloc(0x30);
      if (puVar3 == (undefined8 *)0x0) {
        if (*(int *)(iVar4 + 0x3c) != 0) {
          mm_camera_debug_log();
        }
                    /* WARNING: Load size is inaccurate */
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0xc);
        puVar3 = *(undefined8 **)(*(int *)(param_1 + 0x10) + 0xc);
      }
      else {
        uVar6 = *(undefined8 *)param_1;
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        puVar3[2] = *(undefined8 *)(param_1 + 0x10);
        puVar3[3] = uVar8;
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        puVar3[4] = uVar9;
        puVar3[5] = uVar10;
                    /* WARNING: Load size is inaccurate */
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x18);
      }
                    /* WARNING: Could not recover jumptable at 0x0005579e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,puVar3);
      return;
    }
  }
  if (*(int *)(iVar4 + 0x3c) == 0) {
    return;
  }
  mm_camera_debug_log();
  return;
}

