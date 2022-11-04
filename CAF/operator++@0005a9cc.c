
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(int)
    */

void __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::
_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
             *this,int param_1)

{
  undefined4 uVar1;
  
  List<unsigned_int>::_Node::_Node((_Node *)this,(uint *)param_1);
  uVar1 = qcamera::QCamera3Stream::getStreamInfo(*(QCamera3Stream **)param_1);
  *(undefined4 *)param_1 = uVar1;
  return;
}

