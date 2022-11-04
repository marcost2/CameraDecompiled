
/* qcamera::QCamera3YUVChannel::getNextPendingCbBuffer() */

undefined4 __thiscall qcamera::QCamera3YUVChannel::getNextPendingCbBuffer(QCamera3YUVChannel *this)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  Mutex *extraout_r1;
  Mutex *extraout_r1_00;
  Mutex *pMVar5;
  Mutex *extraout_r1_01;
  Mutex *extraout_r1_02;
  QCamera3Stream *pQVar6;
  native_handle **this_00;
  uint unaff_r9;
  int *piVar7;
  undefined8 uVar8;
  AbstractUnwindCursor aAStack64 [4];
  native_handle *pnStack60;
  AbstractUnwindCursor aAStack56 [4];
  AbstractUnwindCursor aAStack52 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  a_Stack48 [4];
  _ListIterator_qcamera__ReprocessBuffer_android__List_qcamera__ReprocessBuffer___NON_CONST_ITERATOR_
  a_Stack44 [4];
  Autolock aAStack40 [4];
  int local_24;
  
  piVar7 = *(int **)(DAT_0005abac + 0x5aa36);
  local_24 = *piVar7;
  android::Mutex::Autolock::Autolock(aAStack40,(Mutex *)(this + 0x2ef8));
  uVar8 = android::List<qcamera::QCamera3YUVChannel::PpInfo>::size
                    ((List_qcamera__QCamera3YUVChannel__PpInfo_ *)(this + 0x2efc));
  pMVar5 = (Mutex *)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 == 0) {
LAB_0005ab80:
    android::Mutex::Autolock::_Autolock(aAStack40,pMVar5);
    uVar4 = 0;
  }
  else {
    android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
    iVar2 = android::List<qcamera::ReprocessBuffer>::
            _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
            ::operator__(a_Stack44);
    if (*(char *)(iVar2 + 4) == '\0') {
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
LAB_0005ab16:
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__(a_Stack44);
      iVar2 = *(int *)(iVar2 + 0xc);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      pMVar5 = extraout_r1_01;
      if (iVar2 == 0) goto LAB_0005ab80;
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__(a_Stack44);
      pQVar6 = *(QCamera3Stream **)(iVar2 + 0xc);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      this_00 = &pnStack60;
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase((_ListIterator)this_00);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)this_00);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack64);
      pMVar5 = extraout_r1_02;
    }
    else {
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__(a_Stack48);
      cVar1 = *(char *)(iVar2 + 5);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack48);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      if (cVar1 == '\0') goto LAB_0005ab16;
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      iVar2 = android::List<qcamera::ReprocessBuffer>::
              _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
              ::operator__(a_Stack44);
      this_00 = *(native_handle ***)(iVar2 + 8);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      puVar3 = (uint *)android::List<qcamera::ReprocessBuffer>::
                       _ListIterator<qcamera::ReprocessBuffer,android::List<qcamera::ReprocessBuffer>::NON_CONST_ITERATOR>
                       ::operator__(a_Stack44);
      unaff_r9 = *puVar3;
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor((AbstractUnwindCursor *)a_Stack44);
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::begin();
      android::List<qcamera::QCamera3YUVChannel::PpInfo>::erase((_ListIterator)aAStack52);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack52);
      libunwind::AbstractUnwindCursor::_AbstractUnwindCursor(aAStack56);
      pMVar5 = extraout_r1;
      if (*(int *)(*(int *)(DAT_0005abb0 + 0x5aaf0) + 0x2c) != 0) {
        mm_camera_debug_log();
        pMVar5 = extraout_r1_00;
      }
      pQVar6 = (QCamera3Stream *)0x0;
    }
    android::Mutex::Autolock::_Autolock(aAStack40,pMVar5);
    if (pQVar6 == (QCamera3Stream *)0x0) {
      QCamera3ProcessingChannel::issueChannelCb((QCamera3ProcessingChannel *)this,this_00,unaff_r9);
    }
    else {
      QCamera3ProcessingChannel::streamCbRoutine
                ((mm_camera_super_buf_t *)this,pQVar6,*(void **)(this + 0x24));
    }
    uVar4 = 1;
  }
  if (*piVar7 == local_24) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

