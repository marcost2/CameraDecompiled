
/* qcamera::QCameraParameters::createHfrSizesString(cam_hfr_info_t const*, unsigned int) */

void qcamera::QCameraParameters::createHfrSizesString(cam_hfr_info_t *param_1,uint param_2)

{
  int in_r3;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined auStack68 [32];
  int local_24;
  
  piVar3 = *(int **)(DAT_000de5dc + 0xde55e);
  local_24 = *piVar3;
  android::String8::String8((String8 *)param_1);
  if (in_r3 != 0) {
    FUN_000d6e38(auStack68,0x20,0x20,DAT_000de5e0 + 0xde586);
    android::String8::append((char *)param_1);
    if (in_r3 != 1) {
      iVar1 = in_r3 + -1;
      iVar2 = DAT_000de5e4 + 0xde5a2;
      do {
        FUN_000d6e38(auStack68,0x20,0x20,iVar2);
        android::String8::append((char *)param_1);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  if (*piVar3 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

