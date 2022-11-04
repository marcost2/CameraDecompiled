
/* android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(int)
    */

void __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
             *this,int param_1)

{
  undefined4 uVar1;
  
  List<unsigned_int>::_Node::_Node((_Node *)this,(uint *)param_1);
  uVar1 = qcamera::QCamera3Channel::getMyHandle(*(QCamera3Channel **)param_1);
  *(undefined4 *)param_1 = uVar1;
  return;
}

