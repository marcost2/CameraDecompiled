
/* qcamera::QCamera2HardwareInterface::setDisplayFrameSkip(unsigned int, unsigned int) */

void __thiscall
qcamera::QCamera2HardwareInterface::setDisplayFrameSkip
          (QCamera2HardwareInterface *this,uint param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(this + 0x1e1c);
  if (param_1 == 0) {
    param_2 = 0;
    *puVar1 = 0;
  }
  else {
    if (param_1 <= *puVar1 - 1) {
      *puVar1 = param_1;
    }
    if ((param_2 != 0) && (param_2 <= *(uint *)(this + 0x1e20))) {
      return;
    }
  }
  *(uint *)(this + 0x1e20) = param_2;
  return;
}

