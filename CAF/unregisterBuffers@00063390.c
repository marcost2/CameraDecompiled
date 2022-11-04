
/* qcamera::QCamera3StreamMem::unregisterBuffers() */

void __thiscall qcamera::QCamera3StreamMem::unregisterBuffers(QCamera3StreamMem *this)

{
  Mutex *extraout_r1;
  int *piVar1;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_000633cc + 0x6339c);
  local_14 = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0xe28));
  QCamera3GrallocMemory::unregisterBuffers((QCamera3GrallocMemory *)(this + 0x614));
  android::Mutex::Autolock::_Autolock(aAStack24,extraout_r1);
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

