
/* qcamera::QCameraParameters::needThumbnailReprocess(unsigned long long*) */

uint __thiscall
qcamera::QCameraParameters::needThumbnailReprocess(QCameraParameters *this,ulonglong *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((this[0x2c8] == (QCameraParameters)0x0) || (this[0x2c9] != (QCameraParameters)0x0)) &&
     (this[0x2ca] == (QCameraParameters)0x0)) {
    if ((this[0x2cb] != (QCameraParameters)0x0) &&
       (uVar3 = *(uint *)(this + 0x37c), -1 < (int)uVar3)) {
      bVar1 = *(byte *)(*(int *)(this + 0x1d4) + 0x3856);
      if (*(int *)(*(int *)(DAT_000f886c + 0xf87e8) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000f8874 + 0xf8802,0x27c0,DAT_000f8870 + 0xf87f8,uVar3,
                            (uint)bVar1);
      }
      if (bVar1 <= uVar3) goto LAB_000f87b6;
    }
    if ((((this[0x2c9] == (QCameraParameters)0x0) ||
         (*(byte *)(*(int *)(this + 0x1d4) + 0x384f) < 2)) &&
        ((this[0x2d9] == (QCameraParameters)0x0 &&
         (((this[0x288] == (QCameraParameters)0x0 && (this[0x299] == (QCameraParameters)0x0)) ||
          (this[0x29a] != (QCameraParameters)0x0)))))) && (this[0x800] == (QCameraParameters)0x0)) {
      uVar3 = android::CameraParameters::getInt((char *)this);
      uVar2 = android::CameraParameters::getInt((char *)this);
      if (uVar3 != 0) {
        uVar3 = 1;
      }
      if (uVar2 != 0) {
        uVar2 = 1;
      }
      return uVar2 & uVar3;
    }
  }
LAB_000f87b6:
  *(uint *)param_1 = *(uint *)param_1 & 0xffbe8fdf;
  return 0;
}

