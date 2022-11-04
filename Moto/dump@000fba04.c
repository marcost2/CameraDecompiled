
/* android::CameraParameters::dump(int, android::Vector<android::String16> const&) const */

undefined4 android::CameraParameters::dump(int param_1,Vector *param_2)

{
  int *piVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  String8 local_134 [4];
  String8 aSStack304 [4];
  void *local_12c;
  undefined auStack296 [256];
  int local_28;
  
  piVar1 = *(int **)(DAT_000fbae8 + 0xfba14);
  local_28 = *piVar1;
  android::String8::String8((String8 *)&local_12c);
  FUN_000d6e38(auStack296,0x100,0xff,DAT_000fbaec + 0xfba36);
  android::String8::append((char *)&local_12c);
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = 0;
    iVar2 = DAT_000fbaf0 + 0xfba5e;
    do {
      android::String8::String8(aSStack304);
      android::String8::String8(local_134);
      android::String8::setTo(aSStack304);
      android::String8::setTo(local_134);
      FUN_000d6e38(auStack296,0x100,0xff,iVar2);
      android::String8::append((char *)&local_12c);
      android::String8::_String8(local_134);
      android::String8::_String8(aSStack304);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  __n = android::String8::length();
  write((int)param_2,local_12c,__n);
  android::String8::_String8((String8 *)&local_12c);
  if (*piVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

