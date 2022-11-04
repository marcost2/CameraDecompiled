
/* qcamera::QCamera2HardwareInterface::postview_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::postview_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  mm_camera_buf_def *pmVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = *(uint **)(DAT_000dae24 + 0xdacb2);
  if (*puVar5 < 2) {
LAB_000dacd6:
    if (param_3 != (void *)0x0) goto LAB_000dacda;
LAB_000dadc4:
    if (*(int *)(*(int *)(DAT_000dae34 + 0xdadca) + 0x20) != 0) {
      uVar3 = 0x668;
      iVar6 = DAT_000dae38 + 0xdadda;
      iVar2 = DAT_000dae3c + 0xdade2;
      goto LAB_000dade0;
    }
  }
  else {
    if ((**(byte **)(DAT_000dae28 + 0xdacc2) & 1) == 0) {
      atrace_setup();
    }
    if (-1 < (int)((uint)*(byte *)(*(int *)(DAT_000dae2c + 0xdacd0) + 1) << 0x1d))
    goto LAB_000dacd6;
    atrace_begin_body(DAT_000dae30 + 0xdadbc);
    if (param_3 == (void *)0x0) goto LAB_000dadc4;
LAB_000dacda:
    pmVar4 = *(mm_camera_buf_def **)(param_1 + 0x10);
    if (*(int *)(pmVar4 + 0x210) == 0) {
      if (*(int *)(*(int *)(DAT_000dae40 + 0xdad7e) + 0x20) != 0) {
        uVar3 = 0x66d;
        iVar6 = DAT_000dae44 + 0xdad8e;
        iVar2 = DAT_000dae48 + 0xdad96;
LAB_000dade0:
        mm_camera_debug_log(1,1,iVar2,uVar3,iVar6);
      }
    }
    else {
      iVar6 = *(int *)(DAT_000dae4c + 0xdacea);
      if (*(int *)(iVar6 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000dae54 + 0xdad06,0x672,DAT_000dae50 + 0xdacfe);
        pmVar4 = *(mm_camera_buf_def **)(param_1 + 0x10);
      }
      if (pmVar4 != (mm_camera_buf_def *)0x0) {
        if (*(int *)(pmVar4 + 0x210) != 0) {
          dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar4,8,(char *)0x0);
        }
        uVar1 = (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(pmVar4 + 0xc));
        if ((0x7fffffff < uVar1) && (*(int *)(iVar6 + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_000dae64 + 0xdad50,0x683,DAT_000dae60 + 0xdad44,uVar1);
        }
        free(param_1);
        if (*(int *)(iVar6 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000dae6c + 0xdad74,0x687,DAT_000dae68 + 0xdad6c);
        }
        goto LAB_000dadea;
      }
      if (*(int *)(iVar6 + 0x20) != 0) {
        uVar3 = 0x676;
        iVar6 = DAT_000dae58 + 0xdada8;
        iVar2 = DAT_000dae5c + 0xdadb0;
        goto LAB_000dade0;
      }
    }
  }
  free(param_1);
LAB_000dadea:
  if (1 < *puVar5) {
    if ((**(byte **)(DAT_000dae70 + 0xdadf8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000dae74 + 0xdae06) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

