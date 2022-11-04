
/* qcamera::QCameraHeapMemory::QCameraHeapMemory(bool) */

QCameraHeapMemory * __thiscall
qcamera::QCameraHeapMemory::QCameraHeapMemory(QCameraHeapMemory *this,bool param_1)

{
  int iVar1;
  int iVar2;
  
  this[5] = (QCameraHeapMemory)0x0;
  this[4] = (QCameraHeapMemory)param_1;
  *(undefined8 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x610) = 0;
  *(int *)this = *(int *)(DAT_000c5a88 + 0xc5a50) + 8;
  __aeabi_memclr8(this + 8,0x600);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 0x18;
    *(undefined4 *)(this + iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(this + iVar1 + 0xc) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 != 0x600);
  *(int *)this = *(int *)(DAT_000c5a8c + 0xc5a78) + 8;
  __aeabi_memclr8(this + 0x618,0x100);
  return this;
}

