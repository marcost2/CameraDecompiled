
/* qcamera::QCamera3RawDumpChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3RawDumpChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = *(int *)(DAT_000a11a4 + 0xa10ec);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a11ac + 0xa1104,0xa99,DAT_000a11a8 + 0xa10fc);
  }
  if ((param_2 == (QCamera3Stream *)0x0) || (*(int *)(param_2 + 8) != 1)) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return;
    }
    mm_camera_debug_log(1,1,DAT_000a11b4 + 0xa1148,0xa9b,DAT_000a11b0 + 0xa1140);
    return;
  }
  if (param_1[0x9c] == (mm_camera_super_buf_t)0x0) {
    uVar6 = 1;
  }
  else {
    dumpRawSnapshot((QCamera3RawDumpChannel *)param_1,*(mm_camera_buf_def **)(param_2 + 0x10));
    uVar6 = *(uint *)(param_2 + 8);
    if (uVar6 == 0) goto LAB_000a1198;
  }
  uVar5 = 0;
  do {
    piVar2 = *(int **)(param_2 + uVar5 * 4 + 0x10);
    if ((piVar2 != (int *)0x0) && (*(uint *)(param_1 + 0x44) != 0)) {
      uVar3 = 0;
      do {
        piVar1 = *(int **)(param_1 + uVar3 * 4 + 0x24);
        if ((piVar1 != (int *)0x0) && (piVar1[3] == *piVar2)) {
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar2[3]);
          uVar6 = *(uint *)(param_2 + 8);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x44));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar6);
LAB_000a1198:
  free(param_2);
  return;
}

