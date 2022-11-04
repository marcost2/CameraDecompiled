
/* android::CameraParameters::setFloat(char const*, float) */

void __thiscall
android::CameraParameters::setFloat(CameraParameters *this,char *param_1,float param_2)

{
  int *piVar1;
  char acStack40 [16];
  int local_18;
  
  piVar1 = *(int **)(DAT_000fb2ec + 0xfb2be);
  local_18 = *piVar1;
  FUN_000d6e38(acStack40,0x10,0x10,DAT_000fb2f0 + 0xfb2d0);
  set(this,param_1,acStack40);
  if (*piVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

