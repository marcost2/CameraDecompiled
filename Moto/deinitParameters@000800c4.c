
/* qcamera::QCamera3HardwareInterface::deinitParameters() */

void __thiscall
qcamera::QCamera3HardwareInterface::deinitParameters(QCamera3HardwareInterface *this)

{
  (**(code **)((*(undefined4 **)(this + 100))[1] + 0x14))(**(undefined4 **)(this + 100),1);
  QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x1b0));
  if (*(int **)(this + 0x1b0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b0) + 0x20))();
  }
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  free(*(void **)(this + 0x1b8));
  *(undefined4 *)(this + 0x1b8) = 0;
  return;
}

