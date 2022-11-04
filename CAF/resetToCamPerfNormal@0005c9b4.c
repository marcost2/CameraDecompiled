
/* qcamera::QCamera3ReprocessChannel::resetToCamPerfNormal(unsigned int) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::resetToCamPerfNormal(QCamera3ReprocessChannel *this,uint param_1)

{
  uint *puVar1;
  Mutex *pMVar2;
  uint uVar3;
  undefined4 uVar4;
  Vector_unsigned_int_ *this_00;
  QCamera3Stream *this_01;
  int *piVar5;
  undefined8 uVar6;
  Autolock aAStack32484 [4];
  undefined4 local_7ee0;
  undefined4 local_7edc;
  undefined auStack32472 [32432];
  int local_28;
  
  piVar5 = *(int **)(DAT_0005ca88 + 0x5c9c8);
  local_28 = *piVar5;
  android::Mutex::Autolock::Autolock((Autolock *)&local_7ee0,(Mutex *)(this + 0xf38));
  this_00 = (Vector_unsigned_int_ *)(this + 0xf24);
  uVar6 = android::Vector<unsigned_int>::size(this_00);
  pMVar2 = (Mutex *)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    uVar3 = 0;
    do {
      puVar1 = (uint *)android::Vector<unsigned_int>::operator__(this_00,uVar3);
      if (*puVar1 == param_1) {
        android::Vector<unsigned_int>::removeAt(this_00,uVar3);
      }
      uVar3 = uVar3 + 1;
      uVar6 = android::Vector<unsigned_int>::size(this_00);
      pMVar2 = (Mutex *)((ulonglong)uVar6 >> 0x20);
    } while (uVar3 < (uint)uVar6);
  }
  if (this[0xf3c] == (QCamera3ReprocessChannel)0x0) {
    android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,pMVar2);
    uVar4 = 0;
  }
  else {
    uVar6 = android::Vector<unsigned_int>::empty(this_00);
    android::Mutex::Autolock::_Autolock((Autolock *)&local_7ee0,(Mutex *)((ulonglong)uVar6 >> 0x20))
    ;
    uVar4 = 0;
    if ((int)uVar6 != 0) {
      this_01 = *(QCamera3Stream **)(this + 0x24);
      __aeabi_memclr4(auStack32472,0x7eac);
      local_7edc = 0;
      local_7ee0 = 0xca;
      uVar4 = QCamera3Stream::setParameter(this_01,(cam_stream_parm_buffer_t *)&local_7ee0);
      uVar6 = android::Mutex::Autolock::Autolock(aAStack32484,(Mutex *)(this + 0xf38));
      this[0xf3c] = (QCamera3ReprocessChannel)0x0;
      android::Mutex::Autolock::_Autolock((Autolock *)uVar6,(Mutex *)((ulonglong)uVar6 >> 0x20));
    }
  }
  if (*piVar5 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

