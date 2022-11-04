
/* android::List<qcamera::stream_info_t*>::erase(android::List<qcamera::stream_info_t*>::_ListIterator<qcamera::stream_info_t*,
   android::List<qcamera::stream_info_t*>::NON_CONST_ITERATOR>,
   android::List<qcamera::stream_info_t*>::_ListIterator<qcamera::stream_info_t*,
   android::List<qcamera::stream_info_t*>::NON_CONST_ITERATOR>) */

void android::List<qcamera::stream_info_t*>::erase(_ListIterator param_1)

{
  int iVar1;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  *in_r2;
  uint *in_r3;
  int *piVar2;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack44 [4];
  AbstractUnwindCursor aAStack40 [4];
  int local_24;
  
  piVar2 = *(int **)(DAT_00052bc4 + 0x52b64);
  local_24 = *piVar2;
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(in_r2,(_ListIterator *)in_r3);
  if (iVar1 != 0) {
    do {
      List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                (a_Stack44,(int)in_r2);
      List<unsigned_int>::erase((_ListIterator)aAStack40);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack40);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      iVar1 = List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__(in_r2,(_ListIterator *)in_r3);
    } while (iVar1 != 0);
  }
  List<unsigned_int>::_Node::_Node((_Node *)param_1,in_r3);
  if (*piVar2 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

