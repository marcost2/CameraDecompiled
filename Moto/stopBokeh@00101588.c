
/* qcamera::BSTLiveBokeh::stopBokeh() */

void __thiscall qcamera::BSTLiveBokeh::stopBokeh(BSTLiveBokeh *this)

{
  if (*(int **)(this + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xcc) + 0x14))();
    (**(code **)(**(int **)(this + 0xcc) + 8))();
    *(undefined4 *)(this + 0xcc) = 0;
    this[0x14] = (BSTLiveBokeh)0x0;
  }
  return;
}

