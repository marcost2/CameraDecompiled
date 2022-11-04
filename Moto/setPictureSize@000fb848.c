
/* android::CameraParameters::setPictureSize(int, int) */

void __thiscall
android::CameraParameters::setPictureSize(CameraParameters *this,int param_1,int param_2)

{
  int *piVar1;
  char acStack52 [32];
  int local_14;
  
  piVar1 = *(int **)(DAT_000fb888 + 0xfb858);
  local_14 = *piVar1;
  FUN_000be9c0(acStack52,0x20,DAT_000fb88c + 0xfb868,param_1);
  set(this,*(char **)(DAT_000fb890 + 0xfb872),acStack52);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

