
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE()
    */

_ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_
* __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___CONST_ITERATOR_
             *this)

{
  undefined4 uVar1;
  
  uVar1 = qcamera::QCamera3Channel::getMyHandle(*(QCamera3Channel **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

