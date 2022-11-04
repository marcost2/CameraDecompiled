
/* qcamera::QCamera3HardwareInterface::erasePendingRequest(android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::_ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,
   android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>) */

void qcamera::QCamera3HardwareInterface::erasePendingRequest(_ListIterator param_1)

{
  int iVar1;
  uint *in_r2;
  int *piVar2;
  _Node a_Stack32 [4];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0003b754 + 0x3b6ea);
  local_1c = *piVar2;
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)in_r2);
  if (*(int *)(iVar1 + 0x30) != 0) {
    iVar1 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)in_r2);
    free(*(void **)(iVar1 + 0x30));
    iVar1 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)in_r2);
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                        *)in_r2);
  if (*(int *)(iVar1 + 0x34) != 0) {
    android::List<qcamera::ReprocessBuffer>::
    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                  *)in_r2);
    free_camera_metadata();
  }
  android::List<unsigned_int>::_Node::_Node(a_Stack32,in_r2);
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::erase(param_1);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack32);
  if (*piVar2 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

