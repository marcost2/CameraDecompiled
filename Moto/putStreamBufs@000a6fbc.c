
/* qcamera::QCamera3SupportChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3SupportChannel::putStreamBufs(QCamera3SupportChannel *this)

{
  QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0x94));
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  *(undefined4 *)(this + 0x94) = 0;
  return;
}

