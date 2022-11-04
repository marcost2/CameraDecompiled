
/* qcamera::QCameraHeapMemory::deallocate() */

void __thiscall qcamera::QCameraHeapMemory::deallocate(QCameraHeapMemory *this)

{
  int iVar1;
  uint uVar2;
  
  if (this[5] != (QCameraHeapMemory)0x0) {
    iVar1 = 0x14;
    uVar2 = 0;
    do {
      munmap(*(void **)(this + uVar2 * 4 + 0x618),*(size_t *)(this + iVar1));
      *(undefined4 *)(this + uVar2 * 4 + 0x618) = 0;
      iVar1 = iVar1 + 0x18;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (byte)this[5]);
  }
  QCameraMemory::dealloc((QCameraMemory *)this);
  this[5] = (QCameraHeapMemory)0x0;
  return;
}

