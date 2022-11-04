
/* qcamera::QCamera3SupportChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3SupportChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 == (QCamera3Stream *)0x0) || (*(int *)(param_2 + 8) != 1)) {
    if (*(int *)(*(int *)(DAT_000a6f3c + 0xa6f16) + 0x20) == 0) {
      return;
    }
    mm_camera_debug_log(1,1,DAT_000a6f44 + 0xa6f2e,0x1720,DAT_000a6f40 + 0xa6f26);
    return;
  }
  uVar4 = 0;
  uVar5 = 1;
  do {
    piVar2 = *(int **)(param_2 + uVar4 * 4 + 0x10);
    if ((piVar2 != (int *)0x0) && (*(uint *)(param_1 + 0x44) != 0)) {
      uVar3 = 0;
      do {
        piVar1 = *(int **)(param_1 + uVar3 * 4 + 0x24);
        if ((piVar1 != (int *)0x0) && (piVar1[3] == *piVar2)) {
          (**(code **)(*piVar1 + 0xc))(piVar1,piVar2[3]);
          uVar5 = *(uint *)(param_2 + 8);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x44));
    }
    uVar4 = uVar4 + 1;
    if (uVar5 <= uVar4) {
      free(param_2);
      return;
    }
  } while( true );
}

