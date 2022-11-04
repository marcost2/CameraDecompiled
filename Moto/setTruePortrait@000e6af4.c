
/* qcamera::QCameraParameters::setTruePortrait(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setTruePortrait(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_000e6b94 + 0xe6b02);
  if (*(int *)(iVar5 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6b9c + 0xe6b1c,0x2893,DAT_000e6b98 + 0xe6b12,param_1);
  }
  if (param_1 == (char *)0x0) {
LAB_000e6b3c:
    if (*(int *)(iVar5 + 0x28) != 0) {
      pcVar3 = (char *)(DAT_000e6bac + 0xe6b4c);
      if (param_1 != (char *)0x0) {
        pcVar3 = param_1;
      }
      mm_camera_debug_log(1,3,DAT_000e6bb4 + 0xe6b60,0x28a0,DAT_000e6bb0 + 0xe6b54,pcVar3);
    }
    uVar4 = 0xffffffea;
  }
  else {
    iVar2 = strcmp(*(char **)(DAT_000e6ba0 + 0xe6b28),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e6ba4 + 0xe6b36),param_1);
      if (iVar2 != 0) goto LAB_000e6b3c;
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x302] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e6ba8 + 0xe6b7a),param_1);
    uVar4 = 0;
    setFaceDetection(this,(bool)this[0x21c],false);
  }
  return uVar4;
}

