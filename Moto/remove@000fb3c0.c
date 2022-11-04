
/* android::CameraParameters::remove(char const*) */

int __thiscall android::CameraParameters::remove(CameraParameters *this,char *__filename)

{
  int *piVar1;
  String8 aSStack40 [4];
  String8 aSStack36 [4];
  String8 aSStack32 [4];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000fb418 + 0xfb3d0);
  local_1c = *piVar1;
  android::String8::String8(aSStack40,__filename);
  android::String8::String8(aSStack36,aSStack40);
  android::String8::String8(aSStack32);
  android::SortedVectorImpl::remove((char *)this);
  android::String8::_String8(aSStack32);
  android::String8::_String8(aSStack36);
  android::String8::_String8(aSStack40);
  if (*piVar1 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

