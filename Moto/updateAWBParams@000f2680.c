
/* qcamera::QCameraParameters::updateAWBParams(cam_awb_params_t&) */

undefined4 __thiscall
qcamera::QCameraParameters::updateAWBParams(QCameraParameters *this,cam_awb_params_t *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  double dVar6;
  undefined4 uVar7;
  char acStack58 [30];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000f2774 + 0xf2690);
  local_1c = *piVar5;
  pcVar3 = *(char **)(DAT_000f2778 + 0xf269e);
  iVar1 = android::CameraParameters::getInt((char *)this);
  iVar2 = *(int *)param_1;
  if (iVar1 != iVar2) {
    if (*(int *)(*(int *)(DAT_000f277c + 0xf26b2) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f2784 + 0xf26ce,0x2519,DAT_000f2780 + 0xf26c0,iVar1,iVar2);
      iVar2 = *(int *)param_1;
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar3,iVar2);
  }
  pcVar4 = *(char **)(DAT_000f2788 + 0xf26e0);
  pcVar3 = (char *)android::CameraParameters::get((char *)this);
  dVar6 = (double)*(float *)(param_1 + 0xc);
  uVar7 = (undefined4)((ulonglong)(double)*(float *)(param_1 + 8) >> 0x20);
  FUN_000d6e38(acStack58,0x1e,0x1e,DAT_000f278c + 0xf271c);
  if ((pcVar3 == (char *)0x0) || (iVar1 = strcmp(pcVar3,acStack58), iVar1 != 0)) {
    android::CameraParameters::set((CameraParameters *)this,pcVar4,acStack58);
    if (*(int *)(*(int *)(DAT_000f2790 + 0xf2740) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000f2798 + 0xf275c,0x252e,DAT_000f2794 + 0xf2750,pcVar3,acStack58,
                          uVar7,dVar6);
    }
  }
  if (*piVar5 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

