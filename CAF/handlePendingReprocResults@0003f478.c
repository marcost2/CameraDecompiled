
/* qcamera::QCamera3HardwareInterface::handlePendingReprocResults(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::handlePendingReprocResults
          (QCamera3HardwareInterface *this,uint param_1)

{
  int iVar1;
  camera3_notify_msg *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingReprocessResult_android__List_qcamera__QCamera3HardwareInterface__PendingReprocessResult___NON_CONST_ITERATOR_
  a_Stack112 [4];
  _Node a_Stack108 [4];
  AbstractUnwindCursor aAStack104 [4];
  _ListIterator_qcamera__QCamera3HardwareInterface__PendingRequestInfo_android__List_qcamera__QCamera3HardwareInterface__PendingRequestInfo___NON_CONST_ITERATOR_
  a_Stack100 [4];
  _Node a_Stack96 [4];
  AbstractUnwindCursor aAStack92 [4];
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack60;
  undefined4 local_38;
  uint uStack48;
  uint uStack44;
  int local_28;
  
  piVar6 = *(int **)(DAT_0003f680 + 0x3f488);
  local_28 = *piVar6;
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::begin();
  android::List<qcamera::ReprocessBuffer>::end();
  iVar1 = android::List<qcamera::ReprocessBuffer>::
          _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
          ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                        *)&uStack44,(_ListIterator *)&local_58);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
  if (iVar1 != 0) {
    do {
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&uStack44);
      if (*(uint *)(iVar1 + 0x3c) == param_1) {
        pcVar2 = (camera3_notify_msg *)
                 android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)&uStack44);
        orchestrateNotify(this,pcVar2);
        iVar1 = *(int *)(DAT_0003f684 + 0x3f516);
        if (*(int *)(iVar1 + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::begin();
        android::List<qcamera::ReprocessBuffer>::end();
        iVar3 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&uStack48,(_ListIterator *)&local_58);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
        if (iVar3 == 0) goto LAB_0003f636;
        goto LAB_0003f56e;
      }
      android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::
      _ListIterator<qcamera::QCamera3HardwareInterface::PendingReprocessResult,android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::NON_CONST_ITERATOR>
      ::operator__(a_Stack112,(int)&uStack44);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack112);
      android::List<qcamera::ReprocessBuffer>::end();
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                            *)&uStack44,(_ListIterator *)&local_58);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    } while (iVar1 != 0);
  }
  goto LAB_0003f662;
  while( true ) {
    android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::
    _ListIterator<qcamera::QCamera3HardwareInterface::PendingRequestInfo,android::List<qcamera::QCamera3HardwareInterface::PendingRequestInfo>::NON_CONST_ITERATOR>
    ::operator__(a_Stack100,(int)&uStack48);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack100);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&uStack48,(_ListIterator *)&local_58);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_58);
    if (iVar3 == 0) break;
LAB_0003f56e:
    piVar4 = (int *)android::List<qcamera::ReprocessBuffer>::
                    _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                    ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                  *)&uStack48);
    iVar5 = *piVar4;
    iVar3 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&uStack44);
    if (iVar5 == *(int *)(iVar3 + 0x3c)) {
      if (*(int *)(iVar1 + 0x2c) != 0) {
        android::List<qcamera::ReprocessBuffer>::
        _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
        ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                      *)&uStack48);
        mm_camera_debug_log();
      }
      local_40 = 0;
      uStack60 = 0;
      local_38 = 0;
      local_50 = 1;
      local_58 = param_1;
      local_4c = android::List<qcamera::ReprocessBuffer>::
                 _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                 ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                               *)&uStack44);
      local_4c = local_4c + 0x28;
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&uStack48);
      local_48 = *(undefined4 *)(iVar1 + 0x30);
      iVar1 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                            *)&uStack48);
      local_54 = *(undefined4 *)(iVar1 + 0x34);
      local_44 = 2;
      orchestrateResult(this,(camera3_capture_result *)&local_58);
      android::List<unsigned_int>::_Node::_Node(a_Stack96,&uStack48);
      erasePendingRequest((_ListIterator)aAStack92);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack92);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack96);
      break;
    }
  }
LAB_0003f636:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack48);
  android::List<unsigned_int>::_Node::_Node(a_Stack108,&uStack44);
  android::List<qcamera::QCamera3HardwareInterface::PendingReprocessResult>::erase
            ((_ListIterator)aAStack104);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack104);
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack108);
LAB_0003f662:
  libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&uStack44);
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

