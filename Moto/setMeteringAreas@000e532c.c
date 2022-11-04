
/* qcamera::QCameraParameters::setMeteringAreas(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setMeteringAreas(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  int iVar1;
  char *__s2;
  undefined4 uVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  if (__s1 != (char *)0x0) {
    iVar1 = android::CameraParameters::getInt((char *)this);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000e53b0 + 0xe5386) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e53b8 + 0xe539e,0xf10,DAT_000e53b4 + 0xe5396);
      }
      return 0xffffffea;
    }
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (((__s2 == (char *)0x0) || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)) ||
       (this[0x230] != (QCameraParameters)0x0)) {
      uVar2 = setMeteringAreas(this,__s1);
      return uVar2;
    }
  }
  return 0;
}

