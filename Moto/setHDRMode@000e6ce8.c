
/* qcamera::QCameraParameters::setHDRMode(char const*) */

undefined4 __thiscall qcamera::QCameraParameters::setHDRMode(QCameraParameters *this,char *param_1)

{
  int iVar1;
  char *__s1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar3 = *(int *)(DAT_000e6dc8 + 0xe6cf8);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6dd0 + 0xe6d12,0x28b2,DAT_000e6dcc + 0xe6d08,param_1);
  }
  if (param_1 != (char *)0x0) {
    pcVar4 = *(char **)(DAT_000e6dd4 + 0xe6d1e);
    iVar1 = strcmp(pcVar4,param_1);
    if ((iVar1 == 0) || (iVar1 = strcmp(*(char **)(DAT_000e6dd8 + 0xe6d2e),param_1), iVar1 == 0)) {
      pcVar5 = *(char **)(DAT_000e6ddc + 0xe6d6a);
      __s1 = (char *)android::CameraParameters::get((char *)this);
      iVar3 = strncmp(param_1,pcVar4,0xf);
      uVar2 = count_leading_zeroes(iVar3);
      this[0x300] = SUB41(uVar2 >> 5,0);
      updateParamEntry(this,*(char **)(DAT_000e6de0 + 0xe6d92),param_1);
      if ((__s1 != (char *)0x0) &&
         (iVar3 = strncmp(__s1,*(char **)(DAT_000e6de4 + 0xe6da2),3), iVar3 == 0)) {
        updateParamEntry(this,pcVar5,*(char **)(DAT_000e6de8 + 0xe6db2));
        this[0x230] = (QCameraParameters)0x1;
      }
      return 0;
    }
  }
  if (*(int *)(iVar3 + 0x28) != 0) {
    pcVar4 = (char *)(DAT_000e6dec + 0xe6d44);
    if (param_1 != (char *)0x0) {
      pcVar4 = param_1;
    }
    mm_camera_debug_log(1,3,DAT_000e6df4 + 0xe6d58,0x28c7,DAT_000e6df0 + 0xe6d4c,pcVar4);
  }
  return 0xffffffea;
}

