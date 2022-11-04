
/* qcamera::QCameraExif::QCameraExif() */

QCameraExif * __thiscall qcamera::QCameraExif::QCameraExif(QCameraExif *this)

{
  *(undefined4 *)(this + 0x4b4) = 0;
  *(int *)this = *(int *)(DAT_000d777c + 0xd776c) + 8;
  __aeabi_memclr8(this + 4,0x4b0);
  return this;
}

