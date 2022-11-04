
/* qcamera::QCameraParameters::setSaturation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setSaturation(QCameraParameters *this,QCameraParameters *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = android::CameraParameters::getInt((char *)param_1);
  iVar2 = android::CameraParameters::getInt((char *)this);
  iVar3 = android::CameraParameters::get((char *)param_1);
  if (iVar3 == 0) {
    if (*(int *)(*(int *)(DAT_000e2060 + 0xe1fba) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xbc2;
    iVar1 = DAT_000e2064 + 0xe1fca;
    iVar2 = DAT_000e2068 + 0xe1fd2;
  }
  else {
    if (iVar2 != iVar1) {
      iVar2 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar2 + 0x2fb8) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 0x2fbc))) {
        if (*(int *)(*(int *)(DAT_000e206c + 0xe2030) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e2074 + 0xe204a,0xbc8,DAT_000e2070 + 0xe2040,iVar1);
        }
        uVar4 = setSaturation(this,iVar1);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e2078 + 0xe1ffa) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e2080 + 0xe201e,0xbce,DAT_000e207c + 0xe200e,iVar1,
                            *(int *)(iVar2 + 0x2fb8),*(undefined4 *)(iVar2 + 0x2fbc));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e2084 + 0xe1f9c) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xbd2;
    iVar1 = DAT_000e2088 + 0xe1fac;
    iVar2 = DAT_000e208c + 0xe1fb4;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

