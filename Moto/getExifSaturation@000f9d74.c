
/* qcamera::QCameraParameters::getExifSaturation() */

undefined2 __thiscall qcamera::QCameraParameters::getExifSaturation(QCameraParameters *this)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = android::CameraParameters::getInt((char *)this);
  uVar2 = ((uint)uVar1 * 2 + (uint)uVar1) / (*(int *)(*(int *)(this + 0x1d4) + 0x2f9c) + 1U) &
          0xffff;
  if (1 < uVar2) {
    uVar2 = 2;
  }
  return *(undefined2 *)(DAT_000f9db4 + 0xf9daa + uVar2 * 2);
}

