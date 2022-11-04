
/* qcamera::QCameraParameters::isVideoBuffersCached() */

undefined4 __thiscall qcamera::QCameraParameters::isVideoBuffersCached(QCameraParameters *this)

{
  char *__s1;
  int iVar1;
  
  __s1 = (char *)android::CameraParameters::get((char *)this);
  if ((__s1 != (char *)0x0) && (iVar1 = strcmp(__s1,*(char **)(DAT_000f45c8 + 0xf45b4)), iVar1 != 0)
     ) {
    return 1;
  }
  return 0;
}

