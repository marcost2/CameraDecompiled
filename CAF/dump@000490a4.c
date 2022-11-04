
/* qcamera::QCamera3HardwareInterface::dump(int) */

void qcamera::QCamera3HardwareInterface::dump(camera3_device *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_android__List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo___NON_CONST_ITERATOR_
  a_Stack64 [4];
  AbstractUnwindCursor aAStack60 [4];
  _ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ a_Stack56 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack52 [4];
  AbstractUnwindCursor aAStack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
  a_Stack44 [4];
  int local_28;
  
  piVar1 = *(int **)(DAT_00049378 + 0x490b4);
  local_28 = *piVar1;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x388));
  dprintf(param_2,(char *)(DAT_0004937c + 0x490ca));
  uVar2 = android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::size
                    ((List_qcamera__QCamera3HardwareInterface__PendingRequestInfo_ *)
                     (param_1 + 0x198));
  dprintf(param_2,(char *)(DAT_00049380 + 0x490e2),uVar2);
  pcVar6 = (char *)(DAT_00049384 + 0x490ec);
  dprintf(param_2,pcVar6);
  dprintf(param_2,(char *)(DAT_00049388 + 0x490f8));
  dprintf(param_2,pcVar6);
  android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  if (iVar3 != 0) {
    pcVar6 = (char *)(DAT_0004938c + 0x49132);
    do {
      puVar4 = (undefined4 *)
               android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                             *)a_Stack44);
      uVar2 = *puVar4;
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)a_Stack44);
      uVar8 = *(undefined4 *)(iVar3 + 4);
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)a_Stack44);
      uVar7 = *(undefined4 *)(iVar3 + 8);
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)a_Stack44);
      uVar9 = *(undefined4 *)(iVar3 + 0x1c);
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)a_Stack44);
      dprintf(param_2,pcVar6,uVar2,uVar8,uVar7,uVar9,*(undefined4 *)(iVar3 + 0x30));
      android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack52,
                   (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                         *)a_Stack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack52);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)a_Stack44,(_ListIterator *)aAStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
    } while (iVar3 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  uVar2 = PendingBuffersMap::get_num_overall_buffers();
  dprintf(param_2,(char *)(DAT_00049390 + 0x491b8),uVar2);
  pcVar6 = (char *)(DAT_00049394 + 0x491c2);
  dprintf(param_2,pcVar6);
  dprintf(param_2,(char *)(DAT_00049398 + 0x491ce));
  dprintf(param_2,pcVar6);
  android::List<qcamera::PendingBuffersInRequest>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  if (iVar3 != 0) {
    pcVar6 = (char *)(DAT_0004939c + 0x4920a);
    do {
      puVar4 = (undefined4 *)
               android::List<unsigned_int>::
               _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>::
               operator_((_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                          *)a_Stack44);
      android::List<qcamera::QCamera3ReprocessChannel::OfflineBuffer>::begin();
      android::List<qcamera::ReprocessBuffer>::end();
      while (iVar3 = android::List<qcamera::ReprocessBuffer>::
                     _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                     ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                                   *)a_Stack56,(_ListIterator *)aAStack60), iVar3 != 0) {
        piVar5 = (int *)android::List<unsigned_int>::
                        _ListIterator<unsigned_int,android::List<unsigned_int>::NON_CONST_ITERATOR>
                        ::operator_(a_Stack56);
        uVar7 = *puVar4;
        uVar2 = (**(code **)(**(int **)(*piVar5 + 0x18) + 0x1c))();
        dprintf(param_2,pcVar6,uVar7,uVar2);
        android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::
        _ListIterator<qcamera::QCamera3HardwareInterface::RequestedBufferInfo,android::List<qcamera::QCamera3HardwareInterface::RequestedBufferInfo>::CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__QCamera3HardwareInterface__RequestedBufferInfo_android__List_qcamera__QCamera3HardwareInterface__RequestedBufferInfo___CONST_ITERATOR_
                      *)a_Stack56);
      }
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack60);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack56);
      android::List<qcamera::PendingBuffersInRequest>::
      _ListIterator<qcamera::PendingBuffersInRequest,android::List<qcamera::PendingBuffersInRequest>::NON_CONST_ITERATOR>
      ::operator__((_ListIterator_qcamera__PendingBuffersInRequest_android__List_qcamera__PendingBuffersInRequest___NON_CONST_ITERATOR_
                    *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_ *
                      )a_Stack44);
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_unsigned_int_android__List_unsigned_int___NON_CONST_ITERATOR_
                               *)a_Stack44,(_ListIterator *)aAStack48);
    } while (iVar3 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  dprintf(param_2,(char *)(DAT_000493a0 + 0x49288));
  uVar2 = android::List<qcamera::ReprocessBuffer>::size
                    ((List_qcamera__ReprocessBuffer_ *)(param_1 + 0x1a0));
  dprintf(param_2,(char *)(DAT_000493a4 + 0x492a0),uVar2);
  pcVar6 = (char *)(DAT_000493a8 + 0x492aa);
  dprintf(param_2,pcVar6);
  dprintf(param_2,(char *)(DAT_000493ac + 0x492b6));
  dprintf(param_2,pcVar6);
  android::List<qcamera::ReprocessBuffer>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar3 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__(a_Stack44,(_ListIterator *)aAStack48);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
  if (iVar3 != 0) {
    pcVar6 = (char *)(DAT_000493b0 + 0x492f0);
    do {
      puVar4 = (undefined4 *)
               android::List<qcamera::ReprocessBuffer>::
               _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
               ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                             *)a_Stack44);
      uVar2 = *puVar4;
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)a_Stack44);
      dprintf(param_2,pcVar6,uVar2,*(undefined4 *)(iVar3 + 4));
      android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo,android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::NON_CONST_ITERATOR>
      ::operator__(a_Stack64,
                   (int)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                         *)a_Stack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack64);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar3 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)(_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)a_Stack44,(_ListIterator *)aAStack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack48);
    } while (iVar3 != 0);
  }
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
  dprintf(param_2,(char *)(DAT_000493b4 + 0x49346));
  dprintf(param_2,(char *)(DAT_000493b8 + 0x49350));
  param_1[0x3b4] = (camera3_device)0x1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x388));
  if (*piVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

