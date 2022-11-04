
/* android::List<qcamera::PendingBuffersInRequest>::prep() */

void __thiscall
android::List<qcamera::PendingBuffersInRequest>::prep(List_qcamera__PendingBuffersInRequest_ *this)

{
  _Node *this_00;
  
  this_00 = (_Node *)operator_new__(0x20);
  *(_Node **)(this + 4) = this_00;
  _Node::setPrev(this_00,(_Node *)this_00);
  _Node::setNext(*(_Node **)(this + 4),*(_Node **)(this + 4));
  return;
}

