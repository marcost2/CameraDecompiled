
/* qcamera::PendingBuffersMap::get_num_overall_buffers() */

int qcamera::PendingBuffersMap::get_num_overall_buffers(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _ListIterator a_Stack36 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack32 [4];
  int local_1c;
  
  piVar3 = *(int **)(DAT_00048894 + 0x48820);
  local_1c = *piVar3;
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack32,a_Stack36);
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      iVar1 = android::List<unsigned_int>::
              _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                        ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)a_Stack32);
      iVar1 = android::List<qcamera::PendingBufferInfo>::size
                        ((List_qcamera__PendingBufferInfo_ *)(iVar1 + 0x10));
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack32);
      iVar2 = iVar2 + iVar1;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                               *)a_Stack32,a_Stack36);
    } while (iVar1 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack36);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack32);
  if (*piVar3 == local_1c) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

