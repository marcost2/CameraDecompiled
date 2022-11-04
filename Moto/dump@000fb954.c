
/* android::CameraParameters::dump() const */

void __thiscall android::CameraParameters::dump(CameraParameters *this)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uStack48;
  undefined4 uStack44;
  int local_28;
  
  piVar4 = *(int **)(DAT_000fb9f0 + 0xfb962);
  local_28 = *piVar4;
  __android_log_print(3,DAT_000fb9f4 + 0xfb976,DAT_000fb9f8 + 0xfb978,*(undefined4 *)(this + 8));
  if (*(int *)(this + 8) != 0) {
    uVar3 = 0;
    iVar1 = DAT_000fb9fc + 0xfb98e;
    puVar2 = &LAB_000fb994 + DAT_000fba00;
    do {
      android::String8::String8((String8 *)&uStack44);
      android::String8::String8((String8 *)&uStack48);
      android::String8::setTo((String8 *)&uStack44);
      android::String8::setTo((String8 *)&uStack48);
      __android_log_print(3,iVar1,puVar2,uStack44,uStack48);
      android::String8::_String8((String8 *)&uStack48);
      android::String8::_String8((String8 *)&uStack44);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(this + 8));
  }
  if (*piVar4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

