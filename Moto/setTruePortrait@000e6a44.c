
/* qcamera::QCameraParameters::setTruePortrait(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setTruePortrait(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  undefined4 uVar2;
  
  if ((int)((uint)*(byte *)(*(int *)(this + 0x1d4) + 0x3002) << 0x1c) < 0) {
    __s1 = (char *)android::CameraParameters::get((char *)param_1);
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if (*(int *)(*(int *)(DAT_000e6ae8 + 0xe6a9a) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6af0 + 0xe6ab4,0x105e,DAT_000e6aec + 0xe6aaa,__s1,__s2);
    }
    if ((__s1 != (char *)0x0) && ((__s2 == (char *)0x0 || (iVar1 = strcmp(__s1,__s2), iVar1 != 0))))
    {
      uVar2 = (*(code *)PTR_setTruePortrait_0011a438)(this,__s1);
      return uVar2;
    }
  }
  else if (*(int *)(*(int *)(DAT_000e6ad8 + 0xe6a5e) + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e6ae0 + 0xe6a76,0x1059,DAT_000e6adc + 0xe6a6e);
  }
  return 0;
}

