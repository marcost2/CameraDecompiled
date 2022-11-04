
/* android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::insert(android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_ListIterator<qcamera::QCamera3HardwareInterface::InternalRequest,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::NON_CONST_ITERATOR>,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_ListIterator<qcamera::QCamera3HardwareInterface::InternalRequest,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::CONST_ITERATOR>,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::_ListIterator<qcamera::QCamera3HardwareInterface::InternalRequest,
   android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::CONST_ITERATOR>) */

void android::List<qcamera::QCamera3HardwareInterface::InternalRequest>::insert
               (_ListIterator param_1,uint *param_2)

{
  int iVar1;
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  *in_r2;
  _ListIterator *in_r3;
  int *piVar2;
  _Node a_Stack44 [4];
  AbstractUnwindCursor aAStack40 [4];
  int local_24;
  
  piVar2 = *(int **)(DAT_00052a9c + 0x52a38);
  local_24 = *piVar2;
  iVar1 = List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(in_r2,in_r3);
  if (iVar1 != 0) {
    do {
      List<unsigned_int>::_Node::_Node(a_Stack44,param_2);
      List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                 in_r2);
      List<qcamera::ReprocessBuffer>::insert((_ListIterator)aAStack40,(uint *)param_1);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack40);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
      ::operator__(in_r2);
      iVar1 = List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__(in_r2,in_r3);
    } while (iVar1 != 0);
  }
  if (*piVar2 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

