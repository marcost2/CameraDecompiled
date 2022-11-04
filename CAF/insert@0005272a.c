
/* android::List<qcamera::PendingBuffersInRequest>::insert(android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>,
   qcamera::PendingBuffersInRequest const&) */

void android::List<qcamera::PendingBuffersInRequest>::insert(_ListIterator param_1,uint *param_2)

{
  _Node *this;
  _Node *p_Var1;
  _Node *p_Var2;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  uint *in_r3;
  
  this = (_Node *)operator_new(0x20);
  _Node::_Node(this,in_r3);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  _Node::setNext(this,p_Var1);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var2 = (_Node *)_Node::getPrev(p_Var1);
  _Node::setPrev(this,p_Var2);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getPrev(p_Var1);
  _Node::setNext(p_Var1,this);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  _Node::setPrev(p_Var1,(_Node *)this);
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this);
  return;
}

