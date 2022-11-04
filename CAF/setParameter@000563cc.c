
/* qcamera::QCamera3Stream::setParameter(cam_stream_parm_buffer_t&) */

int __thiscall
qcamera::QCamera3Stream::setParameter(QCamera3Stream *this,cam_stream_parm_buffer_t *param_1)

{
  Mutex *extraout_r1;
  Mutex *pMVar1;
  int *piVar2;
  undefined8 uVar3;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00056434 + 0x563dc);
  local_1c = *piVar2;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x280));
  __aeabi_memcpy8((void *)(*(int *)(this + 0x14) + 0x408),param_1,0x7eb4);
  uVar3 = (**(code **)(*(int *)(this + 0x10) + 0x5c))
                    (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc)
                     ,*(int *)(this + 0x14) + 0x408);
  pMVar1 = (Mutex *)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    __aeabi_memcpy8(param_1,(void *)(*(int *)(this + 0x14) + 0x408),0x7eb4);
    pMVar1 = extraout_r1;
  }
  android::Mutex::Autolock::_Autolock(aAStack32,pMVar1);
  if (*piVar2 == local_1c) {
    return (int)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

