
/* qcamera::QCameraParameters::isLinkPreviewForLiveShot() */

void qcamera::QCameraParameters::isLinkPreviewForLiveShot(void)

{
  int iVar1;
  int *piVar2;
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
  
  piVar2 = *(int **)(DAT_000f98f0 + 0xf9862);
  local_14 = *piVar2;
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
  property_get(DAT_000f98f8 + 0xf98a2,&local_70,*(undefined4 *)(DAT_000f98f4 + 0xf989c));
  iVar1 = atoi((char *)&local_70);
  if (*(int *)(*(int *)(DAT_000f98fc + 0xf98b2) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000f9904 + 0xf98d4,0x3f3c,DAT_000f9900 + 0xf98c8,0 < iVar1);
  }
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0 < iVar1);
}

