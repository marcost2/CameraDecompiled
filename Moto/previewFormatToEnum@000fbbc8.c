
/* android::CameraParameters::previewFormatToEnum(char const*) */

undefined4 android::CameraParameters::previewFormatToEnum(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0x11;
  }
  iVar1 = strcmp(param_1,*(char **)(DAT_000fbc60 + 0xfbbd4));
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = strcmp(param_1,*(char **)(DAT_000fbc64 + 0xfbbe2));
  if (iVar1 == 0) {
    return 0x11;
  }
  iVar1 = strcmp(param_1,*(char **)(DAT_000fbc68 + 0xfbbf0));
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,*(char **)(DAT_000fbc6c + 0xfbbfe));
    if (iVar1 == 0) {
      return 0x32315659;
    }
    iVar1 = strcmp(param_1,*(char **)(DAT_000fbc70 + 0xfbc0c));
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,*(char **)(DAT_000fbc74 + 0xfbc1a));
      if (iVar1 != 0) {
        iVar1 = strcmp(param_1,*(char **)(DAT_000fbc78 + 0xfbc28));
        uVar2 = 0xffffffff;
        if (iVar1 == 0) {
          uVar2 = 0x20;
        }
        return uVar2;
      }
      return 1;
    }
    return 4;
  }
  return 0x14;
}

