
/* qcamera::QCameraParameters::getISOValueStr() */

char * __thiscall qcamera::QCameraParameters::getISOValueStr(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    __s2 = (char *)0x0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000fa7ac + 0xfa722),__s2);
    if (((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(DAT_000fa7b0 + 0xfa730),__s2), iVar1 != 0)) &&
         (iVar1 = strcmp(*(char **)(DAT_000fa7b4 + 0xfa73e),__s2), iVar1 != 0)) &&
        ((iVar1 = strcmp(*(char **)(DAT_000fa7b8 + 0xfa74c),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa7bc + 0xfa75a),__s2), iVar1 != 0)))) &&
       ((iVar1 = strcmp(*(char **)(DAT_000fa7c0 + 0xfa768),__s2), iVar1 != 0 &&
        ((iVar1 = strcmp(*(char **)(DAT_000fa7c4 + 0xfa776),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa7c8 + 0xfa784),__s2), iVar1 != 0)))))) {
      iVar1 = strcmp(*(char **)(DAT_000fa7cc + 0xfa792),__s2);
      if (iVar1 != 0) {
        __s2 = (char *)0x0;
      }
      return __s2;
    }
  }
  return __s2;
}

