
/* android::List<unsigned int>::insert(android::List<unsigned int>::_ListIterator<unsigned int,
   android::List<unsigned int>::NON_CONST_ITERATOR>, unsigned int const&) */

void android::List<unsigned_int>::insert(_ListIterator param_1,uint *param_2)

{
  _Node *this;
  _Node *p_Var1;
  _Node *this_00;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  uint *in_r3;
  
  this = (_Node *)operator_new(0xc);
  _Node::_Node(this,in_r3);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  List<qcamera::ReprocessBuffer>::_Node::setPrev((_Node *)this,p_Var1);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getPrev(p_Var1);
  _Node::setPrev(this,p_Var1);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  this_00 = (_Node *)_Node::getPrev(p_Var1);
  List<qcamera::ReprocessBuffer>::_Node::setPrev(this_00,this);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  _Node::setPrev(p_Var1,this);
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this);
  return;
}

