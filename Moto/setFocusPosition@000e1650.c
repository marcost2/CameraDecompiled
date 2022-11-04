
/* qcamera::QCameraParameters::setFocusPosition(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setFocusPosition(QCameraParameters *this,QCameraParameters *param_1)

{
  char *__s1;
  char *__s2;
  int iVar1;
  char *__s1_00;
  char *__s2_00;
  char *__s1_01;
  char *__s2_01;
  undefined4 uVar2;
  int iVar3;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  if (__s1 != (char *)0x0) {
    iVar3 = *(int *)(DAT_000e1750 + 0xe167e);
    if (*(int *)(iVar3 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000e1758 + 0xe1698,0xb14,DAT_000e1754 + 0xe168e,__s1);
    }
    iVar1 = strcmp(__s1,*(char **)(DAT_000e175c + 0xe16a0));
    if (iVar1 == 0) {
      __s1_00 = (char *)android::CameraParameters::get((char *)param_1);
      __s2_00 = (char *)android::CameraParameters::get((char *)this);
      __s1_01 = (char *)android::CameraParameters::get((char *)param_1);
      __s2_01 = (char *)android::CameraParameters::get((char *)this);
      if ((__s1_00 != (char *)0x0 && __s1_01 != (char *)0x0) &&
         ((((__s2_00 == (char *)0x0 || (iVar3 = strcmp(__s1_00,__s2_00), __s2_01 == (char *)0x0)) ||
           (iVar3 != 0)) ||
          (((iVar3 = strcmp(__s1_01,__s2_01), __s2 == (char *)0x0 || (iVar3 != 0)) ||
           (iVar3 = strcmp(__s1,__s2), iVar3 != 0)))))) {
        uVar2 = (*(code *)PTR_setFocusPosition_0011a3a0)(this,__s1_01,__s1_00);
        return uVar2;
      }
    }
    else if (*(int *)(iVar3 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e1764 + 0xe16c0,0xb16,DAT_000e1760 + 0xe16b8);
    }
  }
  return 0;
}

