
/* qcamera::QCameraParameters::useJpegExifRotation() */

void __thiscall qcamera::QCameraParameters::useJpegExifRotation(QCameraParameters *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined auStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_000f4930 + 0xf48e8);
  local_14 = *piVar3;
  property_get(DAT_000f4938 + 0xf48f8,auStack112,*(undefined4 *)(DAT_000f4934 + 0xf48f2));
  iVar1 = memcmp(auStack112,*(void **)(DAT_000f493c + 0xf4902),3);
  uVar2 = 1;
  if (iVar1 != 0) {
    uVar2 = (*(byte *)(*(int *)(this + 0x1d4) + 0x3000) & 8) >> 3 ^ 1;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

