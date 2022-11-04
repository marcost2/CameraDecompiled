
/* qcamera::QCameraParameters::updateAEInfo(cam_3a_params_t&) */

void __thiscall
qcamera::QCameraParameters::updateAEInfo(QCameraParameters *this,cam_3a_params_t *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  char acStack47 [15];
  int local_20;
  
  piVar5 = *(int **)(DAT_000f0d78 + 0xf0ca0);
  local_20 = *piVar5;
  pcVar4 = *(char **)(DAT_000f0d7c + 0xf0cae);
  pcVar1 = (char *)android::CameraParameters::get((char *)this);
  FUN_000d6e38(acStack47,0xf,0xf,DAT_000f0d80 + 0xf0cdc);
  if ((pcVar1 == (char *)0x0) || (iVar2 = strcmp(pcVar1,acStack47), iVar2 != 0)) {
    if (*(int *)(*(int *)(DAT_000f0d84 + 0xf0cf2) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f0d8c + 0xf0d0c,0x1dd1,DAT_000f0d88 + 0xf0d02,pcVar1,acStack47)
      ;
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar4,acStack47);
  }
  pcVar1 = *(char **)(DAT_000f0d90 + 0xf0d20);
  iVar2 = android::CameraParameters::getInt((char *)this);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar2 != iVar3) {
    if (*(int *)(*(int *)(DAT_000f0d94 + 0xf0d34) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f0d9c + 0xf0d50,0x1dd8,DAT_000f0d98 + 0xf0d42,iVar2,iVar3);
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar1,iVar3);
  }
  if (*piVar5 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

