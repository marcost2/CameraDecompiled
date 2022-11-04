
/* qcamera::QCameraParameters::isPreviewSeeMoreRequired() */

uint __thiscall qcamera::QCameraParameters::isPreviewSeeMoreRequired(QCameraParameters *this)

{
  uint uVar1;
  int *piVar2;
  int local_78;
  int iStack116;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined4 uStack40;
  undefined4 local_24;
  undefined4 uStack32;
  undefined8 uStack28;
  int local_14;
  
  piVar2 = *(int **)(DAT_000f8b58 + 0xf8aaa);
  local_14 = *piVar2;
  android::CameraParameters::getVideoSize((CameraParameters *)this,&local_78,&iStack116);
  local_30 = 0;
  uStack40 = 0;
  local_40 = 0;
  uStack56 = 0;
  local_50 = 0;
  uStack72 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_24 = 0;
  uStack32 = 0;
  uStack28 = 0;
  property_get(DAT_000f8b60 + 0xf8af6,&local_70,*(undefined4 *)(DAT_000f8b5c + 0xf8af0));
  uVar1 = atoi((char *)&local_70);
  if (*(int *)(*(int *)(DAT_000f8b64 + 0xf8b06) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f8b6c + 0xf8b28,0x3a28,DAT_000f8b68 + 0xf8b18,local_78,iStack116,
                        uVar1);
  }
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  if (*piVar2 == local_14) {
    return local_78 * iStack116 < 0x1fa401 | uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

