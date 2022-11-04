
/* qcamera::QCameraVideoMemory::deallocate() */

void __thiscall qcamera::QCameraVideoMemory::deallocate(QCameraVideoMemory *this)

{
  uint uVar1;
  uint uVar2;
  
  deallocateMeta(this);
  uVar1 = (uint)(byte)this[5];
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(this + uVar2 * 4 + 0x61c) != 0) {
        (**(code **)(*(int *)(this + uVar2 * 4 + 0x61c) + 0xc))();
        uVar1 = (uint)(byte)this[5];
      }
      *(undefined4 *)(this + uVar2 * 4 + 0x61c) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  QCameraMemory::dealloc((QCameraMemory *)this);
  this[0x820] = (QCameraVideoMemory)0x0;
  this[5] = (QCameraVideoMemory)0x0;
  return;
}

