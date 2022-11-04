
/* android::CameraParameters::setPreviewSize(int, int) */

void __thiscall
android::CameraParameters::setPreviewSize(CameraParameters *this,int param_1,int param_2)

{
  int *piVar1;
  char acStack52 [32];
  int local_14;
  
  piVar1 = *(int **)(DAT_000fb45c + 0xfb42c);
  local_14 = *piVar1;
  FUN_000be9c0(acStack52,0x20,DAT_000fb460 + 0xfb43c,param_1);
  set(this,*(char **)(DAT_000fb464 + 0xfb446),acStack52);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

