
/* qcamera::QCameraParameters::getJpegExifRotation() */

void __thiscall qcamera::QCameraParameters::getJpegExifRotation(QCameraParameters *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined auStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_000f49c4 + 0xf4978);
  local_14 = *piVar3;
  property_get(DAT_000f49cc + 0xf4988,auStack112,*(undefined4 *)(DAT_000f49c8 + 0xf4982));
  iVar1 = memcmp(auStack112,*(void **)(DAT_000f49d0 + 0xf4992),3);
  if ((iVar1 == 0) || (-1 < *(int *)(*(int *)(this + 0x1d4) + 0x3000) << 0x1c)) {
    uVar2 = *(uint *)(this + 0x79c) & ~((int)*(uint *)(this + 0x79c) >> 0x1f);
  }
  else {
    uVar2 = 0;
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

