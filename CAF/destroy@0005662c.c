
/* qcamera::QCamera3Channel::destroy() */

void __thiscall qcamera::QCamera3Channel::destroy(QCamera3Channel *this,__tree_node *param_1)

{
  uint uVar1;
  
  if (this[0x50] != (QCamera3Channel)0x0) {
    (**(code **)(*(int *)this + 0xc))(this);
  }
  if (*(int *)(this + 0x44) != 0) {
    uVar1 = 0;
    do {
      if (*(int **)(this + uVar1 * 4 + 0x24) != (int *)0x0) {
        (**(code **)(**(int **)(this + uVar1 * 4 + 0x24) + 4))();
        *(undefined4 *)(this + uVar1 * 4 + 0x24) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x44));
  }
  *(undefined4 *)(this + 0x44) = 0;
  return;
}

