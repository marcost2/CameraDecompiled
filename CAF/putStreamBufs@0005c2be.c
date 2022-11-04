
/* qcamera::QCamera3PicChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3PicChannel::putStreamBufs(QCamera3PicChannel *this)

{
  __tree_node *extraout_r1;
  uint in_r2;
  
  QCamera3ProcessingChannel::putStreamBufs((QCamera3ProcessingChannel *)this);
  QCamera3StreamMem::deallocate(*(allocator **)(this + 0x2ef4),extraout_r1,in_r2);
  if (*(int **)(this + 0x2ef4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2ef4) + 4))();
  }
  *(undefined4 *)(this + 0x2ef4) = 0;
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x2efc));
  return;
}

