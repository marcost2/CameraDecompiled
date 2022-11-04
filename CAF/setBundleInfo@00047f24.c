
/* qcamera::QCamera3HardwareInterface::setBundleInfo() */

int __thiscall qcamera::QCamera3HardwareInterface::setBundleInfo(QCamera3HardwareInterface *this)

{
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  int iVar4;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack92 [4];
  AbstractUnwindCursor aAStack88 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack84 [4];
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar3 = *(int **)(DAT_0004804c + 0x47f32);
  local_28 = *piVar3;
  iVar4 = 0;
  if (*(int *)(this + 0xdc) != 0) {
    local_50 = 0;
    uStack72 = 0;
    local_2c = 0;
    local_40 = 0;
    uStack56 = 0;
    local_30 = 0;
    iVar4 = (**(code **)((*(undefined4 **)(this + 0x50))[1] + 0x3c))
                      (**(undefined4 **)(this + 0x50),*(undefined4 *)(this + 0xdc));
    if (iVar4 == 0) {
      if (*(QCamera3Channel **)(this + 0x88) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo(*(QCamera3Channel **)(this + 0x88));
      }
      if (*(QCamera3Channel **)(this + 0x84) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo(*(QCamera3Channel **)(this + 0x84));
      }
      android::List<unsigned_int>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__(a_Stack84,(_ListIterator *)aAStack88);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack88);
      if (iVar1 != 0) {
        do {
          ppiVar2 = (int **)android::List<unsigned_int>::
                            _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                            ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                         *)a_Stack84);
          QCamera3Channel::setBundleInfo(*(QCamera3Channel **)(**ppiVar2 + 0x18));
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                    (a_Stack92,
                     (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)a_Stack84);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack92);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar1 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                   *)a_Stack84,(_ListIterator *)aAStack88);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack88);
        } while (iVar1 != 0);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack84);
      if (*(QCamera3Channel **)(this + 0x8c) != (QCamera3Channel *)0x0) {
        QCamera3Channel::setBundleInfo(*(QCamera3Channel **)(this + 0x8c));
      }
    }
    else if (*(int *)(*(int *)(DAT_00048050 + 0x47f7a) + 0x20) != 0) {
      mm_camera_debug_log();
    }
  }
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

