
/* android::CameraParameters::set(char const*, char const*) */

void __thiscall android::CameraParameters::set(CameraParameters *this,char *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  String8 aSStack48 [4];
  String8 aSStack44 [4];
  String8 aSStack40 [4];
  String8 aSStack36 [4];
  int iStack32;
  
  piVar2 = *(int **)(DAT_000fb25c + 0xfb1ca);
  iStack32 = *piVar2;
  pcVar1 = strchr(param_1,0x3d);
  if ((((pcVar1 == (char *)0x0) && (pcVar1 = strchr(param_1,0x3b), pcVar1 == (char *)0x0)) &&
      (pcVar1 = strchr(param_2,0x3d), pcVar1 == (char *)0x0)) &&
     (pcVar1 = strchr(param_2,0x3b), pcVar1 == (char *)0x0)) {
    android::String8::String8(aSStack44,param_1);
    android::String8::String8(aSStack48,param_2);
    android::String8::String8(aSStack40,aSStack44);
    android::String8::String8(aSStack36,aSStack48);
    android::SortedVectorImpl::remove((char *)this);
    android::SortedVectorImpl::add(this);
    android::String8::_String8(aSStack36);
    android::String8::_String8(aSStack40);
    android::String8::_String8(aSStack48);
    android::String8::_String8(aSStack44);
  }
  if (*piVar2 == iStack32) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

