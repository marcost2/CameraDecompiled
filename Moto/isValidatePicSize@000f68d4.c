
/* qcamera::QCameraParameters::QCameraReprocScaleParam::isValidatePicSize(int, int) */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::isValidatePicSize
          (QCameraReprocScaleParam *this,int param_1,int param_2)

{
  uint uVar1;
  
  if (*(uint *)(this + 0x50) != 0) {
    uVar1 = 0;
    do {
      if ((*(int *)(*(int *)(this + 0x54) + uVar1 * 8) == param_1) &&
         (*(int *)(*(int *)(this + 0x54) + uVar1 * 8 + 4) == param_2)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x50));
  }
  if (*(uint *)(this + 0xc) != 0) {
    uVar1 = 0;
    do {
      if ((*(int *)(this + uVar1 * 8 + 0x10) == param_1) &&
         (*(int *)(this + uVar1 * 8 + 0x14) == param_2)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0xc));
  }
  if (*(int *)(*(int *)(DAT_000f6954 + 0xf692c) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000f695c + 0xf6944,0x3582,DAT_000f6958 + 0xf693c);
  }
  return 0;
}

