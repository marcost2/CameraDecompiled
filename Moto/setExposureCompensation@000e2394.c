
/* qcamera::QCameraParameters::setExposureCompensation(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setExposureCompensation
          (QCameraParameters *this,QCameraParameters *param_1)

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
    if (*(int *)(*(int *)(DAT_000e2488 + 0xe23ea) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xc11;
    iVar1 = DAT_000e248c + 0xe23fa;
    iVar2 = DAT_000e2490 + 0xe2402;
  }
  else {
    if (iVar2 != iVar1) {
      iVar2 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar2 + 0x5ac) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 0x5b0))) {
        if (*(int *)(*(int *)(DAT_000e2494 + 0xe245a) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e249c + 0xe2474,0xc17,DAT_000e2498 + 0xe246a,iVar1);
        }
        uVar4 = setExposureCompensation(this,iVar1);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e24a0 + 0xe2426) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e24a8 + 0xe2448,0xc1d,DAT_000e24a4 + 0xe2438,iVar1,
                            *(int *)(iVar2 + 0x5ac),*(undefined4 *)(iVar2 + 0x5b0));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e24ac + 0xe23cc) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xc21;
    iVar1 = DAT_000e24b0 + 0xe23dc;
    iVar2 = DAT_000e24b4 + 0xe23e4;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

