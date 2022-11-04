
/* qcamera::QCameraParameters::setManualWhiteBalance(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setManualWhiteBalance
          (QCameraParameters *this,QCameraParameters *param_1)

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
  char *pcVar4;
  char *pcVar5;
  
  __s1 = (char *)android::CameraParameters::get((char *)param_1);
  __s2 = (char *)android::CameraParameters::get((char *)this);
  iVar3 = *(int *)(DAT_000e28c8 + 0xe27b6);
  if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e28d0 + 0xe27d0,0xc50,DAT_000e28cc + 0xe27c6,__s1);
  }
  if ((__s1 == (char *)0x0) || (iVar1 = strcmp(__s1,*(char **)(DAT_000e28d4 + 0xe27da)), iVar1 == 0)
     ) {
    pcVar5 = *(char **)(DAT_000e28e0 + 0xe280c);
    __s1_00 = (char *)android::CameraParameters::get((char *)param_1);
    __s2_00 = (char *)android::CameraParameters::get((char *)this);
    pcVar4 = *(char **)(DAT_000e28e4 + 0xe2828);
    __s1_01 = (char *)android::CameraParameters::get((char *)param_1);
    __s2_01 = (char *)android::CameraParameters::get((char *)this);
    if ((__s1 == (char *)0x0) || (__s1_00 == (char *)0x0 || __s1_01 == (char *)0x0)) {
      return 0;
    }
    if (((__s2_00 == (char *)0x0) ||
        (((iVar3 = strcmp(__s1_00,__s2_00), __s2_01 == (char *)0x0 || (iVar3 != 0)) ||
         (iVar3 = strcmp(__s1_01,__s2_01), __s2 == (char *)0x0)))) ||
       ((iVar3 != 0 || (iVar3 = strcmp(__s1,__s2), iVar3 != 0)))) {
      updateParamEntry(this,pcVar4,__s1_01);
      updateParamEntry(this,pcVar5,__s1_00);
      iVar3 = atoi(__s1_01);
      if (iVar3 == 1) {
        uVar2 = (*(code *)PTR_setManualWBGains_0011a3c4)(this,__s1_00);
        return uVar2;
      }
      if (iVar3 != 0) {
        return 0xffffffea;
      }
      uVar2 = (*(code *)PTR_setWBManualCCT_0011a3c0)(this,__s1_00);
      return uVar2;
    }
  }
  else if (*(int *)(iVar3 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000e28dc + 0xe27fa,0xc54,DAT_000e28d8 + 0xe27f2);
  }
  return 0;
}

