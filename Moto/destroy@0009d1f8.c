
/* qcamera::QCamera3Channel::destroy() */

void __thiscall qcamera::QCamera3Channel::destroy(QCamera3Channel *this)

{
  uint uVar1;
  uint uVar2;
  
  if (this[0x50] != (QCamera3Channel)0x0) {
    (**(code **)(*(int *)this + 0x10))(this);
  }
  uVar1 = *(uint *)(this + 0x44);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int **)(this + uVar2 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar2 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar2 * 4 + 0x24) = 0;
        uVar1 = *(uint *)(this + 0x44);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)(this + 0x44) = 0;
  return;
}

