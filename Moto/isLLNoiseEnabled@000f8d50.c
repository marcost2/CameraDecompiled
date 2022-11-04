
/* qcamera::QCameraParameters::isLLNoiseEnabled() */

bool __thiscall qcamera::QCameraParameters::isLLNoiseEnabled(QCameraParameters *this)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char acStack112 [92];
  int local_14;
  
  bVar2 = false;
  piVar3 = *(int **)(DAT_000f8dc0 + 0xf8d5c);
  local_14 = *piVar3;
  if (this[0x232] != (QCameraParameters)0x0) {
    property_get(DAT_000f8dc8 + 0xf8d76,acStack112,*(undefined4 *)(DAT_000f8dc4 + 0xf8d6c));
    iVar1 = atoi(acStack112);
    bVar2 = 0 < iVar1;
    if (*(int *)(*(int *)(DAT_000f8dcc + 0xf8d8a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f8dd4 + 0xf8dac,0x3bf5,DAT_000f8dd0 + 0xf8da0,0 < iVar1);
    }
  }
  if (*piVar3 == local_14) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

