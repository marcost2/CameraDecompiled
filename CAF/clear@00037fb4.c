
/* android::List<unsigned int>::clear() */

void __thiscall android::List<unsigned_int>::clear(List_unsigned_int_ *this)

{
  _Node *this_00;
  _Node *this_01;
  _Node *p_Var1;
  void *pvVar2;
  
  this_00 = (_Node *)List<qcamera::ReprocessBuffer>::_Node::getPrev(*(_Node **)(this + 4));
  this_01 = *(_Node **)(this + 4);
  if (this_00 != this_01) {
    do {
      p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::_Node::getPrev((_Node *)this_00);
      if (this_00 != (_Node *)0x0) {
        pvVar2 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                                   ((AbstractUnwindCursor *)this_00);
        operator_delete(pvVar2);
      }
      this_01 = *(_Node **)(this + 4);
      this_00 = p_Var1;
    } while (p_Var1 != this_01);
  }
  _Node::setPrev(this_01,this_01);
  List<qcamera::ReprocessBuffer>::_Node::setPrev
            (*(_Node **)(this + 4),(_Node *)*(_Node **)(this + 4));
  return;
}

