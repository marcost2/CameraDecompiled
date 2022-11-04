
/* android::CameraParameters::flatten() const */

void android::CameraParameters::flatten(void)

{
  String8 *in_r0;
  int *piVar1;
  int in_r1;
  int iVar2;
  String8 aSStack48 [4];
  String8 aSStack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_000fb0c4 + 0xfb028);
  local_28 = *piVar1;
  android::String8::String8(in_r0,(char *)(DAT_000fb0c8 + 0xfb036));
  iVar2 = *(int *)(in_r1 + 8);
  if (iVar2 != 0) {
    do {
      android::String8::String8(aSStack44);
      android::String8::String8(aSStack48);
      android::String8::setTo(aSStack44);
      android::String8::setTo(aSStack48);
      android::String8::append(in_r0);
      android::String8::append((char *)in_r0);
      android::String8::append(in_r0);
      if (iVar2 != 1) {
        android::String8::append((char *)in_r0);
      }
      android::String8::_String8(aSStack48);
      android::String8::_String8(aSStack44);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

