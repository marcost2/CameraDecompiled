
/* qcamera::QCamera3HardwareInterface::stopAllChannels() */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::stopAllChannels(QCamera3HardwareInterface *this)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_00049784 + 0x49672);
  local_28 = *piVar1;
  iVar5 = *(int *)(DAT_00049788 + 0x4967e);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  if (iVar2 != 0) {
    do {
      ppiVar3 = (int **)android::List<unsigned_int>::
                        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                        ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                     *)a_Stack44);
      if (*(int **)(**ppiVar3 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(**ppiVar3 + 0x18) + 0xc))();
      }
      piVar4 = (int *)android::List<unsigned_int>::
                      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                      operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)a_Stack44);
      *(undefined4 *)(*piVar4 + 0x10) = 0;
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                (a_Stack52,
                 (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                               *)a_Stack44,(_ListIterator *)aAStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 0xc))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 0xc))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 0xc))();
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x78) + 0xc))();
  }
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*piVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

