
/* qcamera::QCamera3ProcessingChannel::putStreamBufs() */

void __thiscall qcamera::QCamera3ProcessingChannel::putStreamBufs(QCamera3ProcessingChannel *this)

{
  Mutex *pMVar1;
  int *piVar2;
  undefined8 uVar3;
  uint local_24;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00057928 + 0x578ba);
  local_1c = *piVar2;
  QCamera3StreamMem::unregisterBuffers((QCamera3StreamMem *)(this + 0x408));
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x2ebc));
  android::List<unsigned_int>::clear((List_unsigned_int_ *)(this + 0x2eb4));
  local_24 = 0;
  uVar3 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x2084));
  pMVar1 = (Mutex *)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    do {
      android::List<unsigned_int>::push_back((uint *)(this + 0x2eb4));
      local_24 = local_24 + 1;
      uVar3 = QCamera3StreamMem::getCnt((QCamera3StreamMem *)(this + 0x2084));
      pMVar1 = (Mutex *)((ulonglong)uVar3 >> 0x20);
    } while (local_24 < (uint)uVar3);
  }
  android::Mutex::Autolock::_Autolock(aAStack32,pMVar1);
  if (*piVar2 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

