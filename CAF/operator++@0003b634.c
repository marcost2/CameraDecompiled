
/* android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE()
    */

_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
* __thiscall
android::List<qcamera::PendingBuffersInRequest>::
_ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
             *this)

{
  undefined4 uVar1;
  
  uVar1 = _Node::getNext(*(_Node **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

