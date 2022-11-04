
/* qcamera::QCameraParameters::setReFocus(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setReFocus(QCameraParameters *this,char *param_1)

{
  QCameraParameters QVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(DAT_000e674c + 0xe66f2) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6754 + 0xe670c,0x2839,DAT_000e6750 + 0xe6702,param_1);
  }
  if (param_1 != (char *)0x0) {
    iVar2 = strcmp(*(char **)(DAT_000e6758 + 0xe6718),param_1);
    if (iVar2 == 0) {
      QVar1 = (QCameraParameters)0x0;
    }
    else {
      iVar2 = strcmp(*(char **)(DAT_000e675c + 0xe6726),param_1);
      if (iVar2 != 0) {
        return 0;
      }
      QVar1 = (QCameraParameters)0x1;
    }
    this[0x2c9] = QVar1;
    updateParamEntry(this,*(char **)(DAT_000e6760 + 0xe673e),param_1);
  }
  return 0;
}

