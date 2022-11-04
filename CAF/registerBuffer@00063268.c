
/* qcamera::QCamera3StreamMem::registerBuffer(native_handle const**, cam_stream_type_t) */

undefined4
qcamera::QCamera3StreamMem::registerBuffer(native_handle **param_1,cam_stream_type_t param_2)

{
  int *piVar1;
  undefined8 uVar2;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000632b4 + 0x6327a);
  local_1c = *piVar1;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(param_1 + 0x38a));
  uVar2 = QCamera3GrallocMemory::registerBuffer(param_1 + 0x185,param_2);
  android::Mutex::Autolock::_Autolock(aAStack32,(Mutex *)((ulonglong)uVar2 >> 0x20));
  if (*piVar1 == local_1c) {
    return (int)uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

