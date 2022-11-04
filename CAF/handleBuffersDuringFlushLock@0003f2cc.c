
/* qcamera::QCamera3HardwareInterface::handleBuffersDuringFlushLock(camera3_stream_buffer*) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBuffersDuringFlushLock
          (QCamera3HardwareInterface *this,camera3_stream_buffer *param_1)

{
  int iVar1;
  int *piVar2;
  _ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
  a_Stack60 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack56 [4];
  AbstractUnwindCursor aAStack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar2 = *(int **)(DAT_0003f45c + 0x3f2da);
  local_28 = *piVar2;
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  if (iVar1 != 0) {
    do {
      android::List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)a_Stack44);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
      android::List<qcamera::ReprocessBuffer>::
      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                    *)a_Stack44);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)aAStack48,(_ListIterator *)aAStack52);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
      while (iVar1 != 0) {
        iVar1 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                              *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                 *)aAStack48);
        if (*(int *)(iVar1 + 4) == *(int *)(param_1 + 4)) {
          *(int *)(this + 0x200) = *(int *)(this + 0x200) + -1;
          if (*(int *)(*(int *)(DAT_0003f460 + 0x3f3dc) + 0x2c) != 0) {
            android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)a_Stack44);
            mm_camera_debug_log();
          }
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
          goto LAB_0003f412;
        }
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
        _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
        ::operator__(a_Stack56,
                     (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                           *)aAStack48);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack56);
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)a_Stack44);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar1 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)aAStack48,(_ListIterator *)aAStack52);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                ((AbstractUnwindCursor *)
                 (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                  *)aAStack48);
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__(a_Stack60,
                   (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                         *)a_Stack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack60);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)a_Stack44,
                           (_ListIterator *)
                           (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)aAStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                ((AbstractUnwindCursor *)
                 (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                  *)aAStack48);
    } while (iVar1 != 0);
  }
LAB_0003f412:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  if (*(int *)(this + 0x200) == 0) {
    if (*(int *)(*(int *)(DAT_0003f46c + 0x3f426) + 0x2c) != 0) {
      mm_camera_debug_log();
    }
    pthread_cond_signal((pthread_cond_t *)(this + 0x38c));
  }
  if (*piVar2 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

