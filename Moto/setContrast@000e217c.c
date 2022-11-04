
/* qcamera::QCameraParameters::setContrast(qcamera::QCameraParameters const&) */

undefined4 __thiscall
qcamera::QCameraParameters::setContrast(QCameraParameters *this,QCameraParameters *param_1)

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
    if (*(int *)(*(int *)(DAT_000e2278 + 0xe21d2) + 0x28) == 0) {
      return 0;
    }
    uVar4 = 3;
    uVar5 = 0xbe9;
    iVar1 = DAT_000e227c + 0xe21e2;
    iVar2 = DAT_000e2280 + 0xe21ea;
  }
  else {
    if (iVar2 != iVar1) {
      iVar2 = *(int *)(this + 0x1d4);
      if ((*(int *)(iVar2 + 0x2fa8) <= iVar1) && (iVar1 <= *(int *)(iVar2 + 0x2fac))) {
        if (*(int *)(*(int *)(DAT_000e2284 + 0xe2248) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e228c + 0xe2262,0xbef,DAT_000e2288 + 0xe2258,iVar1);
        }
        uVar4 = setContrast(this,iVar1);
        return uVar4;
      }
      if (*(int *)(*(int *)(DAT_000e2290 + 0xe2212) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000e2298 + 0xe2236,0xbf6,DAT_000e2294 + 0xe2226,iVar1,
                            *(int *)(iVar2 + 0x2fa8),*(undefined4 *)(iVar2 + 0x2fac));
      }
      return 0xffffffea;
    }
    if (*(int *)(*(int *)(DAT_000e229c + 0xe21b4) + 0x2c) == 0) {
      return 0;
    }
    uVar4 = 4;
    uVar5 = 0xbfa;
    iVar1 = DAT_000e22a0 + 0xe21c4;
    iVar2 = DAT_000e22a4 + 0xe21cc;
  }
  mm_camera_debug_log(1,uVar4,iVar2,uVar5,iVar1);
  return 0;
}

