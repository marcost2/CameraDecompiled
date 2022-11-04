
/* qcamera::QCamera3ProcessingChannel::queueReprocMetadata(mm_camera_super_buf_t*, unsigned int,
   bool) */

undefined4 __thiscall
qcamera::QCamera3ProcessingChannel::queueReprocMetadata
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1,uint param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  Mutex *extraout_r1;
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack72 [4];
  _Node a_Stack68 [4];
  AbstractUnwindCursor aAStack64 [4];
  _Node a_Stack60 [4];
  AbstractUnwindCursor aAStack56 [4];
  uint local_34;
  uint local_30;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_00058630 + 0x584e8);
  local_28 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x2ec0));
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_30);
  iVar2 = android::List<unsigned_int>::size((List_unsigned_int_ *)(this + 0x2ecc));
  if (iVar2 != 0) {
    android::List<unsigned_int>::begin();
    local_30 = local_34;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar2 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&local_30,(_ListIterator *)&local_34);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    if (iVar2 != 0) {
      do {
        puVar3 = (uint *)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                      *)&local_30);
        if (*puVar3 == param_2) {
          android::List<unsigned_int>::_Node::_Node(a_Stack60,&local_30);
          android::List<unsigned_int>::erase((_ListIterator)aAStack56);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
          uVar4 = metadataBufDone(this,param_1);
          goto LAB_000585e0;
        }
        puVar3 = (uint *)android::List<unsigned_int>::
                         _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                         ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                      *)&local_30);
        if (*puVar3 < param_2) {
          puVar3 = (uint *)android::List<unsigned_int>::
                           _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                           ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                        *)&local_30);
          iVar2 = QCamera3PostProcessor::releaseReprocMetaBuffer
                            ((QCamera3PostProcessor *)(this + 0x90),*puVar3);
          if (iVar2 != 0) {
            android::List<unsigned_int>::_Node::_Node(a_Stack68,&local_30);
            android::List<unsigned_int>::erase((_ListIterator)aAStack64);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
            libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                      ((AbstractUnwindCursor *)a_Stack68);
          }
        }
        android::List<unsigned_int>::
        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator__
                  (a_Stack72,(int)&local_30);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack72);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar2 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_30,(_ListIterator *)&local_34);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
      } while (iVar2 != 0);
    }
  }
  uVar4 = QCamera3PostProcessor::processPPMetadata
                    ((QCamera3PostProcessor *)(this + 0x90),param_1,param_2,param_3);
LAB_000585e0:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_30);
  android::Mutex::Autolock::_Autolock(aAStack44,extraout_r1);
  if (*piVar1 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

