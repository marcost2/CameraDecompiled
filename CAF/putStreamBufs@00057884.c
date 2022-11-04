
/* qcamera::QCamera3YUVChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3YUVChannel::putStreamBufs(QCamera3YUVChannel *this)

{
  __tree_node *extraout_r1;
  uint in_r2;
  
  QCamera3ProcessingChannel::putStreamBufs((QCamera3ProcessingChannel *)this);
  QCamera3StreamMem::deallocate((allocator *)(this + 0x408),extraout_r1,in_r2);
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x2f08));
  android::List<qcamera::QCamera3YUVChannel::PpInfo>::clear
            ((List_qcamera__QCamera3YUVChannel__PpInfo_ *)(this + 0x2efc));
  return;
}

