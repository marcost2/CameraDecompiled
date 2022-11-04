
/* android::List<qcamera::ReprocessBuffer>::erase(android::List<qcamera::ReprocessBuffer>::_ListIterator<qcamera::ReprocessBuffer,
   android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>) */

void android::List<qcamera::ReprocessBuffer>::erase(_ListIterator param_1)

{
  _Node *p_Var1;
  _Node *this;
  AbstractUnwindCursor *this_00;
  void *pvVar2;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  
  p_Var1 = (_Node *)_ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  this = (_Node *)_Node::getNext(p_Var1);
  p_Var1 = (_Node *)_ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getPrev(p_Var1);
  _Node::setNext(p_Var1,this);
  _Node::setPrev((_Node *)this,(_Node *)p_Var1);
  this_00 = (AbstractUnwindCursor *)
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::getNode(in_r2);
  if (this_00 != (AbstractUnwindCursor *)0x0) {
    pvVar2 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(this_00);
    operator_delete(pvVar2);
  }
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this);
  return;
}

