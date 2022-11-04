
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::erase(android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>) */

void android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::erase
               (_ListIterator param_1)

{
  QCamera3Channel *this;
  _Node *this_00;
  _Node *p_Var1;
  void *pvVar2;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r2;
  undefined8 uVar3;
  
  this = (QCamera3Channel *)
         List<qcamera::ReprocessBuffer>::
         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
         ::getNode(in_r2);
  this_00 = (_Node *)qcamera::QCamera3Channel::getMyHandle(this);
  p_Var1 = (_Node *)List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::getNode(in_r2);
  p_Var1 = (_Node *)_Node::getPrev(p_Var1);
  _Node::setNext(p_Var1,this_00);
  _Node::setPrev((_Node *)this_00,(_Node *)p_Var1);
  uVar3 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::getNode(in_r2);
  if ((_Node *)uVar3 != (_Node *)0x0) {
    pvVar2 = (void *)_Node::__Node((_Node *)uVar3,(uint *)((ulonglong)uVar3 >> 0x20));
    operator_delete(pvVar2);
  }
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                   *)param_1,(_Node *)this_00);
  return;
}

