
/* qcamera::QCameraMemory::reset() */

void __thiscall qcamera::QCameraMemory::reset(QCameraMemory *this)

{
  int iVar1;
  int iVar2;
  
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  return;
}

