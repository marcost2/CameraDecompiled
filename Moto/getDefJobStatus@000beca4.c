
/* qcamera::QCamera2HardwareInterface::getDefJobStatus(unsigned int&) */

int __thiscall
qcamera::QCamera2HardwareInterface::getDefJobStatus(QCamera2HardwareInterface *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1;
  if (*(uint *)(this + 0x1c70) == uVar2) {
    iVar3 = 0;
  }
  else if (*(uint *)(this + 0x1c78) == uVar2) {
    iVar3 = 1;
  }
  else if (*(uint *)(this + 0x1c80) == uVar2) {
    iVar3 = 2;
  }
  else if (*(uint *)(this + 0x1c88) == uVar2) {
    iVar3 = 3;
  }
  else if (*(uint *)(this + 0x1c90) == uVar2) {
    iVar3 = 4;
  }
  else if (*(uint *)(this + 0x1c98) == uVar2) {
    iVar3 = 5;
  }
  else if (*(uint *)(this + 0x1ca0) == uVar2) {
    iVar3 = 6;
  }
  else if (*(uint *)(this + 0x1ca8) == uVar2) {
    iVar3 = 7;
  }
  else if (*(uint *)(this + 0x1cb0) == uVar2) {
    iVar3 = 8;
  }
  else if (*(uint *)(this + 0x1cb8) == uVar2) {
    iVar3 = 9;
  }
  else if (*(uint *)(this + 0x1cc0) == uVar2) {
    iVar3 = 10;
  }
  else if (*(uint *)(this + 0x1cc8) == uVar2) {
    iVar3 = 0xb;
  }
  else if (*(uint *)(this + 0x1cd0) == uVar2) {
    iVar3 = 0xc;
  }
  else if (*(uint *)(this + 0x1cd8) == uVar2) {
    iVar3 = 0xd;
  }
  else if (*(uint *)(this + 0x1ce0) == uVar2) {
    iVar3 = 0xe;
  }
  else if (*(uint *)(this + 0x1ce8) == uVar2) {
    iVar3 = 0xf;
  }
  else if (*(uint *)(this + 0x1cf0) == uVar2) {
    iVar3 = 0x10;
  }
  else if (*(uint *)(this + 0x1cf8) == uVar2) {
    iVar3 = 0x11;
  }
  else if (*(uint *)(this + 0x1d00) == uVar2) {
    iVar3 = 0x12;
  }
  else if (*(uint *)(this + 0x1d08) == uVar2) {
    iVar3 = 0x13;
  }
  else if (*(uint *)(this + 0x1d10) == uVar2) {
    iVar3 = 0x14;
  }
  else if (*(uint *)(this + 0x1d18) == uVar2) {
    iVar3 = 0x15;
  }
  else if (*(uint *)(this + 0x1d20) == uVar2) {
    iVar3 = 0x16;
  }
  else if (*(uint *)(this + 0x1d28) == uVar2) {
    iVar3 = 0x17;
  }
  else {
    if (*(uint *)(this + 0x1d30) != uVar2) {
      return 0;
    }
    iVar3 = 0x18;
  }
  iVar1 = *(int *)(this + iVar3 * 8 + 0x1c74);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(DAT_000bee44 + 0xbee18) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000bee4c + 0xbee34,0x384d,DAT_000bee48 + 0xbee28,uVar2);
    iVar1 = *(int *)(this + iVar3 * 8 + 0x1c74);
  }
  return iVar1;
}

