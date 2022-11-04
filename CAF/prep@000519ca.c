
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::prep() */

void __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::prep
          (List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *this)

{
  _Node *this_00;
  
  this_00 = (_Node *)operator_new__(0x58);
  *(_Node **)(this + 4) = this_00;
  _Node::setPrev(this_00,(_Node *)this_00);
  _Node::setNext(*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

