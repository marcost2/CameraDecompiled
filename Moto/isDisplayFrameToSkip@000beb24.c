
/* qcamera::QCamera2HardwareInterface::isDisplayFrameToSkip(unsigned int) */

uint __thiscall
qcamera::QCamera2HardwareInterface::isDisplayFrameToSkip
          (QCamera2HardwareInterface *this,uint param_1)

{
  uint uVar1;
  
  if (*(int *)(this + 0x1e1c) - 1U < param_1) {
    uVar1 = count_leading_zeroes(*(uint *)(this + 0x1e20));
    return uVar1 >> 5 | (uint)(param_1 <= *(uint *)(this + 0x1e20));
  }
  return 0;
}

