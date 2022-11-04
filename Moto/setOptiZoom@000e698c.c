
/* qcamera::QCameraParameters::setOptiZoom(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setOptiZoom(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e6a20 + 0xe699a);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6a28 + 0xe69b4,0x2875,DAT_000e6a24 + 0xe69aa,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(*(char **)(DAT_000e6a2c + 0xe69c0),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e6a30 + 0xe69ce),param_1);
      if (iVar2 != 0) goto LAB_000e69d4;
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x2cb] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e6a34 + 0xe6a14),param_1);
    return 0;
  }
LAB_000e69d4:
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar3 = (char *)(DAT_000e6a38 + 0xe69e4);
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e6a40 + 0xe69f8,0x2881,DAT_000e6a3c + 0xe69ec,pcVar3);
  }
  return 0xffffffea;
}

