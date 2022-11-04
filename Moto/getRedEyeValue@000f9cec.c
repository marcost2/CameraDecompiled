
/* qcamera::QCameraParameters::getRedEyeValue() */

undefined4 __thiscall qcamera::QCameraParameters::getRedEyeValue(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    return 0xfffffffe;
  }
  iVar1 = strcmp(*(char **)(DAT_000f9d38 + 0xf9d04),__s2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f9d3c + 0xf9d12),__s2);
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = 1;
  }
  return *(undefined4 *)(*(int *)(DAT_000f9d40 + 0xf9d2a) + iVar1 * 8 + 4);
}

