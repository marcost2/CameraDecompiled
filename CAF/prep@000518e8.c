
/* android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::prep() */

void __thiscall
android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::prep
          (List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *this)

{
  _Node *this_00;
  
  this_00 = (_Node *)operator_new__(0x14);
  *(_Node **)(this + 4) = this_00;
  List<qcamera::ReprocessBuffer>::_Node::setNext(this_00,(_Node *)this_00);
  _Node::setNext(*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

