
/* qcamera::QCamera3StreamMem::getRegFlags(unsigned char*) */

undefined4 __thiscall
qcamera::QCamera3StreamMem::getRegFlags(QCamera3StreamMem *this,uchar *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      *(QCamera3StreamMem *)(param_1 + uVar3) = this[0xe2c];
      uVar3 = uVar3 + 1;
      uVar2 = QCamera3Memory::getCnt((QCamera3Memory *)(this + 4));
    } while (uVar3 < uVar2);
  }
  return 0;
}

