
/* android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(int)
    */

void __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
_ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
             *this,int param_1)

{
  undefined4 uVar1;
  
  List<unsigned_int>::_Node::_Node((_Node *)this,(uint *)param_1);
  uVar1 = List<qcamera::ReprocessBuffer>::_Node::getNext(*(_Node **)param_1);
  *(undefined4 *)param_1 = uVar1;
  return;
}

