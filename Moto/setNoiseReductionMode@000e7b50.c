
/* qcamera::QCameraParameters::setNoiseReductionMode(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setNoiseReductionMode
          (QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3003) << 0x19) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e7bfc + 0xe7ba6) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e7c04 + 0xe7bc0,0x114b,DAT_000e7c00 + 0xe7bb6,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setNoiseReductionMode(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e7bec + 0xe7b6a) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e7bf4 + 0xe7b82,0x1146,DAT_000e7bf0 + 0xe7b7a);
  }
  return 0;
}

