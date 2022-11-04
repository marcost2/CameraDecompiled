
/* qcamera::QCameraParameters::setChromaFlash(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setChromaFlash(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e68b0 + 0xe682a);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e68b8 + 0xe6844,0x2856,DAT_000e68b4 + 0xe683a,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(*(char **)(DAT_000e68bc + 0xe6850),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e68c0 + 0xe685e),param_1);
      if (iVar2 != 0) goto LAB_000e6864;
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x2ca] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e68c4 + 0xe68a4),param_1);
    return 0;
  }
LAB_000e6864:
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar3 = (char *)(DAT_000e68c8 + 0xe6874);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e68d0 + 0xe6888,0x2863,DAT_000e68cc + 0xe687c,pcVar3);
  }
  return 0xffffffea;
}

