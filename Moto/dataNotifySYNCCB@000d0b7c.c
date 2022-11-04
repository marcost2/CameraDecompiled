
/* qcamera::QCameraStream::dataNotifySYNCCB(mm_camera_super_buf_t*, void*) */

void qcamera::QCameraStream::dataNotifySYNCCB(mm_camera_super_buf_t *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000d0bfc + 0xd0b8a);
  piVar1 = *(int **)(iVar2 + 0x2c);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)mm_camera_debug_log(1,4,DAT_000d0c04 + 0xd0ba2,0x411,DAT_000d0c00 + 0xd0b9a);
  }
  if (param_1 != (mm_camera_super_buf_t *)0x0) {
    if (param_2 != (void *)0x0) {
      piVar1 = *(int **)(param_1 + 0x10);
    }
    if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) &&
       (*piVar1 == *(int *)((int)param_2 + 0x68))) {
      if (*(char *)((int)param_2 + 0x10084) == '\0') {
        return;
      }
      if (*(code **)((int)param_2 + 0x98) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000d0bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)param_2 + 0x98))(param_1,param_2,*(undefined4 *)((int)param_2 + 0x9c));
      return;
    }
  }
  if (*(int *)(iVar2 + 0x20) == 0) {
    return;
  }
  mm_camera_debug_log(1,1,DAT_000d0c0c + 0xd0bca,0x417,DAT_000d0c08 + 0xd0bc2);
  return;
}

