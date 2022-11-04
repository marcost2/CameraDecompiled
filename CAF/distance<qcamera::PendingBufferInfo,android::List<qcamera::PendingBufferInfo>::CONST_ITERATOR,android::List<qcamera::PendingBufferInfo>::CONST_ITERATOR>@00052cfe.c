
/* int android::List<qcamera::PendingBufferInfo>::distance<qcamera::PendingBufferInfo,
   android::List<qcamera::PendingBufferInfo>::CONST_ITERATOR,
   android::List<qcamera::PendingBufferInfo>::CONST_ITERATOR>(android::List<qcamera::PendingBufferInfo>::_ListIterator<qcamera::PendingBufferInfo,
   android::List<qcamera::PendingBufferInfo>::CONST_ITERATOR>,
   android::List<qcamera::PendingBufferInfo>::_ListIterator<qcamera::PendingBufferInfo,
   android::List<qcamera::PendingBufferInfo>::CONST_ITERATOR>) const */

int __thiscall
android::List<qcamera::PendingBufferInfo>::
distance_qcamera__PendingBufferInfo_android__List_qcamera__PendingBufferInfo___CONST_ITERATOR_android__List_qcamera__PendingBufferInfo___CONST_ITERATOR_
          (List_qcamera__PendingBufferInfo_ *this,_ListIterator param_1,_ListIterator param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)param_1,(_ListIterator *)param_2);
  iVar2 = 0;
  while (iVar1 != 0) {
    List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
    _ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
                  *)param_1);
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)param_1,(_ListIterator *)param_2);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

