
/* qcamera::QCameraParameters::setVideoStabilization(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setVideoStabilization
          (QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 == (char *)0x0) {
    return 0;
  }
  if (__s2 != (char *)0x0) {
    iVar1 = strcmp(__s1,__s2);
    if (iVar1 == 0) {
      iVar1 = strcmp(__s1,*(char **)(DAT_000ebe04 + 0xebde8));
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      this[0x230] = (QCameraParameters)0x1;
    }
  }
  uVar2 = setVideoStabilization(this,__s1);
  return uVar2;
}

