
/* qcamera::QCameraParameters::QCameraReprocScaleParam::isScalePicSize(int, int) */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::isScalePicSize
          (QCameraReprocScaleParam *this,int param_1,int param_2)

{
  uint uVar1;
  
  if (*(uint *)(this + 0xc) == 0) {
    if (this[2] == (QCameraReprocScaleParam)0x0) {
      return 0;
    }
  }
  else {
    uVar1 = 0;
    do {
      if ((*(int *)(this + uVar1 * 8 + 0x10) == param_1) &&
         (*(int *)(this + uVar1 * 8 + 0x14) == param_2)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0xc));
  }
  if (this[2] == (QCameraReprocScaleParam)0x0) {
    if (*(int *)(*(int *)(DAT_000f68c8 + 0xf689a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f68d0 + 0xf68b2,0x3561,DAT_000f68cc + 0xf68aa);
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000f68bc + 0xf6872) + 0x34) == 0) {
    return 1;
  }
  mm_camera_debug_log(1,6,DAT_000f68c4 + 0xf688c,0x355e,DAT_000f68c0 + 0xf6884);
  return 1;
}

