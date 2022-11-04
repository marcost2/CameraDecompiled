
/* qcamera::QCamera3QCfaRawChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void qcamera::QCamera3QCfaRawChannel::streamCbRoutine
               (mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  iVar4 = *(int *)(DAT_000a16a4 + 0xa1558);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a16ac + 0xa1570,0xb3c,DAT_000a16a8 + 0xa1568);
  }
  if ((param_2 == (QCamera3Stream *)0x0) || (*(int *)(param_2 + 8) != 1)) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      return;
    }
    mm_camera_debug_log(1,1,DAT_000a16b4 + 0xa1646,0xb3e,DAT_000a16b0 + 0xa163e);
    return;
  }
  if (QCameraParameters::FOCUS_MODES_MAP[*(int *)(param_1 + 4) + 0x20] == '\0') {
    uVar5 = 0;
    uVar6 = 1;
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
  }
  else {
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a16bc + 0xa15aa,0xb44,DAT_000a16b8 + 0xa15a2);
    }
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x2b4) = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 700) = uVar7;
    *(undefined8 *)(param_1 + 0x2c4) = uVar8;
    *(undefined8 *)(param_1 + 0x2cc) = uVar9;
    *(undefined8 *)(param_1 + 0x2d4) = uVar10;
    *(undefined8 *)(param_1 + 0x2dc) = uVar11;
    __aeabi_memcpy8(param_1 + 0x9c,*(void **)(param_2 + 0x10),0x218);
    param_1[0x2e4] = (mm_camera_super_buf_t)0x1;
    *(mm_camera_super_buf_t **)(param_1 + 0x2c4) = param_1 + 0x9c;
    if (param_1[0x530] != (mm_camera_super_buf_t)0x0) {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x11803c));
      *(int *)(param_1 + 0x118038) = *(int *)(param_1 + 0x118038) + 1;
      pthread_cond_signal((pthread_cond_t *)(param_1 + 0x118040));
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x11803c));
    }
  }
  free(param_2);
  return;
}

