
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::insert(android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>,
   qcamera::QCamera3YUVChannel::PpInfo const&) */

void android::List<qcamera::QCamera3YUVChannel::PpInfo>::insert(_ListIterator param_1,uint *param_2)

{
  _Node *this;
  _Node *p_Var1;
  _Node *p_Var2;
  _Node *this_00;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  uint *in_r3;
  
  this = (_Node *)operator_new(0x18);
  _Node::_Node(this,in_r3);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  _Node::setNext(this,p_Var1);
  p_Var2 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::getNext(p_Var2);
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::setNext((_Node *)this,p_Var1);
  p_Var2 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  this_00 = (_Node *)List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::getNext(p_Var2);
  _Node::setNext(this_00,(_Node *)this);
  p_Var2 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::setNext(p_Var2,(_Node *)this);
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this);
  return;
}

