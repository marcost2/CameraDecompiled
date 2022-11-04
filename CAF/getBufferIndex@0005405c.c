
/* qcamera::QCamera3GrallocMemory::getBufferIndex(unsigned int) */

uint __thiscall
qcamera::QCamera3GrallocMemory::getBufferIndex(QCamera3GrallocMemory *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(uint *)(this + 0x80c);
  if (uVar1 < 0x40) {
    piVar2 = (int *)(this + uVar1 * 0x10);
    do {
      piVar2 = piVar2 + 4;
      if ((*piVar2 != 0) && (*(uint *)(this + uVar1 * 4 + 0x508) == param_1)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
  }
  return 0xffffffff;
}

