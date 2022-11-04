
/* qcamera::QCameraParameters::setSeeMore(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setSeeMore(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(DAT_000e7b1c + 0xe7a2e);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e7b24 + 0xe7a48,0x28db,DAT_000e7b20 + 0xe7a3e,param_1);
  }
  if (param_1 == (char *)0x0) {
LAB_000e7a68:
    if (*(int *)(iVar4 + 0x20) != 0) {
      pcVar2 = (char *)(DAT_000e7b44 + 0xe7a78);
      if (param_1 != (char *)0x0) {
        pcVar2 = param_1;
      }
      mm_camera_debug_log(1,1,DAT_000e7b4c + 0xe7a8c,0x28fb,DAT_000e7b48 + 0xe7a80,pcVar2);
    }
    return 0xffffffea;
  }
  iVar1 = strcmp(*(char **)(DAT_000e7b28 + 0xe7a54),param_1);
  if (iVar1 == 0) {
    *(undefined2 *)(this + 0x2d8) = 0;
    if (this[0x7ac] != (QCameraParameters)0x0) goto LAB_000e7b06;
    iVar1 = setToneMapMode(this,1,false);
    bVar5 = iVar1 == 0;
    if (!bVar5) {
      iVar1 = *(int *)(iVar4 + 0x28);
    }
    if (bVar5 || iVar1 == 0) goto LAB_000e7b06;
    uVar3 = 0x28f3;
    iVar4 = DAT_000e7b38 + 0xe7ac4;
    iVar1 = DAT_000e7b3c + 0xe7acc;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000e7b2c + 0xe7a62),param_1);
    if (iVar1 != 0) goto LAB_000e7a68;
    *(undefined2 *)(this + 0x2d8) = 0x101;
    if (this[0x7ac] != (QCameraParameters)0x0) goto LAB_000e7b06;
    iVar1 = setToneMapMode(this,0,false);
    bVar5 = iVar1 == 0;
    if (!bVar5) {
      iVar1 = *(int *)(iVar4 + 0x28);
    }
    if (bVar5 || iVar1 == 0) goto LAB_000e7b06;
    uVar3 = 0x28eb;
    iVar4 = DAT_000e7b30 + 0xe7afc;
    iVar1 = DAT_000e7b34 + 0xe7b04;
  }
  mm_camera_debug_log(1,3,iVar1,uVar3,iVar4);
LAB_000e7b06:
  updateParamEntry(this,*(char **)(DAT_000e7b40 + 0xe7b0e),param_1);
  return 0;
}

