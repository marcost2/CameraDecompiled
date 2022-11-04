
/* android::List<qcamera::PendingBuffersInRequest>::clear() */

void __thiscall
android::List<qcamera::PendingBuffersInRequest>::clear(List_qcamera__PendingBuffersInRequest_ *this)

{
  _Node *this_00;
  _Node *this_01;
  void *pvVar1;
  undefined8 uVar2;
  
  this_00 = (_Node *)_Node::getNext(*(_Node **)(this + 4));
  this_01 = *(_Node **)(this + 4);
  if (this_00 != this_01) {
    do {
      uVar2 = _Node::getNext(this_00);
      if (this_00 != (_Node *)0x0) {
        pvVar1 = (void *)_Node::__Node(this_00,(uint *)((ulonglong)uVar2 >> 0x20));
        operator_delete(pvVar1);
      }
      this_01 = *(_Node **)(this + 4);
      this_00 = (_Node *)uVar2;
    } while ((_Node *)uVar2 != this_01);
  }
  _Node::setPrev(this_01,(_Node *)this_01);
  _Node::setNext(*(_Node **)(this + 4),*(_Node **)(this + 4));
  return;
}

