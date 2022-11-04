
/* qcamera::QCamera3ReprocessChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3ReprocessChannel::putStreamBufs(QCamera3ReprocessChannel *this)

{
  __tree_node *in_r1;
  uint in_r2;
  
  if (*(int *)(this + 0xc4) == 1) {
    QCamera3StreamMem::deallocate(*(allocator **)(this + 0xf0),in_r1,in_r2);
    if (*(int **)(this + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xf0) + 4))();
    }
    *(undefined4 *)(this + 0xf0) = 0;
    android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0xbc));
    return;
  }
  QCamera3StreamMem::__ThumbV7PILongThunk__ZN7qcamera17QCamera3StreamMem17unregisterBuffersEv
            ((QCamera3StreamMem *)(this + 0xf4));
  return;
}

