
/* qcamera::QCamera3HardwareInterface::updateTimeStampInPendingBuffers(unsigned int, long long) */

void qcamera::QCamera3HardwareInterface::updateTimeStampInPendingBuffers
               (uint param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int in_r1;
  int *piVar3;
  _ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
  a_Stack68 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack64 [4];
  AbstractUnwindCursor aAStack60 [4];
  AbstractUnwindCursor aAStack56 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack52 [12];
  int local_28;
  
  piVar3 = *(int **)(DAT_0003ca7c + 0x3c95a);
  local_28 = *piVar3;
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack52,(_ListIterator *)aAStack56);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
  if (iVar1 != 0) {
    do {
      piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                      _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                      ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                    *)a_Stack52);
      if (*piVar2 == in_r1) {
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)a_Stack52);
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)a_Stack52);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar1 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)aAStack56,(_ListIterator *)aAStack60);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack60);
        while (iVar1 != 0) {
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                           *)aAStack56);
          setMetaData();
          android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::
          _ListIterator<qcamera::QCamera3ReprocessChannel::OfflineBuffer,android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::NON_CONST_ITERATOR>
          ::operator__(a_Stack64,
                       (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                             *)aAStack56);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack64);
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)a_Stack52);
          android::List<qcamera::ReprocessBuffer>::end();
          iVar1 = android::List<qcamera::ReprocessBuffer>::
                  _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                  ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                *)aAStack56,(_ListIterator *)aAStack60);
          libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack60);
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                  ((AbstractUnwindCursor *)
                   (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                    *)aAStack56);
      }
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__(a_Stack68,
                   (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                         *)a_Stack52);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack68);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)a_Stack52,
                           (_ListIterator *)
                           (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)aAStack56);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor
                ((AbstractUnwindCursor *)
                 (_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                  *)aAStack56);
    } while (iVar1 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
  if (*piVar3 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

