
/* android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin() */

void android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin(void)

{
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  *in_r0;
  _Node *p_Var1;
  int in_r1;
  
  p_Var1 = (_Node *)_Node::getNext(*(_Node **)(in_r1 + 4));
  List<qcamera::ReprocessBuffer>::
  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
  ::_ListIterator(in_r0,p_Var1);
  return;
}

