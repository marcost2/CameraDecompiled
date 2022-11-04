
/* android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear() */

void __thiscall
android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
          (List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *this)

{
  _Node *this_00;
  _Node *this_01;
  _Node *p_Var1;
  void *pvVar2;
  
  this_00 = (_Node *)_Node::getNext(*(_Node **)(this + 4));
  this_01 = *(_Node **)(this + 4);
  if (this_00 != this_01) {
    do {
      p_Var1 = (_Node *)_Node::getNext((_Node *)this_00);
      if (this_00 != (_Node *)0x0) {
        pvVar2 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                   ((AbstractUnwindCursor *)this_00);
        operator_delete(pvVar2);
      }
      this_01 = *(_Node **)(this + 4);
      this_00 = p_Var1;
    } while (p_Var1 != this_01);
  }
  List<qcamera::ReprocessBuffer>::_Node::setNext(this_01,(_Node *)this_01);
  _Node::setNext(*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

