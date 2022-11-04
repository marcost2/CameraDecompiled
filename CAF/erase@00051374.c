
/* android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase(android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,
   android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>) */

void android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase(_ListIterator param_1)

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
  this = (_Node *)_Node::getNext(p_Var1);
  this_00 = (_Node *)List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                     ::getNode(in_r2);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::_Node::getNext(this_00);
  _Node::setNext(p_Var1,this);
  List<qcamera::ReprocessBuffer>::_Node::setNext((_Node *)this,(_Node *)p_Var1);
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

