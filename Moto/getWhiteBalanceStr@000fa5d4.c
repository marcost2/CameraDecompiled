
/* qcamera::QCameraParameters::getWhiteBalanceStr() const */

char * __thiscall qcamera::QCameraParameters::getWhiteBalanceStr(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    __s2 = (char *)0x0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000fa678 + 0xfa5ee),__s2);
    if (((((iVar1 != 0) && (iVar1 = strcmp(*(char **)(DAT_000fa67c + 0xfa5fc),__s2), iVar1 != 0)) &&
         (iVar1 = strcmp(*(char **)(DAT_000fa680 + 0xfa60a),__s2), iVar1 != 0)) &&
        ((iVar1 = strcmp(*(char **)(DAT_000fa684 + 0xfa618),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa688 + 0xfa626),__s2), iVar1 != 0)))) &&
       ((iVar1 = strcmp(*(char **)(DAT_000fa68c + 0xfa634),__s2), iVar1 != 0 &&
        ((iVar1 = strcmp(*(char **)(DAT_000fa690 + 0xfa642),__s2), iVar1 != 0 &&
         (iVar1 = strcmp(*(char **)(DAT_000fa694 + 0xfa650),__s2), iVar1 != 0)))))) {
      iVar1 = strcmp(*(char **)(DAT_000fa698 + 0xfa65e),__s2);
      if (iVar1 != 0) {
        __s2 = (char *)0x0;
      }
      return __s2;
    }
  }
  return __s2;
}

