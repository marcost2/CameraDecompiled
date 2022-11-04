
/* qcamera::QCamera3YUVChannel::handleOfflinePpCallback(unsigned int,
   android::Vector<mm_camera_super_buf_t*>&) */

undefined4 __thiscall
qcamera::QCamera3YUVChannel::handleOfflinePpCallback
          (QCamera3YUVChannel *this,uint param_1,Vector *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  Mutex *extraout_r1;
  undefined4 uVar5;
  int iVar6;
  _Node a_Stack60 [4];
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack56 [4];
  uint local_34;
  uint local_30;
  Autolock aAStack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_0005b180 + 0x5af36);
  local_28 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack44,(Mutex *)(this + 0x2ef8));
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_30);
  iVar2 = android::Vector<unsigned_int>::size((Vector_unsigned_int_ *)param_2);
  iVar6 = *(int *)(DAT_0005b184 + 0x5af5c);
  if ((iVar2 == 0) && (*(int *)(iVar6 + 0x2c) != 0)) {
    mm_camera_debug_log();
  }
  android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
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
      puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                     *)&local_30);
      if (*puVar3 == param_1) break;
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::
      _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack56,(int)&local_30);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack56);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&local_30,(_ListIterator *)&local_34);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    } while (iVar2 != 0);
  }
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
          _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                        *)&local_30,(_ListIterator *)&local_34);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
  if (iVar2 == 0) {
    iVar2 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_30);
    if (*(char *)(iVar2 + 4) == '\0') {
      iVar2 = *(int *)(iVar6 + 0x20);
    }
    else {
      uVar4 = QCamera3StreamMem::getHeapBufferIndex((QCamera3StreamMem *)(this + 0x408),param_1);
      if (-1 < (int)uVar4) {
        if (*(int *)(iVar6 + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        QCamera3StreamMem::markFrameNumber((QCamera3StreamMem *)(this + 0x408),uVar4,0xffffffff);
        local_34 = uVar4;
        android::List<unsigned_int>::push_back((uint *)(this + 0x2f08));
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
        iVar2 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_30,(_ListIterator *)&local_34);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
        if (iVar2 != 0) {
          if (*(int *)(iVar6 + 0x2c) != 0) {
            mm_camera_debug_log();
          }
          iVar2 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                *)&local_30);
          *(undefined *)(iVar2 + 5) = 1;
          uVar5 = 0xffffffea;
          goto LAB_0005b15c;
        }
        if (*(int *)(iVar6 + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        android::List<unsigned_int>::_Node::_Node(a_Stack60,&local_30);
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase((_ListIterator)&local_34);
        local_30 = local_34;
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
        goto LAB_0005b15a;
      }
      iVar2 = *(int *)(iVar6 + 0x20);
    }
    if (iVar2 == 0) {
      uVar5 = 0xffffffea;
    }
    else {
      mm_camera_debug_log();
      uVar5 = 0xffffffea;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x34) != 0) {
      mm_camera_debug_log();
    }
LAB_0005b15a:
    uVar5 = 0;
  }
LAB_0005b15c:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_30);
  android::Mutex::Autolock::_Autolock(aAStack44,extraout_r1);
  if (*piVar1 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

