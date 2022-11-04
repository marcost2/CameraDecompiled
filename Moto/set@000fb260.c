
/* android::CameraParameters::set(char const*, int) */

void __thiscall android::CameraParameters::set(CameraParameters *this,char *param_1,int param_2)

{
  int *piVar1;
  char acStack40 [16];
  int local_18;
  
  piVar1 = *(int **)(DAT_000fb29c + 0xfb274);
  local_18 = *piVar1;
  FUN_000be9c0(acStack40,0x10,DAT_000fb2a0 + 0xfb280,param_2);
  set(this,param_1,acStack40);
  if (*piVar1 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

