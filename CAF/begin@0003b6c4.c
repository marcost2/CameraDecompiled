
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin() const */

void android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin(void)

{
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r0;
  _Node *p_Var1;
  int in_r1;
  
  p_Var1 = (_Node *)qcamera::QCamera3Channel::getMyHandle(*(QCamera3Channel **)(in_r1 + 4));
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator(in_r0,p_Var1);
  return;
}

