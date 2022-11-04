
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::clear() */

void __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::clear
          (List_qcamera__QCamera3YUVChannel__PpInfo_ *this)

{
  _Node *this_00;
  _Node *this_01;
  _Node *p_Var1;
  void *pvVar2;
  
  this_00 = (_Node *)qcamera::QCamera3Stream::getStreamInfo(*(QCamera3Stream **)(this + 4));
  this_01 = *(_Node **)(this + 4);
  if (this_00 != this_01) {
    do {
      p_Var1 = (_Node *)qcamera::QCamera3Stream::getStreamInfo((QCamera3Stream *)this_00);
      if (this_00 != (_Node *)0x0) {
        pvVar2 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                   ((AbstractUnwindCursor *)this_00);
        operator_delete(pvVar2);
      }
      this_01 = *(_Node **)(this + 4);
      this_00 = p_Var1;
    } while (p_Var1 != this_01);
  }
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::setNext(this_01,(_Node *)this_01);
  _Node::setNext(*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

