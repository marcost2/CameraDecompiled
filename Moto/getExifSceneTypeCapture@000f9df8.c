
/* qcamera::QCameraParameters::getExifSceneTypeCapture(int*) */

uint __thiscall
qcamera::QCameraParameters::getExifSceneTypeCapture(QCameraParameters *this,int *param_1)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(*(char **)(DAT_000f9e6c + 0xf9e12),__s2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = strcmp(*(char **)(DAT_000f9e74 + 0xf9e20),__s2);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = strcmp(*(char **)(DAT_000f9e78 + 0xf9e2e),__s2);
      if (iVar1 == 0) {
        iVar1 = 2;
      }
      else {
        iVar1 = strcmp(*(char **)(DAT_000f9e7c + 0xf9e3c),__s2);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = 3;
      }
    }
  }
  *param_1 = 1;
  return *(uint *)(DAT_000f9e70 + iVar1 * 8 + 0xf9e64) & 0xffff;
}

