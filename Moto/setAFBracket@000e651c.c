
/* qcamera::QCameraParameters::setAFBracket(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setAFBracket(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e65b0 + 0xe652a);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e65b8 + 0xe6544,0x2819,DAT_000e65b4 + 0xe653a,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(*(char **)(DAT_000e65bc + 0xe6550),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e65c0 + 0xe655e),param_1);
      if (iVar2 != 0) goto LAB_000e6564;
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x2c8] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e65c4 + 0xe65a4),param_1);
    return 0;
  }
LAB_000e6564:
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar3 = (char *)(DAT_000e65c8 + 0xe6574);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e65d0 + 0xe6588,0x2827,DAT_000e65cc + 0xe657c,pcVar3);
  }
  return 0xffffffea;
}

