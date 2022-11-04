
/* android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(int)
    */

void __thiscall
android::List<qcamera::PendingBuffersInRequest>::
_ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
             *this,int param_1)

{
  undefined4 uVar1;
  
  List<unsigned_int>::_Node::_Node((_Node *)this,(uint *)param_1);
  uVar1 = _Node::getNext(*(_Node **)param_1);
  *(undefined4 *)param_1 = uVar1;
  return;
}

