
/* qcamera::QCameraParameters::isMultiPassReprocessing() */

void __thiscall qcamera::QCameraParameters::isMultiPassReprocessing(QCameraParameters *this)

{
  int iVar1;
  int *piVar2;
  char acStack112 [92];
  int local_14;
  
  piVar2 = *(int **)(DAT_000f8d44 + 0xf8d06);
  local_14 = *piVar2;
  if (this[0x800] == (QCameraParameters)0x0) {
    property_get(DAT_000f8d4c + 0xf8d24,acStack112,*(undefined4 *)(DAT_000f8d48 + 0xf8d1e));
    iVar1 = atoi(acStack112);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 1;
  }
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

