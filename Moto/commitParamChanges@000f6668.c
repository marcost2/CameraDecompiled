
/* qcamera::QCameraParameters::commitParamChanges() */

undefined4 __thiscall qcamera::QCameraParameters::commitParamChanges(QCameraParameters *this)

{
  int iVar1;
  int *piVar2;
  char *local_28;
  char *pcStack36;
  int local_20;
  
  piVar2 = *(int **)(DAT_000f670c + 0xf6676);
  local_20 = *piVar2;
  iVar1 = *(int *)(this + 0x2a8);
  if (iVar1 != 0) {
    do {
      android::String8::String8((String8 *)&pcStack36);
      android::String8::String8((String8 *)&local_28);
      android::String8::setTo((String8 *)&pcStack36);
      android::String8::setTo((String8 *)&local_28);
      android::CameraParameters::set((CameraParameters *)this,pcStack36,local_28);
      android::String8::_String8((String8 *)&local_28);
      android::String8::_String8((String8 *)&pcStack36);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  android::VectorImpl::clear();
  this[0x213] = this[0x214];
  this[0x210] = this[0x211];
  if (this[0x265] != (QCameraParameters)0x0) {
    *(undefined2 *)(this + 0x264) = 1;
  }
  if (*piVar2 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

