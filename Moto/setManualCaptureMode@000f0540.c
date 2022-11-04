
/* qcamera::QCameraParameters::setManualCaptureMode(cam_manual_capture_type) */

undefined4 __thiscall
qcamera::QCameraParameters::setManualCaptureMode
          (QCameraParameters *this,cam_manual_capture_type param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  char acStack116 [92];
  int local_18;
  
  piVar3 = *(int **)(DAT_000f05fc + 0xf054e);
  local_18 = *piVar3;
  property_get(DAT_000f0604 + 0xf0562,acStack116,*(undefined4 *)(DAT_000f0600 + 0xf0558));
  uVar1 = atoi(acStack116);
  if ((uVar1 & 0xff) == 0) {
    uVar2 = 0;
LAB_000f05b0:
    *(undefined4 *)(this + 0x7c0) = uVar2;
  }
  else {
    if (param_1 == 0) {
      uVar2 = 1;
      goto LAB_000f05b0;
    }
    *(cam_manual_capture_type *)(this + 0x7c0) = param_1;
    if ((param_1 != 2) && (2 < (int)param_1)) {
      this[0x301] = (QCameraParameters)0x1;
      if (*(int *)(*(int *)(DAT_000f0608 + 0xf058c) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f0610 + 0xf05a6,0x3a65,DAT_000f060c + 0xf059a,1);
      }
      goto LAB_000f05c0;
    }
  }
  setOfflineRAW(this,false);
LAB_000f05c0:
  setReprocCount(this);
  if (*(int *)(*(int *)(DAT_000f0614 + 0xf05cc) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f061c + 0xf05e8,0x3de6,DAT_000f0618 + 0xf05dc,
                        *(undefined4 *)(this + 0x7c0));
  }
  if (*piVar3 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

