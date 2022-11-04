
/* android::List<unsigned int>::prep() */

void __thiscall android::List<unsigned_int>::prep(List_unsigned_int_ *this)

{
  _Node *this_00;
  
  this_00 = (_Node *)operator_new__(0xc);
  *(_Node **)(this + 4) = this_00;
  _Node::setPrev(this_00,this_00);
  List<qcamera::ReprocessBuffer>::_Node::setPrev
            (*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

