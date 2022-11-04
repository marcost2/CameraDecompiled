
/* qcamera::QCameraParameters::setHDRNeed1x(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setHDRNeed1x(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  undefined4 uVar1;
  int iVar2;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  iVar2 = *(int *)(DAT_000e6e84 + 0xe6e1e);
  if (*(int *)(iVar2 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000e6e8c + 0xe6e38,0x10a3,DAT_000e6e88 + 0xe6e2e,__s1,__s2);
  }
  if (__s1 != (char *)0x0) {
    if (this[0x300] == (QCameraParameters)0x0) {
      if ((__s2 == (char *)0x0) || (iVar2 = strcmp(__s1,__s2), iVar2 != 0)) {
        uVar1 = setHDRNeed1x(this,__s1);
        return uVar1;
      }
    }
    else if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e6e94 + 0xe6e5a,0x10a6,DAT_000e6e90 + 0xe6e52);
    }
  }
  return 0;
}

