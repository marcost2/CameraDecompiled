
/* qcamera::QCamera3RawDumpChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3RawDumpChannel::putStreamBufs(QCamera3RawDumpChannel *this)

{
  QCamera3StreamMem::deallocate(*(QCamera3StreamMem **)(this + 0xa0));
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  *(undefined4 *)(this + 0xa0) = 0;
  return;
}

