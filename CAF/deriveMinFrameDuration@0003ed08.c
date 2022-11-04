
/* qcamera::QCamera3HardwareInterface::deriveMinFrameDuration() */

void __thiscall
qcamera::QCamera3HardwareInterface::deriveMinFrameDuration(QCamera3HardwareInterface *this)

{
  int iVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar5 = *(int **)(DAT_0003eef8 + 0x3ed14);
  local_28 = *piVar5;
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  if (iVar1 == 0) {
    iVar12 = 0;
    iVar13 = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    iVar13 = 0;
    iVar12 = 0;
    do {
      puVar2 = (undefined4 *)
               android::List<unsigned_int>::
               _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
               operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)a_Stack44);
      if (**(int **)*puVar2 != 1) {
        ppiVar3 = (int **)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack44);
        iVar11 = *(int *)(**ppiVar3 + 4);
        ppiVar3 = (int **)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack44);
        iVar11 = *(int *)(**ppiVar3 + 8) * iVar11;
        ppiVar3 = (int **)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack44);
        if (*(int *)(**ppiVar3 + 0xc) == 0x21) {
          if (iVar11 - iVar1 != 0 && iVar1 <= iVar11) {
            iVar1 = iVar11;
          }
        }
        else {
          ppiVar3 = (int **)android::List<unsigned_int>::
                            _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                            ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                         *)a_Stack44);
          if (((*(int *)(**ppiVar3 + 0xc) == 0x24) ||
              (ppiVar3 = (int **)android::List<unsigned_int>::
                                 _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                 ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                              *)a_Stack44), *(int *)(**ppiVar3 + 0xc) == 0x25)) ||
             (ppiVar3 = (int **)android::List<unsigned_int>::
                                _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                                ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                             *)a_Stack44), *(int *)(**ppiVar3 + 0xc) == 0x20)) {
            if (iVar11 - iVar12 != 0 && iVar12 <= iVar11) {
              iVar12 = iVar11;
            }
          }
          else if (iVar11 - iVar13 != 0 && iVar13 <= iVar11) {
            iVar13 = iVar11;
          }
        }
      }
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                (a_Stack52,
                 (int)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar11 = android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                *)a_Stack44,(_ListIterator *)aAStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
    } while (iVar11 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  if (iVar13 < iVar1) {
    iVar13 = iVar1;
  }
  iVar14 = *(int *)(DAT_0003eefc + 0x3ee28);
  iVar1 = *(int *)(this + 0x4c);
  iVar11 = *(int *)(iVar14 + iVar1 * 4);
  uVar6 = *(uint *)(iVar11 + 0x2ad8);
  if (0x27 < uVar6) {
    uVar6 = 0x28;
  }
  if (iVar12 < iVar13) {
    if (uVar6 == 0) goto LAB_0003eea0;
    iVar12 = 0x7fffffff;
    uVar9 = 0;
    do {
      iVar4 = *(int *)(iVar11 + 0x2adc + uVar9 * 8) * *(int *)(iVar11 + 0x2ae0 + uVar9 * 8);
      iVar10 = iVar12;
      if (iVar4 < iVar12) {
        iVar10 = iVar4;
      }
      if (iVar13 <= iVar4) {
        iVar12 = iVar10;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  else if (uVar6 == 0) goto LAB_0003eea0;
  piVar8 = (int *)(iVar11 + 0x2adc);
  uVar9 = 0;
  do {
    if (iVar12 == piVar8[1] * *piVar8) {
      iVar12 = piVar8[0xce];
      *(int *)(this + 0x3a8) = piVar8[0xcd];
      *(int *)(this + 0x3ac) = iVar12;
      break;
    }
    piVar8 = piVar8 + 2;
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar6);
LAB_0003eea0:
  iVar12 = *(int *)(iVar14 + iVar1 * 4);
  uVar6 = *(uint *)(iVar12 + 0x5c4);
  if (0x27 < uVar6) {
    uVar6 = 0x28;
  }
  if (uVar6 != 0) {
    uVar9 = 0;
    iVar11 = 0x5c8;
    do {
      iVar10 = iVar12 + iVar11;
      if (iVar13 == *(int *)(iVar10 + 4) * *(int *)(iVar12 + iVar11)) {
        uVar7 = *(undefined4 *)(iVar10 + 0x144);
        *(undefined4 *)(this + 0x398) = *(undefined4 *)(iVar10 + 0x140);
        *(undefined4 *)(this + 0x39c) = uVar7;
        iVar11 = *(int *)(iVar14 + iVar1 * 4) + iVar11;
        uVar7 = *(undefined4 *)(iVar11 + 0x144);
        *(undefined4 *)(this + 0x3a0) = *(undefined4 *)(iVar11 + 0x140);
        *(undefined4 *)(this + 0x3a4) = uVar7;
        break;
      }
      iVar11 = iVar11 + 8;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

