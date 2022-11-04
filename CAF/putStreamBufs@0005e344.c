
/* qcamera::QCamera3SupportChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3SupportChannel::putStreamBufs(QCamera3SupportChannel *this)

{
  __tree_node *in_r1;
  uint in_r2;
  
  QCamera3StreamMem::deallocate(*(allocator **)(this + 0x90),in_r1,in_r2);
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  *(undefined4 *)(this + 0x90) = 0;
  return;
}

