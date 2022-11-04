
/* qcamera::QCameraParameters::QCameraReprocScaleParam::setSensorSupportedPicSize() */

undefined4 __thiscall
qcamera::QCameraParameters::QCameraReprocScaleParam::setSensorSupportedPicSize
          (QCameraReprocScaleParam *this)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  uVar1 = (uint)(byte)this[1];
  bVar3 = uVar1 != 0;
  if (bVar3) {
    uVar1 = *(uint *)(this + 0x50);
  }
  if (bVar3 && uVar1 != 0) {
    if (this[2] == (QCameraReprocScaleParam)0x0) {
      puVar2 = *(undefined4 **)(this + 0x54) + 1;
      *(undefined4 *)(this + 0x1a4) = **(undefined4 **)(this + 0x54);
      goto LAB_000f69ba;
    }
  }
  else if (this[2] == (QCameraReprocScaleParam)0x0) {
    return 0xffffffea;
  }
  if (*(int *)(*(int *)(DAT_000f69c8 + 0xf698a) + 0x34) != 0) {
    mm_camera_debug_log(1,6,DAT_000f69d0 + 0xf69a2,0x359b,DAT_000f69cc + 0xf699a);
  }
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(this + 4);
  puVar2 = (undefined4 *)(this + 8);
LAB_000f69ba:
  *(undefined4 *)(this + 0x1a8) = *puVar2;
  return 0;
}

