
/* qcamera::QCamera3HardwareInterface::updateFpsInPreviewBuffer(metadata_buffer_t*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::updateFpsInPreviewBuffer
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  _ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
  a_Stack60 [4];
  _ListIterator_qcamera__QCamera3ReprocessChannel__OfflineBuffer_android__List_qcamera__QCamera3ReprocessChannel__OfflineBuffer___NON_CONST_ITERATOR_
  a_Stack56 [4];
  undefined4 local_34;
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar5 = *(int **)(DAT_0003c90c + 0x3c7b8);
  local_28 = *piVar5;
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
                            *)aAStack48,(_ListIterator *)&local_34);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
      while (iVar1 != 0) {
        piVar2 = (int *)android::List<qcamera::ReprocessBuffer>::
                        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                      *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                         *)aAStack48);
        piVar2 = *(int **)(*piVar2 + 0x18);
        puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)a_Stack44);
        if ((((*puVar3 == param_2) &&
             (uVar4 = (**(code **)(*piVar2 + 0x1c))(piVar2), param_1 != (metadata_buffer_t *)0x0))
            && ((uVar4 & 2) != 0)) && (param_1[10] != (metadata_buffer_t)0x0)) {
          local_34 = *(undefined4 *)(param_1 + 0x72df0);
          android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                           *)aAStack48);
          setMetaData();
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
                              *)aAStack48,(_ListIterator *)&local_34);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
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
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

