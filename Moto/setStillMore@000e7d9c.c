
/* qcamera::QCameraParameters::setStillMore(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setStillMore(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e7e30 + 0xe7daa);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e7e38 + 0xe7dc4,0x290d,DAT_000e7e34 + 0xe7dba,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(*(char **)(DAT_000e7e3c + 0xe7dd0),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e7e40 + 0xe7dde),param_1);
      if (iVar2 != 0) goto LAB_000e7de4;
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x2d9] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e7e44 + 0xe7e24),param_1);
    return 0;
  }
LAB_000e7de4:
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar3 = (char *)(DAT_000e7e48 + 0xe7df4);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e7e50 + 0xe7e08,0x2919,DAT_000e7e4c + 0xe7dfc,pcVar3);
  }
  return 0xffffffea;
}

