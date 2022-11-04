
/* android::List<unsigned int>::erase(android::List<unsigned int>::_ListIterator<unsigned int,
   android::List<unsigned int>::NON_CONST_ITERATOR>) */

void android::List<unsigned_int>::erase(_ListIterator param_1)

{
  _Node *p_Var1;
  _Node *this;
  _Node *this_00;
  AbstractUnwindCursor *this_01;
  void *pvVar2;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  this = (_Node *)List<qcamera::ReprocessBuffer>::_Node::getPrev(p_Var1);
  this_00 = (_Node *)List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getPrev(this_00);
  List<qcamera::ReprocessBuffer>::_Node::setPrev(p_Var1,this);
  _Node::setPrev(this,(_Node *)p_Var1);
  this_01 = (AbstractUnwindCursor *)
            List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::getNode(in_r2);
  if (this_01 != (AbstractUnwindCursor *)0x0) {
    pvVar2 = (void *)libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(this_01);
    operator_delete(pvVar2);
  }
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this);
  return;
}

