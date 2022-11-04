
/* qcamera::QCameraParameters::setFocusAreas(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setFocusAreas(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  int iVar1;
  char *__s2;
  undefined4 uVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  if (*(int *)(this + 500) == 1) {
    if (*(int *)(*(int *)(DAT_000e4f10 + 0xe4e90) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e4f18 + 0xe4ea8,0xeeb,DAT_000e4f14 + 0xe4ea0);
    }
  }
  else if (__s1 != (char *)0x0) {
    iVar1 = android::CameraParameters::getInt((char *)this);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000e4f20 + 0xe4eea) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e4f28 + 0xe4f02,0xef1,DAT_000e4f24 + 0xe4efa);
      }
      return 0xffffffea;
    }
    __s2 = (char *)android::CameraParameters::get((char *)this);
    if ((__s2 == (char *)0x0) || (iVar1 = strcmp(__s1,__s2), iVar1 != 0)) {
      uVar2 = setFocusAreas(this,__s1);
      return uVar2;
    }
  }
  return 0;
}

