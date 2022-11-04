
/* qcamera::QCameraParameters::getFlashValue() */

undefined4 __thiscall qcamera::QCameraParameters::getFlashValue(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    return 0xfffffffe;
  }
  iVar1 = strcmp(*(char **)(DAT_000f9cbc + 0xf9c64),__s2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f9cc0 + 0xf9c72),__s2);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f9cc8 + 0xf9c80),__s2);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f9ccc + 0xf9c8e),__s2);
        if (iVar1 != 0) {
          return 0xfffffffe;
        }
        iVar1 = 3;
      }
    }
  }
  return *(undefined4 *)(*(int *)(DAT_000f9cc4 + 0xf9cae) + iVar1 * 8 + 4);
}

