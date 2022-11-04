
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::prep() */

void __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::prep
          (List_qcamera__QCamera3YUVChannel__PpInfo_ *this)

{
  _Node *this_00;
  
  this_00 = (_Node *)operator_new__(0x18);
  *(_Node **)(this + 4) = this_00;
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::setNext(this_00,(_Node *)this_00);
  _Node::setNext(*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

