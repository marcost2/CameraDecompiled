
/* qcamera::QCamera3HardwareInterface::getReprocessibleOutputStreamId(unsigned int&) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::getReprocessibleOutputStreamId
          (QCamera3HardwareInterface *this,uint *param_1)

{
  int iVar1;
  int **ppiVar2;
  QCamera3Stream *this_00;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar6 = *(int **)(DAT_0004a4dc + 0x4a37a);
  local_28 = *piVar6;
  if ((*(int *)(this + 0x164) < 1) || (*(int *)(this + 0x168) < 1)) {
    if (*(int *)(*(int *)(DAT_0004a4f0 + 0x4a498) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    android::List<unsigned_int>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__(a_Stack44,(_ListIterator *)aAStack48);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
    if (iVar1 != 0) {
      iVar1 = *(int *)(DAT_0004a4e0 + 0x4a3ca);
      do {
        ppiVar2 = (int **)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack44);
        iVar5 = **ppiVar2;
        if (((*(int *)(iVar5 + 4) == *(int *)(this + 0x164)) &&
            (*(int *)(iVar5 + 8) == *(int *)(this + 0x168))) &&
           (*(int *)(iVar5 + 0xc) == *(int *)(this + 0x16c))) {
          if (*(int *)(iVar1 + 0x2c) != 0) {
            android::List<unsigned_int>::
            _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                      ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                        *)a_Stack44);
            mm_camera_debug_log();
            if (*(int *)(iVar1 + 0x2c) != 0) {
              mm_camera_debug_log();
            }
          }
          this_00 = *(QCamera3Stream **)(iVar5 + 0x18);
          bVar7 = this_00 != (QCamera3Stream *)0x0;
          if (bVar7) {
            this_00 = *(QCamera3Stream **)(this_00 + 0x24);
          }
          if (bVar7 && this_00 != (QCamera3Stream *)0x0) {
            uVar4 = QCamera3Stream::getMyServerID(this_00);
            *param_1 = uVar4;
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack44);
            uVar3 = 0;
            goto LAB_0004a4b6;
          }
        }
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack52,
                   (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                         *)a_Stack44);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)a_Stack44,(_ListIterator *)aAStack48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
      } while (iVar5 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  }
  uVar3 = 0xfffffffe;
LAB_0004a4b6:
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

