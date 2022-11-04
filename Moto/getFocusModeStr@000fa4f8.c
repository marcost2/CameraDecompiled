
/* qcamera::QCameraParameters::getFocusModeStr() const */

char * __thiscall qcamera::QCameraParameters::getFocusModeStr(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    __s2 = (char *)0x0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000fa58c + 0xfa510),__s2);
    if ((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(DAT_000fa590 + 0xfa51e),__s2), iVar1 != 0)) &&
        (iVar1 = strcmp(*(char **)(DAT_000fa594 + 0xfa52c),__s2), iVar1 != 0)) &&
       (((iVar1 = strcmp(*(char **)(DAT_000fa598 + 0xfa53a),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa59c + 0xfa548),__s2), iVar1 != 0)) &&
        ((iVar1 = strcmp(*(char **)(DAT_000fa5a0 + 0xfa556),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa5a4 + 0xfa564),__s2), iVar1 != 0)))))) {
      iVar1 = strcmp(*(char **)(DAT_000fa5a8 + 0xfa572),__s2);
      if (iVar1 != 0) {
        __s2 = (char *)0x0;
      }
      return __s2;
    }
  }
  return __s2;
}

