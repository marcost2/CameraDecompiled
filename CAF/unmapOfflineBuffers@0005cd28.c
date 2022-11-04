
/* qcamera::QCamera3ReprocessChannel::unmapOfflineBuffers(bool) */

int __thiscall
qcamera::QCamera3ReprocessChannel::unmapOfflineBuffers(QCamera3ReprocessChannel *this,bool param_1)

{
  uchar uVar1;
  int *piVar2;
  int iVar3;
  QCamera3Stream **ppQVar4;
  int iVar5;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar6;
  int iVar7;
  QCamera3Stream *pQVar8;
  undefined8 uVar9;
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack76 [4];
  _Node a_Stack72 [4];
  AbstractUnwindCursor aAStack68 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack64 [4];
  _Node a_Stack60 [4];
  AbstractUnwindCursor aAStack56 [4];
  AbstractUnwindCursor aAStack52 [4];
  uint uStack48;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar2 = *(int **)(DAT_0005cfd4 + 0x5cd38);
  local_28 = *piVar2;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0xa4));
  uVar9 = android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::empty
                    ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x94));
  pMVar6 = (Mutex *)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 == 0) {
    android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
    android::List<qcamera::ReprocessBuffer>::end();
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&uStack48,(_ListIterator *)aAStack52);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
    iVar7 = 0;
    if (iVar3 == 0) {
      if (param_1 != false) goto LAB_0005ce48;
    }
    else {
      iVar3 = *(int *)(DAT_0005cfd8 + 0x5cd92);
      do {
        ppQVar4 = (QCamera3Stream **)
                  android::List<unsigned_int>::
                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                  operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                             *)&uStack48);
        pQVar8 = *ppQVar4;
        if (pQVar8 != (QCamera3Stream *)0x0) {
          iVar7 = android::List<unsigned_int>::
                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                  operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                             *)&uStack48);
          uVar1 = *(uchar *)(iVar7 + 4);
          iVar7 = android::List<unsigned_int>::
                  _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                  operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                             *)&uStack48);
          iVar7 = QCamera3Stream::unmapBuf(pQVar8,uVar1,*(uint *)(iVar7 + 8),-1);
          if ((iVar7 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
            mm_camera_debug_log();
          }
          if (*(int *)(iVar3 + 0x2c) != 0) {
            android::List<unsigned_int>::
            _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                      ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                        *)&uStack48);
            mm_camera_debug_log();
          }
        }
        if (param_1 == false) {
          android::List<unsigned_int>::_Node::_Node(a_Stack60,&uStack48);
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase
                    ((_ListIterator)aAStack56);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
          goto LAB_0005ce72;
        }
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
        _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
        ::operator__(a_Stack64,(int)&uStack48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack64);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar5 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&uStack48,(_ListIterator *)aAStack52);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
      } while (iVar5 != 0);
LAB_0005ce48:
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
                ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x94));
    }
LAB_0005ce72:
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack48);
    pMVar6 = extraout_r1;
  }
  else {
    iVar7 = 0;
  }
  android::Mutex::Autolock::_Autolock(aAStack44,pMVar6);
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0xa8));
  uVar9 = android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::empty
                    ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x9c));
  pMVar6 = (Mutex *)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 != 0) goto LAB_0005cfb6;
  android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&uStack48,(_ListIterator *)aAStack52);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
  if (iVar3 == 0) {
    if (param_1 != false) goto LAB_0005cf86;
  }
  else {
    iVar3 = *(int *)(DAT_0005cfec + 0x5ced0);
    do {
      ppQVar4 = (QCamera3Stream **)
                android::List<unsigned_int>::
                _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)&uStack48);
      pQVar8 = *ppQVar4;
      if (pQVar8 != (QCamera3Stream *)0x0) {
        iVar7 = android::List<unsigned_int>::
                _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)&uStack48);
        uVar1 = *(uchar *)(iVar7 + 4);
        iVar7 = android::List<unsigned_int>::
                _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
                operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                           *)&uStack48);
        iVar7 = QCamera3Stream::unmapBuf(pQVar8,uVar1,*(uint *)(iVar7 + 8),-1);
        if ((iVar7 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
          mm_camera_debug_log();
        }
        if (*(int *)(iVar3 + 0x2c) != 0) {
          android::List<unsigned_int>::
          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::operator_
                    ((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *)
                     &uStack48);
          mm_camera_debug_log();
        }
      }
      if (param_1 == false) {
        android::List<unsigned_int>::_Node::_Node(a_Stack72,&uStack48);
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::erase
                  ((_ListIterator)aAStack68);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack68);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack72);
        goto LAB_0005cfb0;
      }
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
      _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
      ::operator__(a_Stack76,(int)&uStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack76);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar5 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&uStack48,(_ListIterator *)aAStack52);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
    } while (iVar5 != 0);
LAB_0005cf86:
    android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::clear
              ((List_qcamera__QCamera3ReprocessChannel__OfflineBuffer_ *)(this + 0x9c));
  }
LAB_0005cfb0:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack48);
  pMVar6 = extraout_r1_00;
LAB_0005cfb6:
  android::Mutex::Autolock::_Autolock(aAStack44,pMVar6);
  if (*piVar2 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

