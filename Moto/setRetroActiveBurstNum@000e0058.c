
/* qcamera::QCameraParameters::setRetroActiveBurstNum(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setRetroActiveBurstNum
          (QCameraParameters *this,QCameraParameters *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
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
  
  piVar4 = *(int **)(DAT_000e0134 + 0xe0066);
  local_1c = *piVar4;
  pcVar2 = *(char **)(DAT_000e0138 + 0xe0074);
  uVar1 = android::CameraParameters::getInt((char *)param_1);
  iVar3 = *(int *)(DAT_000e013c + 0xe0084);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0144 + 0xe00a2,0x94f,DAT_000e0140 + 0xe0096,
                        *(undefined4 *)(this + 0x238));
  }
  if ((int)uVar1 < 1) {
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
    property_get(DAT_000e014c + 0xe00e8,&local_78,*(undefined4 *)(DAT_000e0148 + 0xe00e2));
    uVar1 = atoi((char *)&local_78);
    uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
  }
  android::CameraParameters::set((CameraParameters *)this,pcVar2,uVar1);
  *(uint *)(this + 0x238) = uVar1;
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e0154 + 0xe011c,0x95f,DAT_000e0150 + 0xe0112,uVar1);
  }
  if (*piVar4 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

