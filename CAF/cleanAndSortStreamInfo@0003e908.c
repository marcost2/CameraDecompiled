
/* qcamera::QCamera3HardwareInterface::cleanAndSortStreamInfo() */

void __thiscall
qcamera::QCamera3HardwareInterface::cleanAndSortStreamInfo(QCamera3HardwareInterface *this)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void **ppvVar4;
  int **ppiVar5;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *p_Var6;
  _Node a_Stack76 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack72 [4];
  _Node a_Stack68 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack64 [4];
  _Node a_Stack60 [4];
  uint local_38;
  uint local_34;
  uint auStack48 [2];
  int local_28;
  
  piVar1 = *(int **)(DAT_0003eb48 + 0x3e916);
  local_28 = *piVar1;
  android::List<qcamera::stream_info_t*>::List((List_qcamera__stream_info_t__ *)auStack48);
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_34,(_ListIterator *)&local_38);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
  if (iVar2 != 0) {
    do {
      piVar3 = (int *)android::List<unsigned_int>::
                      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                      operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                 *)&local_34);
      if (*(int *)(*piVar3 + 0x10) == 0) {
        ppiVar5 = (int **)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)&local_34);
        if (*(int **)(**ppiVar5 + 0x18) != (int *)0x0) {
          (**(code **)(**(int **)(**ppiVar5 + 0x18) + 4))();
        }
        ppvVar4 = (void **)android::List<unsigned_int>::
                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                           ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                        *)&local_34);
        free(*ppvVar4);
        android::List<unsigned_int>::_Node::_Node(a_Stack60,&local_34);
        android::List<unsigned_int>::erase((_ListIterator)&local_38);
        local_34 = local_38;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
        p_Var6 = (_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                 a_Stack60;
      }
      else {
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack64,(int)&local_34);
        p_Var6 = a_Stack64;
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)p_Var6);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_34,(_ListIterator *)&local_38);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_34,(_ListIterator *)&local_38);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
  if (iVar2 != 0) {
    do {
      ppiVar5 = (int **)android::List<unsigned_int>::
                        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                        ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                     *)&local_34);
      if (((*(int *)(**ppiVar5 + 0xc) == 0x24) ||
          (ppiVar5 = (int **)android::List<unsigned_int>::
                             _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                             ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                          *)&local_34), *(int *)(**ppiVar5 + 0xc) == 0x25)) ||
         (ppiVar5 = (int **)android::List<unsigned_int>::
                            _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                            ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                         *)&local_34), *(int *)(**ppiVar5 + 0xc) == 0x20)) {
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack72,(int)&local_34);
        p_Var6 = a_Stack72;
      }
      else {
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                  ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                   &local_34);
        android::List<unsigned_int>::push_back(auStack48);
        android::List<unsigned_int>::_Node::_Node(a_Stack68,&local_34);
        android::List<unsigned_int>::erase((_ListIterator)&local_38);
        local_34 = local_38;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
        p_Var6 = (_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                 a_Stack68;
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)p_Var6);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_34,(_ListIterator *)&local_38);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
  android::List<unsigned_int>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&local_34,(_ListIterator *)&local_38);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
  if (iVar2 != 0) {
    do {
      android::List<unsigned_int>::
      _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                 &local_34);
      android::List<unsigned_int>::push_back(auStack48);
      android::List<unsigned_int>::_Node::_Node(a_Stack76,&local_34);
      android::List<unsigned_int>::erase((_ListIterator)&local_38);
      local_34 = local_38;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack76);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_34,(_ListIterator *)&local_38);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_38);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
  android::List<qcamera::stream_info_t*>::operator_
            ((List_qcamera__stream_info_t__ *)(this + 0x390),(List *)auStack48);
  android::List<qcamera::stream_info_t*>::_List((List_qcamera__stream_info_t__ *)auStack48);
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

