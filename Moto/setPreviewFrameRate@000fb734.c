
/* android::CameraParameters::setPreviewFrameRate(int) */

void __thiscall android::CameraParameters::setPreviewFrameRate(CameraParameters *this,int param_1)

{
  int *piVar1;
  char acStack36 [16];
  int local_14;
  
  piVar1 = *(int **)(DAT_000fb774 + 0xfb744);
  local_14 = *piVar1;
  FUN_000be9c0(acStack36,0x10,DAT_000fb778 + 0xfb752,param_1);
  set(this,*(char **)(DAT_000fb77c + 0xfb75c),acStack36);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

