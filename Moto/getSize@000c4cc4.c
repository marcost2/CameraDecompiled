
/* qcamera::QCameraMemory::getSize(unsigned int) const */

undefined4 __thiscall qcamera::QCameraMemory::getSize(QCameraMemory *this,uint param_1)

{
  if (param_1 < (byte)this[5]) {
    return *(undefined4 *)(this + param_1 * 0x18 + 0x14);
  }
  return 0xffffffb5;
}

