
/* int 
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::distance<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>(android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>) const */

int __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
distance_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_
          (List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *this,_ListIterator param_1,
          _ListIterator param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)param_1,(_ListIterator *)param_2);
  iVar2 = 0;
  while (iVar1 != 0) {
    _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_
                  *)param_1);
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)param_1,(_ListIterator *)param_2);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

