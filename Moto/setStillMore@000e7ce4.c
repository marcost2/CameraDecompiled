
/* qcamera::QCameraParameters::setStillMore(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setStillMore(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3002) << 0x19) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e7d90 + 0xe7d3a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e7d98 + 0xe7d54,0x116a,DAT_000e7d94 + 0xe7d4a,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      this[0x230] = (QCameraParameters)0x1;
      uVar2 = setStillMore(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e7d80 + 0xe7cfe) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e7d88 + 0xe7d16,0x1165,DAT_000e7d84 + 0xe7d0e);
  }
  return 0;
}

