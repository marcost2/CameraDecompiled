
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE()
    */

_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___CONST_ITERATOR_
* __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::
_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___CONST_ITERATOR_
             *this)

{
  undefined4 uVar1;
  
  uVar1 = qcamera::QCamera3Stream::getStreamInfo(*(QCamera3Stream **)this);
  *(undefined4 *)this = uVar1;
  return this;
}

