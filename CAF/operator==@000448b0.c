
/* android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>::TEMPNAMEPLACEHOLDERVALUE(android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR> const&) const */

uint __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::
_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
::operator__(_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
             *this,_ListIterator *param_1)

{
  uint uVar1;
  
  uVar1 = count_leading_zeroes(*(int *)this - *(int *)param_1);
  return uVar1 >> 5;
}

