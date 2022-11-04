
/* qcamera::QCamera3YUVChannel::timeoutFrame(unsigned int) */

undefined4 qcamera::QCamera3YUVChannel::timeoutFrame(uint param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint in_r1;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *extraout_r1_01;
  Mutex *pMVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  _ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
  a_Stack56 [4];
  undefined4 local_34;
  Autolock aAStack48 [4];
  undefined4 local_2c;
  int local_28;
  
  piVar5 = *(int **)(DAT_0005ad8c + 0x5abcc);
  local_28 = *piVar5;
  iVar6 = *(int *)(DAT_0005ad90 + 0x5abd6);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log();
  }
  iVar1 = QCamera3StreamMem::getBufferIndex((QCamera3StreamMem *)(param_1 + 0x408),in_r1);
  if (iVar1 < 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      mm_camera_debug_log();
      uVar3 = 0xffffffff;
    }
    goto LAB_0005ad74;
  }
  if (*(char *)(param_1 + 0x2ed5) == '\0') {
LAB_0005ad4c:
    QCamera3ProcessingChannel::timeoutFrame(param_1);
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log();
    }
  }
  else {
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_2c);
    android::Mutex::Autolock::Autolock(aAStack48,(Mutex *)(param_1 + 0x2ef8));
    android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
    local_2c = local_34;
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                          *)&local_2c,(_ListIterator *)&local_34);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    if (iVar1 != 0) {
      do {
        puVar2 = (uint *)android::List<qcamera::ReprocessBuffer>::
                         _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                         ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                                       *)&local_2c);
        if (*puVar2 == in_r1) break;
        android::List<qcamera::QCamera3YUVChannel::PpInfo>::
        _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
        ::operator__(a_Stack56,(int)&local_2c);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack56);
        android::List<qcamera::ReprocessBuffer>::end();
        iVar1 = android::List<qcamera::ReprocessBuffer>::
                _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::CONST_ITERATOR>
                ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___CONST_ITERATOR_
                              *)&local_2c,(_ListIterator *)&local_34);
        libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
      } while (iVar1 != 0);
    }
    android::List<qcamera::ReprocessBuffer>::end();
    iVar1 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::
            _ListIterator<qcamera::QCamera3YUVChannel::PpInfo,android::List<qcamera::QCamera3YUVChannel::PpInfo>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__QCamera3YUVChannel__PpInfo_android__List_qcamera__QCamera3YUVChannel__PpInfo___NON_CONST_ITERATOR_
                          *)&local_2c,(_ListIterator *)&local_34);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_34);
    if (iVar1 != 0) {
      pMVar4 = extraout_r1;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar4 = extraout_r1_00;
      }
LAB_0005ad40:
      android::Mutex::Autolock::_Autolock(aAStack48,pMVar4);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_2c);
      goto LAB_0005ad4c;
    }
    uVar7 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__((_ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
                          *)&local_2c);
    pMVar4 = (Mutex *)((ulonglong)uVar7 >> 0x20);
    if (*(char *)((int)uVar7 + 4) == '\0') goto LAB_0005ad40;
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log();
      pMVar4 = extraout_r1_01;
    }
    android::Mutex::Autolock::_Autolock(aAStack48,pMVar4);
    libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)&local_2c);
  }
  uVar3 = 0;
LAB_0005ad74:
  if (*piVar5 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

