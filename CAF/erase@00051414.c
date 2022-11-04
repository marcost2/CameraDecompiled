
/* android::List<qcamera::PendingBuffersInRequest>::erase(android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>) */

void android::List<qcamera::PendingBuffersInRequest>::erase(_ListIterator param_1)

{
  _Node *p_Var1;
  _Node *p_Var2;
  void *pvVar3;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  undefined8 uVar4;
  
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getNext(p_Var1);
  p_Var2 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var2 = (_Node *)_Node::getPrev(p_Var2);
  _Node::setNext(p_Var2,p_Var1);
  _Node::setPrev(p_Var1,(_Node *)p_Var2);
  uVar4 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::getNode(in_r2);
  if ((_Node *)uVar4 != (_Node *)0x0) {
    pvVar3 = (void *)_Node::__Node((_Node *)uVar4,(uint *)((ulonglong)uVar4 >> 0x20));
    operator_delete(pvVar3);
  }
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)p_Var1);
  return;
}

