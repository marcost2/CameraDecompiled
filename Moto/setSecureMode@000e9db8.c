
/* qcamera::QCameraParameters::setSecureMode(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setSecureMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  QCameraParameters QVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e9e4c + 0xe9dc6);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e9e54 + 0xe9de0,0x2ac2,DAT_000e9e50 + 0xe9dd6,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000e9e58 + 0xe9dec),param_1);
    if (iVar1 == 0) {
      QVar3 = (QCameraParameters)0x1;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000e9e5c + 0xe9dfa),param_1);
      if (iVar1 != 0) goto LAB_000e9e00;
      QVar3 = (QCameraParameters)0x0;
    }
    updateParamEntry(this,*(char **)(DAT_000e9e60 + 0xe9e3c),param_1);
    this[0x2ef] = QVar3;
    return 0;
  }
LAB_000e9e00:
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000e9e64 + 0xe9e10);
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e9e6c + 0xe9e24,0x2ace,DAT_000e9e68 + 0xe9e18,pcVar2);
  }
  return 0xffffffea;
}

