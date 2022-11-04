
/* qcamera::QCamera3HardwareInterface::setBufferErrorStatus(qcamera::QCamera3Channel*, unsigned int,
   camera3_buffer_status) */

void qcamera::QCamera3HardwareInterface::setBufferErrorStatus
               (QCamera3Channel *param_1,uint param_2,camera3_buffer_status param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  camera3_buffer_status *pcVar3;
  int *piVar4;
  AbstractUnwindCursor aAStack56 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
  a_Stack52 [4];
  _ListIterator a_Stack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_00050f58 + 0x50e66);
  local_28 = *piVar1;
  if (*(int *)(*(int *)(DAT_00050f5c + 0x50e72) + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x388));
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar2 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,a_Stack48);
  if (iVar2 != 0) {
    do {
      pcVar3 = (camera3_buffer_status *)
               android::List<unsigned_int>::
               _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
               operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)a_Stack44);
      if (*pcVar3 == param_3) {
        android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
        android::List<qcamera::ReprocessBuffer>::end();
        while (iVar2 = android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                       ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                     *)a_Stack52,(_ListIterator *)aAStack56), iVar2 != 0) {
          piVar4 = (int *)android::List<unsigned_int>::
                          _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                          ::operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                                       *)a_Stack52);
          if (*(uint *)(*piVar4 + 0x18) == param_2) {
            piVar4[2] = 1;
          }
          android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
          _ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
          ::operator__(a_Stack52);
        }
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
      }
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack44);
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                               *)a_Stack44,a_Stack48);
    } while (iVar2 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x388));
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

