
/* qcamera::QCameraParameters::setAutoHDR(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setAutoHDR(QCameraParameters *this,QCameraParameters *param_1)

{
  undefined8 *__s1;
  char *__s1_00;
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  piVar3 = *(int **)(DAT_000e48d4 + 0xe47ea);
  local_20 = *piVar3;
  pcVar2 = *(char **)(DAT_000e48d8 + 0xe47f8);
  __s1 = (undefined8 *)android::CameraParameters::get((char *)param_1);
  __s1_00 = (char *)android::CameraParameters::get((char *)this);
  local_40 = 0;
  uStack56 = 0;
  local_50 = 0;
  uStack72 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_80 = 0;
  uStack120 = 0;
  local_34 = 0;
  uStack48 = 0;
  uStack44 = 0;
  property_get(DAT_000e48e0 + 0xe484c,&local_80,*(undefined4 *)(DAT_000e48dc + 0xe4846));
  if (__s1 == (undefined8 *)0x0) {
    if ((__s1_00 != (char *)0x0) && (iVar1 = strcmp(__s1_00,(char *)&local_80), iVar1 == 0))
    goto LAB_000e48be;
    if (*(int *)(*(int *)(DAT_000e48f0 + 0xe4898) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e48f8 + 0xe48b2,0xe6a,DAT_000e48f4 + 0xe48a8,&local_80);
    }
    __s1 = &local_80;
  }
  else {
    if ((__s1_00 != (char *)0x0) && (iVar1 = strcmp((char *)__s1,__s1_00), iVar1 == 0))
    goto LAB_000e48be;
    if (*(int *)(*(int *)(DAT_000e48e4 + 0xe4862) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e48ec + 0xe487c,0xe64,DAT_000e48e8 + 0xe4872,__s1);
    }
  }
  updateParamEntry(this,pcVar2,(char *)__s1);
LAB_000e48be:
  if (*piVar3 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

