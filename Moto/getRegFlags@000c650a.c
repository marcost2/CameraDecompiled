
/* qcamera::QCameraStreamMemory::getRegFlags(unsigned char*) const */

undefined4 __thiscall
qcamera::QCameraStreamMemory::getRegFlags(QCameraStreamMemory *this,uchar *param_1)

{
  uint uVar1;
  
  if (this[5] != (QCameraStreamMemory)0x0) {
    uVar1 = 0;
    do {
      param_1[uVar1] = '\x01';
      uVar1 = uVar1 + 1;
    } while (uVar1 < (byte)this[5]);
  }
  return 0;
}

