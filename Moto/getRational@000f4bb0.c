
/* qcamera::QCameraParameters::getRational(rat_t*, int, int) */

undefined4 __thiscall
qcamera::QCameraParameters::getRational
          (QCameraParameters *this,rat_t *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_3 | param_2) < 0) {
    if (*(int *)(*(int *)(DAT_000f4c10 + 0xf4bd0) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x2f4f;
    iVar1 = DAT_000f4c14 + 0xf4be0;
    iVar2 = DAT_000f4c18 + 0xf4be8;
  }
  else {
    if (param_1 != (rat_t *)0x0) {
      *(int *)param_1 = param_2;
      *(int *)(param_1 + 4) = param_3;
      return 0;
    }
    if (*(int *)(*(int *)(DAT_000f4c1c + 0xf4bee) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar3 = 0x2f53;
    iVar1 = DAT_000f4c20 + 0xf4bfe;
    iVar2 = DAT_000f4c24 + 0xf4c06;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
  return 0xffffffea;
}

