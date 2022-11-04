
/* android::CameraParameters::unflatten(android::String8 const&) */

void __thiscall android::CameraParameters::unflatten(CameraParameters *this,String8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  String8 aSStack56 [4];
  String8 aSStack52 [4];
  String8 aSStack48 [4];
  String8 aSStack44 [4];
  int local_28;
  
  piVar3 = *(int **)(DAT_000fb1b4 + 0xfb0e2);
  local_28 = *piVar3;
  pcVar2 = *(char **)param_1;
  android::VectorImpl::clear();
  do {
    pcVar1 = strchr(pcVar2,0x3d);
    if (pcVar1 == (char *)0x0) {
LAB_000fb1a0:
      if (*piVar3 == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    android::String8::String8(aSStack52,pcVar2,(int)pcVar1 - (int)pcVar2);
    pcVar1 = pcVar1 + 1;
    pcVar2 = strchr(pcVar1,0x3b);
    if (pcVar2 == (char *)0x0) {
      android::String8::String8(aSStack56,pcVar1);
      android::String8::String8(aSStack48,aSStack52);
      android::String8::String8(aSStack44,aSStack56);
      android::SortedVectorImpl::add(this);
      android::String8::_String8(aSStack44);
      android::String8::_String8(aSStack48);
      android::String8::_String8(aSStack56);
      android::String8::_String8(aSStack52);
      goto LAB_000fb1a0;
    }
    android::String8::String8(aSStack56,pcVar1,(int)pcVar2 - (int)pcVar1);
    android::String8::String8(aSStack48,aSStack52);
    android::String8::String8(aSStack44,aSStack56);
    android::SortedVectorImpl::add(this);
    android::String8::_String8(aSStack44);
    android::String8::_String8(aSStack48);
    android::String8::_String8(aSStack56);
    android::String8::_String8(aSStack52);
    pcVar2 = pcVar2 + 1;
  } while( true );
}

