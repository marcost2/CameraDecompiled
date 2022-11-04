
/* android::CameraParameters::CameraParameters() */

CameraParameters * __thiscall android::CameraParameters::CameraParameters(CameraParameters *this)

{
  int *piVar1;
  String8 aSStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_000fafe8 + 0xfafa6);
  local_14 = *piVar1;
  android::String8::String8(aSStack24);
  android::SortedVectorImpl::SortedVectorImpl((SortedVectorImpl *)this,8,0);
  *(int *)this = *(int *)(DAT_000fafec + 0xfafc0) + 8;
  android::String8::String8((String8 *)(this + 0x14),aSStack24);
  android::String8::_String8(aSStack24);
  if (*piVar1 == local_14) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

