
/* qcamera::QCamera2HardwareInterface::release() */

undefined4 __thiscall qcamera::QCamera2HardwareInterface::release(QCamera2HardwareInterface *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int **)(this + iVar1 * 4 + 0x9b4) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1 * 4 + 0x9b4) + 0x18))();
      if (*(int **)(this + iVar1 * 4 + 0x9b4) != (int *)0x0) {
        (**(code **)(**(int **)(this + iVar1 * 4 + 0x9b4) + 4))();
        *(undefined4 *)(this + iVar1 * 4 + 0x9b4) = 0;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  return 0;
}

