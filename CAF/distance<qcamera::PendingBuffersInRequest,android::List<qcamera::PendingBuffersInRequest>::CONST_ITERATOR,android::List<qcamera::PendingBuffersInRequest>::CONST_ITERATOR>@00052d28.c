
/* int android::List<qcamera::PendingBuffersInRequest>::distance<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::CONST_ITERATOR,
   android::List<qcamera::PendingBuffersInRequest>::CONST_ITERATOR>(android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::CONST_ITERATOR>,
   android::List<qcamera::PendingBuffersInRequest>::_ListIterator<qcamera::PendingBuffersInRequest,
   android::List<qcamera::PendingBuffersInRequest>::CONST_ITERATOR>) const */

int __thiscall
android::List<qcamera::PendingBuffersInRequest>::
distance_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___CONST_ITERATOR_android__List_qcamera__PendingBuffersInRequest___CONST_ITERATOR_
          (List_qcamera__PendingBuffersInRequest_ *this,_ListIterator param_1,_ListIterator param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)param_1,(_ListIterator *)param_2);
  iVar2 = 0;
  while (iVar1 != 0) {
    _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                  *)param_1);
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)param_1,(_ListIterator *)param_2);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

