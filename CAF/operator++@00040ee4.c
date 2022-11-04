
/* android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,
   android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE()
    */

_ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
* __thiscall
android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
_ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
             *this)

{
  undefined4 uVar1;
  
  uVar1 = List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::_Node::getNext(*(_Node **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

