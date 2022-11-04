
/* qcamera::QCamera3HeapMemory::QCamera3HeapMemory(unsigned int) */

void __thiscall
qcamera::QCamera3HeapMemory::QCamera3HeapMemory(QCamera3HeapMemory *this,uint param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)QCamera3Memory::QCamera3Memory((QCamera3Memory *)this);
  if (0x3f < param_1) {
    param_1 = 0x40;
  }
  piVar1[0x183] = param_1;
  *piVar1 = *(int *)(DAT_0005310c + 0x530ec) + 8;
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      piVar1[uVar2 + 0x102] = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)piVar1[0x183]);
  }
  return;
}

