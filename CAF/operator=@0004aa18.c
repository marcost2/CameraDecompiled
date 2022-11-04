
/* android::List<qcamera::stream_info_t*>::TEMPNAMEPLACEHOLDERVALUE(android::List<qcamera::stream_info_t*>
   const&) */

List_qcamera__stream_info_t__ * __thiscall
android::List<qcamera::stream_info_t*>::operator_(List_qcamera__stream_info_t__ *this,List *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *this_00;
  undefined4 uVar4;
  _Node a_Stack88 [4];
  _Node a_Stack84 [4];
  uint uStack80;
  _Node a_Stack76 [4];
  uint uStack72;
  AbstractUnwindCursor aAStack68 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack64 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack60 [4];
  uint uStack56;
  uint uStack52;
  uint uStack48;
  uint uStack44;
  int local_28;
  
  piVar3 = *(int **)(DAT_0004ab60 + 0x4aa28);
  local_28 = *piVar3;
  if (this != (List_qcamera__stream_info_t__ *)param_1) {
    List<unsigned_int>::begin();
    List<qcamera::ReprocessBuffer>::end();
    List<unsigned_int>::begin();
    List<qcamera::ReprocessBuffer>::end();
    iVar1 = List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&uStack52,(_ListIterator *)&uStack56);
    if (iVar1 != 0) {
      do {
        iVar1 = List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&uStack44,(_ListIterator *)&uStack48);
        if (iVar1 == 0) break;
        List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack60,(int)&uStack52);
        puVar2 = (undefined4 *)
                 List<unsigned_int>::
                 _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                 operator_(a_Stack60);
        uVar4 = *puVar2;
        List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack64,(int)&uStack44);
        puVar2 = (undefined4 *)
                 List<unsigned_int>::
                 _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                 operator_(a_Stack64);
        *puVar2 = uVar4;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack64);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
        iVar1 = List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&uStack52,(_ListIterator *)&uStack56);
      } while (iVar1 != 0);
    }
    iVar1 = List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&uStack52,(_ListIterator *)&uStack56);
    if (iVar1 == 0) {
      this_00 = &uStack80;
      List<unsigned_int>::_Node::_Node((_Node *)this_00,&uStack48);
      List<unsigned_int>::_Node::_Node(a_Stack84,&uStack52);
      List<unsigned_int>::_Node::_Node(a_Stack88,&uStack56);
      insert((_ListIterator)this,this_00);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack88);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack84);
    }
    else {
      this_00 = &uStack72;
      List<unsigned_int>::_Node::_Node((_Node *)this_00,&uStack44);
      List<unsigned_int>::_Node::_Node(a_Stack76,&uStack48);
      erase((_ListIterator)aAStack68);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack68);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack76);
    }
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this_00);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack56);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack52);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack48);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack44);
  }
  if (*piVar3 == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

