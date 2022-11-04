
/* qcamera::PendingBuffersMap::getBufErrStatus(native_handle const**) */

int __thiscall
qcamera::PendingBuffersMap::getBufErrStatus(PendingBuffersMap *this,native_handle **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_r11;
  bool bVar5;
  AbstractUnwindCursor aAStack56 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
  a_Stack52 [4];
  _ListIterator a_Stack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar4 = *(int **)(DAT_00043be4 + 0x43ae2);
  local_28 = *piVar4;
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,a_Stack48);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar2 = *(int *)(DAT_00043be8 + 0x43b1a);
    do {
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                 a_Stack44);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      while (iVar1 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                   *)a_Stack52,(_ListIterator *)aAStack56), iVar1 != 0) {
        iVar1 = android::List<unsigned_int>::
                _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)a_Stack52);
        if (*(native_handle ***)(iVar1 + 4) == param_1) {
          iVar3 = *(int *)(iVar1 + 8) << 0x1f;
          bVar5 = iVar3 != 0;
          if (bVar5) {
            iVar3 = *(int *)(iVar2 + 0x28);
          }
          if (bVar5 && iVar3 != 0) {
            mm_camera_debug_log();
          }
          unaff_r11 = *(int *)(iVar1 + 8);
          iVar1 = 1;
          goto LAB_00043b96;
        }
        android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
        _ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
        ::operator__(a_Stack52);
      }
      iVar1 = 4;
LAB_00043b96:
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
      if (iVar1 != 4) goto LAB_00043bbe;
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack44);
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                               *)a_Stack44,a_Stack48);
    } while (iVar1 != 0);
    iVar1 = 2;
  }
LAB_00043bbe:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  iVar2 = iVar1 + -2;
  if (iVar1 + -2 != 0) {
    iVar2 = unaff_r11;
  }
  if (*piVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

