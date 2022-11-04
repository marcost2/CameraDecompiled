
/* qcamera::QCamera3HardwareInterface::startAllChannels() */

int __thiscall qcamera::QCamera3HardwareInterface::startAllChannels(QCamera3HardwareInterface *this)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar4 = *(int **)(DAT_00049f5c + 0x49dba);
  local_28 = *piVar4;
  iVar5 = *(int *)(DAT_00049f60 + 0x49dc4);
  if (*(int *)(iVar5 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*(int **)(this + 0x78) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(this + 0x78) + 8))();
    if (iVar1 < 0) {
      iVar5 = *(int *)(iVar5 + 0x20);
      goto joined_r0x00049f30;
    }
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
      if ((*(int **)(**ppiVar3 + 0x18) != (int *)0x0) &&
         (iVar1 = (**(code **)(**(int **)(**ppiVar3 + 0x18) + 8))(), iVar1 < 0)) {
        if (*(int *)(iVar5 + 0x20) != 0) {
          mm_camera_debug_log();
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
        goto LAB_00049f48;
      }
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
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 8))();
  }
  if ((*(int **)(this + 0x84) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(this + 0x84) + 8))(), -1 < iVar1)) {
    if ((*(int **)(this + 0x8c) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(this + 0x8c) + 8))(), -1 < iVar1)) {
      iVar5 = *(int *)(iVar5 + 0x2c);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x20);
    }
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x20);
  }
joined_r0x00049f30:
  if (iVar5 != 0) {
    mm_camera_debug_log();
  }
LAB_00049f48:
  if (*piVar4 == local_28) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

