
/* qcamera::QCameraGrallocMemory::getRegFlags(unsigned char*) const */

undefined4 __thiscall
qcamera::QCameraGrallocMemory::getRegFlags(QCameraGrallocMemory *this,uchar *param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0xa80) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      param_1[uVar1] = '\0';
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(this + 0xa80));
  }
  if (uVar1 < (byte)this[0xa88]) {
    do {
      param_1[uVar1] = '\x01';
      uVar1 = uVar1 + 1;
    } while (uVar1 < (byte)this[0xa88]);
  }
  if (uVar1 < (byte)this[5]) {
    do {
      param_1[uVar1] = '\0';
      uVar1 = uVar1 + 1;
    } while (uVar1 < (byte)this[5]);
  }
  return 0;
}

