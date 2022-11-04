
/* qcamera::QCameraParameters::isAEBracketEnabled() */

undefined4 __thiscall qcamera::QCameraParameters::isAEBracketEnabled(QCameraParameters *this)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,*(char **)(DAT_000f1d98 + 0xf1d84)), iVar1 != 0)
     ) {
    return 1;
  }
  return 0;
}

