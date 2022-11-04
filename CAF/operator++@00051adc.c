
/* android::List<qcamera::ReprocessBuffer>::_ListIterator<qcamera::ReprocessBuffer,
   android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE() */

_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_ *
__thiscall
android::List<qcamera::ReprocessBuffer>::
_ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>::
operator__(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
           *this)

{
  undefined4 uVar1;
  
  uVar1 = _Node::getNext(*(_Node **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

