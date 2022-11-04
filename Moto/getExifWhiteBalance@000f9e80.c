
/* qcamera::QCameraParameters::getExifWhiteBalance() */

int __thiscall qcamera::QCameraParameters::getExifWhiteBalance(QCameraParameters *this)

{
  char *__s2;
  int iVar1;
  
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s2 != (char *)0x0) {
    iVar1 = strcmp(*(char **)(DAT_000f9eac + 0xf9e96),__s2);
    if (iVar1 != 0) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}

