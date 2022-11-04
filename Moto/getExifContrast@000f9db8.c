
/* qcamera::QCameraParameters::getExifContrast() */

undefined2 __thiscall qcamera::QCameraParameters::getExifContrast(QCameraParameters *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = android::CameraParameters::getInt((char *)this);
  uVar2 = (uint)(iVar1 * 3) / (*(int *)(*(int *)(this + 0x1d4) + 0x2fac) + 1U) & 0xffff;
  if (1 < uVar2) {
    uVar2 = 2;
  }
  return *(undefined2 *)(DAT_000f9df4 + 0xf9dea + uVar2 * 2);
}

