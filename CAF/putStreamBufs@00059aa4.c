
/* qcamera::QCamera3RawDumpChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3RawDumpChannel::putStreamBufs(QCamera3RawDumpChannel *this)

{
  __tree_node *in_r1;
  uint in_r2;
  
  QCamera3StreamMem::deallocate(*(allocator **)(this + 0x9c),in_r1,in_r2);
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  *(undefined4 *)(this + 0x9c) = 0;
  return;
}

