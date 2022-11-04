
/* qcamera::QCameraParameters::setNoiseReductionMode(char const*) */

undefined4 __thiscall
qcamera::QCameraParameters::setNoiseReductionMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000e7cb8 + 0xe7c16);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e7cc0 + 0xe7c30,0x27d8,DAT_000e7cbc + 0xe7c26,param_1);
  }
  if ((param_1 != (char *)0x0) &&
     (((iVar1 = strcmp(*(char **)(DAT_000e7cc4 + 0xe7c3c),param_1), iVar1 == 0 ||
       (iVar1 = strcmp(*(char **)(DAT_000e7cc8 + 0xe7c4a),param_1), iVar1 == 0)) ||
      (iVar1 = strcmp(*(char **)(DAT_000e7cd4 + 0xe7c58),param_1), iVar1 == 0)))) {
    iVar4 = strncmp(*(char **)(DAT_000e7ccc + 0xe7c96),param_1,0xc);
    uVar3 = count_leading_zeroes(iVar4);
    this[0x2da] = SUB41(uVar3 >> 5,0);
    updateParamEntry(this,*(char **)(DAT_000e7cd0 + 0xe7cac),param_1);
    return 0;
  }
  if (*(int *)(iVar4 + 0x20) != 0) {
    pcVar2 = (char *)(DAT_000e7cd8 + 0xe7c6e);
    if (param_1 != (char *)0x0) {
      pcVar2 = param_1;
    }
    mm_camera_debug_log(1,1,DAT_000e7ce0 + 0xe7c82,0x27e4,DAT_000e7cdc + 0xe7c76,pcVar2);
  }
  return 0xffffffea;
}

