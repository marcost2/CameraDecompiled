
/* qcamera::QCameraStreamMemory::deallocate() */

void __thiscall qcamera::QCameraStreamMemory::deallocate(QCameraStreamMemory *this)

{
  uint uVar1;
  uint uVar2;
  
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
  this[5] = (QCameraStreamMemory)0x0;
  return;
}

