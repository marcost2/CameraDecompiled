
/* qcamera::QCameraParameters::setZslAttributes(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setZslAttributes(QCameraParameters *this,QCameraParameters *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined4 uStack48;
  undefined4 local_2c;
  undefined4 uStack40;
  undefined8 uStack36;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000ea05c + 0xe9e80);
  local_1c = *piVar4;
  pcVar3 = *(char **)(DAT_000ea060 + 0xe9e8e);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    local_78 = 0;
    uStack112 = 0;
    uStack40 = 0;
    uStack36 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_2c = 0;
    local_48 = 0;
    uStack64 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    property_get(DAT_000ea068 + 0xe9ee4,&local_78,*(undefined4 *)(DAT_000ea064 + 0xe9ede));
    android::CameraParameters::set((CameraParameters *)this,pcVar3,(char *)&local_78);
    if (*(int *)(*(int *)(DAT_000ea06c + 0xe9ef6) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ea074 + 0xe9f10,0x1497,DAT_000ea070 + 0xe9f06,&local_78);
    }
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar3,pcVar1);
  }
  pcVar3 = *(char **)(DAT_000ea078 + 0xe9f18);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    local_78 = 0;
    uStack112 = 0;
    uStack40 = 0;
    uStack36 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_2c = 0;
    local_48 = 0;
    uStack64 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    property_get(DAT_000ea080 + 0xe9f6e,&local_78,*(undefined4 *)(DAT_000ea07c + 0xe9f68));
    iVar2 = atoi((char *)&local_78);
    if (this[0x204] != (QCameraParameters)0x0) {
      iVar2 = iVar2 + 4;
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar3,iVar2);
    if (*(int *)(*(int *)(DAT_000ea084 + 0xe9f90) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ea08c + 0xe9faa,0x14a5,DAT_000ea088 + 0xe9fa0,&local_78);
    }
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar3,pcVar1);
  }
  pcVar3 = *(char **)(DAT_000ea090 + 0xe9fb2);
  pcVar1 = (char *)android::CameraParameters::get((char *)param_1);
  if (pcVar1 == (char *)0x0) {
    local_78 = 0;
    uStack112 = 0;
    uStack40 = 0;
    uStack36 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_2c = 0;
    local_48 = 0;
    uStack64 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_68 = 0;
    uStack96 = 0;
    property_get(DAT_000ea098 + 0xea008,&local_78,*(undefined4 *)(DAT_000ea094 + 0xea002));
    iVar2 = atoi((char *)&local_78);
    if (this[0x204] != (QCameraParameters)0x0) {
      iVar2 = iVar2 + 4;
    }
    android::CameraParameters::set((CameraParameters *)this,pcVar3,iVar2);
    if (*(int *)(*(int *)(DAT_000ea09c + 0xea02a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000ea0a4 + 0xea044,0x14b3,DAT_000ea0a0 + 0xea03a,&local_78);
    }
  }
  else {
    android::CameraParameters::set((CameraParameters *)this,pcVar3,pcVar1);
  }
  if (*piVar4 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

