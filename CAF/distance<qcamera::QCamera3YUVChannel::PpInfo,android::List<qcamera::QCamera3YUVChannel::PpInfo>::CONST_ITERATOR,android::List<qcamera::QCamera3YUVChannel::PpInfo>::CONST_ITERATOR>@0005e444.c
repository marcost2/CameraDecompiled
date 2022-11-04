
/* int 
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::distance<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>(android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::_ListIterator<qcamera::QCamera3YUVChannel::PpInfo,
   android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>) const */

int __thiscall
android::List<qcamera::QCamera3YUVChannel::PpInfo>::
distance_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___CONST_ITERATOR_android__List_qcamera__QCamera3YUVChannel__PpInfo___CONST_ITERATOR_
          (List_qcamera__QCamera3YUVChannel__PpInfo_ *this,_ListIterator param_1,
          _ListIterator param_2)

{
  int iVar1;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  *this_00;
  int iVar2;
  
  this_00 = (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
             *)(uint)(byte)param_1;
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(this_00,(_ListIterator *)(uint)(byte)param_2);
  iVar2 = 0;
  while (iVar1 != 0) {
    _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___CONST_ITERATOR_
                  *)this_00);
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__(this_00,(_ListIterator *)(uint)(byte)param_2);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

