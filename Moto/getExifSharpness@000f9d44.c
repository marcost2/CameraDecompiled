
/* qcamera::QCameraParameters::getExifSharpness() */

undefined2 __thiscall qcamera::QCameraParameters::getExifSharpness(QCameraParameters *this)

{
  uint uVar1;
  
  uVar1 = (uint)(*(int *)(this + 0x370) * 3) / (*(int *)(*(int *)(this + 0x1d4) + 0x2f9c) + 1U) &
          0xffff;
  if (1 < uVar1) {
    uVar1 = 2;
  }
  return *(undefined2 *)(DAT_000f9d70 + 0xf9d6a + uVar1 * 2);
}

