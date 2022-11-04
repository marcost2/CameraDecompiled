
/* qcamera::QCamera2HardwareInterface::checkDeferredWork(unsigned int&) */

uint __thiscall
qcamera::QCamera2HardwareInterface::checkDeferredWork(QCamera2HardwareInterface *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (*(uint *)(this + 0x1c70) == uVar1) {
    iVar2 = 0;
  }
  else if (*(uint *)(this + 0x1c78) == uVar1) {
    iVar2 = 1;
  }
  else if (*(uint *)(this + 0x1c80) == uVar1) {
    iVar2 = 2;
  }
  else if (*(uint *)(this + 0x1c88) == uVar1) {
    iVar2 = 3;
  }
  else if (*(uint *)(this + 0x1c90) == uVar1) {
    iVar2 = 4;
  }
  else if (*(uint *)(this + 0x1c98) == uVar1) {
    iVar2 = 5;
  }
  else if (*(uint *)(this + 0x1ca0) == uVar1) {
    iVar2 = 6;
  }
  else if (*(uint *)(this + 0x1ca8) == uVar1) {
    iVar2 = 7;
  }
  else if (*(uint *)(this + 0x1cb0) == uVar1) {
    iVar2 = 8;
  }
  else if (*(uint *)(this + 0x1cb8) == uVar1) {
    iVar2 = 9;
  }
  else if (*(uint *)(this + 0x1cc0) == uVar1) {
    iVar2 = 10;
  }
  else if (*(uint *)(this + 0x1cc8) == uVar1) {
    iVar2 = 0xb;
  }
  else if (*(uint *)(this + 0x1cd0) == uVar1) {
    iVar2 = 0xc;
  }
  else if (*(uint *)(this + 0x1cd8) == uVar1) {
    iVar2 = 0xd;
  }
  else if (*(uint *)(this + 0x1ce0) == uVar1) {
    iVar2 = 0xe;
  }
  else if (*(uint *)(this + 0x1ce8) == uVar1) {
    iVar2 = 0xf;
  }
  else if (*(uint *)(this + 0x1cf0) == uVar1) {
    iVar2 = 0x10;
  }
  else if (*(uint *)(this + 0x1cf8) == uVar1) {
    iVar2 = 0x11;
  }
  else if (*(uint *)(this + 0x1d00) == uVar1) {
    iVar2 = 0x12;
  }
  else if (*(uint *)(this + 0x1d08) == uVar1) {
    iVar2 = 0x13;
  }
  else if (*(uint *)(this + 0x1d10) == uVar1) {
    iVar2 = 0x14;
  }
  else if (*(uint *)(this + 0x1d18) == uVar1) {
    iVar2 = 0x15;
  }
  else if (*(uint *)(this + 0x1d20) == uVar1) {
    iVar2 = 0x16;
  }
  else if (*(uint *)(this + 0x1d28) == uVar1) {
    iVar2 = 0x17;
  }
  else {
    if (*(uint *)(this + 0x1d30) != uVar1) {
      return 0;
    }
    iVar2 = 0x18;
  }
  uVar1 = count_leading_zeroes(*(undefined4 *)(this + iVar2 * 8 + 0x1c74));
  return uVar1 >> 5;
}

