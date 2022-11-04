
/* qcamera::QCameraParameters::getRotation() */

void __thiscall qcamera::QCameraParameters::getRotation(QCameraParameters *this)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined auStack112 [92];
  int local_14;
  
  piVar3 = *(int **)(DAT_000f48c8 + 0xf487c);
  local_14 = *piVar3;
  property_get(DAT_000f48d0 + 0xf488c,auStack112,*(undefined4 *)(DAT_000f48cc + 0xf4886));
  iVar1 = memcmp(auStack112,*(void **)(DAT_000f48d4 + 0xf4896),3);
  if ((iVar1 == 0) || (-1 < *(int *)(*(int *)(this + 0x1d4) + 0x3000) << 0x1c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(this + 0x79c) & ~((int)*(uint *)(this + 0x79c) >> 0x1f);
  }
  if (*piVar3 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

