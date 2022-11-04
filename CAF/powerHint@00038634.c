
/* qcamera::QCameraPerfLock::powerHint(power_hint_t, bool) */

void __thiscall
qcamera::QCameraPerfLock::powerHint(QCameraPerfLock *this,power_hint_t param_1,bool param_2)

{
  int iVar1;
  power_hint_t *ppVar2;
  undefined4 *puVar3;
  power_hint_t pVar4;
  int *piVar5;
  _Node a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  AbstractUnwindCursor aAStack44 [4];
  uint uStack40;
  power_hint_t local_24;
  int local_20;
  
  piVar5 = *(int **)(DAT_000387c4 + 0x38646);
  local_20 = *piVar5;
  local_24 = param_1;
  if (param_2 == false) {
    android::List<unsigned_int>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&uStack40,(_ListIterator *)aAStack44);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack44);
    if (iVar1 != 0) {
      do {
        ppVar2 = (power_hint_t *)
                 android::List<unsigned_int>::
                 _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                 operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                            *)&uStack40);
        if (*ppVar2 == local_24) {
          android::List<unsigned_int>::begin();
          iVar1 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)&uStack40,(_ListIterator *)aAStack44);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack44);
          if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_000387c8 + 0x38710) + 0x24) != 0)) {
            mm_camera_debug_log();
          }
          android::List<unsigned_int>::_Node::_Node(a_Stack52,&uStack40);
          android::List<unsigned_int>::erase((_ListIterator)aAStack48);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
          break;
        }
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::CONST_ITERATOR>::operator__
                  ((_ListIterator_unsigned_int_android__List_unsigned_int___CONST_ITERATOR_ *)
                   &uStack40);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar1 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&uStack40,(_ListIterator *)aAStack44);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack44);
      } while (iVar1 != 0);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack40);
    if (local_24 != *(power_hint_t *)(this + 0x20)) goto LAB_000387b0;
    powerHintInternal(this,local_24,false);
    iVar1 = android::List<unsigned_int>::empty((List_unsigned_int_ *)(this + 0x38));
    if (iVar1 != 0) {
      this[0x24] = (QCameraPerfLock)0x0;
      *(undefined4 *)(this + 0x20) = 0;
      goto LAB_000387b0;
    }
    android::List<unsigned_int>::begin();
    puVar3 = (undefined4 *)
             android::List<unsigned_int>::
             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                       ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                         *)&uStack40);
    *(undefined4 *)(this + 0x20) = *puVar3;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack40);
    this[0x24] = (QCameraPerfLock)0x1;
    pVar4 = *(power_hint_t *)(this + 0x20);
    param_2 = true;
  }
  else {
    if ((*(power_hint_t *)(this + 0x20) == param_1) && ((QCameraPerfLock)param_2 == this[0x24]))
    goto LAB_000387b0;
    if (this[0x24] != (QCameraPerfLock)0x0) {
      powerHintInternal(this,*(power_hint_t *)(this + 0x20),false);
    }
    android::List<power_hint_t>::push_front((power_hint_t *)(this + 0x38));
    this[0x24] = (QCameraPerfLock)param_2;
    *(power_hint_t *)(this + 0x20) = local_24;
    pVar4 = local_24;
  }
  powerHintInternal(this,pVar4,param_2);
LAB_000387b0:
  if (*piVar5 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

