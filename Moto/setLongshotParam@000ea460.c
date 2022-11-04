
/* qcamera::QCameraParameters::setLongshotParam(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setLongshotParam(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(DAT_000ea4cc + 0xea46c);
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 != (char *)0x0) {
    if (__s2 == (char *)0x0) {
      android::CameraParameters::set((CameraParameters *)this,pcVar2,__s1);
    }
    else {
      iVar1 = strcmp(__s1,__s2);
      if (iVar1 != 0) {
        android::CameraParameters::set((CameraParameters *)this,pcVar2,__s1);
        iVar1 = strcmp(__s1,*(char **)(DAT_000ea4d0 + 0xea49e));
        if ((iVar1 == 0) && (iVar1 = strcmp(__s2,*(char **)(DAT_000ea4d4 + 0xea4ac)), iVar1 == 0)) {
          this[0x230] = (QCameraParameters)0x1;
        }
      }
    }
  }
  return 0;
}

