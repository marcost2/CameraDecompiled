
/* qcamera::QCameraParameters::isSupportedSensorHdrSize(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::isSupportedSensorHdrSize
          (QCameraParameters *this,QCameraParameters *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_80;
  int iStack124;
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
  int local_18;
  
  piVar4 = *(int **)(DAT_000e5be4 + 0xe5aee);
  local_18 = *piVar4;
  local_38 = 0;
  uStack48 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  local_2c = 0;
  uStack40 = 0;
  uStack36 = 0;
  property_get(DAT_000e5bec + 0xe5b2e,&local_78,*(undefined4 *)(DAT_000e5be8 + 0xe5b28));
  uVar1 = atoi((char *)&local_78);
  if ((uVar1 & 0xff) == 0) {
LAB_000e5bce:
    uVar3 = 1;
  }
  else {
    android::CameraParameters::getPictureSize((CameraParameters *)param_1,&iStack124,&local_80);
    iVar2 = *(int *)(this + 0x1d4);
    if (*(uint *)(iVar2 + 0x2468) != 0) {
      uVar1 = 0;
      do {
        if ((iStack124 == *(int *)(iVar2 + 0x246c + uVar1 * 8)) &&
           (local_80 == *(int *)(iVar2 + 0x2470 + uVar1 * 8))) {
          if (*(int *)(*(int *)(DAT_000e5bf0 + 0xe5bac) + 0x2c) == 0) goto LAB_000e5bce;
          uVar3 = 1;
          mm_camera_debug_log(1,4,DAT_000e5bf4 + 0xe5bbc,0x26a2,DAT_000e5bf8 + 0xe5bba,
                              DAT_000e5bf4 + 0xe5bbc,iStack124,local_80);
          goto LAB_000e5bd0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(iVar2 + 0x2468));
    }
    if (*(int *)(*(int *)(DAT_000e5bfc + 0xe5b7e) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e5c00 + 0xe5b8e,0x26a6,DAT_000e5c04 + 0xe5b90,
                          DAT_000e5c00 + 0xe5b8e,iStack124,local_80);
    }
    uVar3 = 0;
  }
LAB_000e5bd0:
  if (*piVar4 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

