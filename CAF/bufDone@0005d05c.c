
/* qcamera::QCamera3ReprocessChannel::bufDone(mm_camera_super_buf_t*) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::bufDone(QCamera3ReprocessChannel *this,uint param_1)

{
  undefined4 uVar1;
  Mutex *extraout_r1;
  int *piVar2;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar2 = *(int **)(DAT_0005d0d0 + 0x5d068);
  local_18 = *piVar2;
  if ((param_1 == 0) || (*(int *)(param_1 + 8) != 1)) {
    if (*(int *)(*(int *)(DAT_0005d0d4 + 0x5d0a2) + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffea;
  }
  else {
    android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0xb8));
    android::List<unsigned_int>::push_back((uint *)(this + 0xbc));
    android::Mutex::Autolock::_Autolock(aAStack28,extraout_r1);
    uVar1 = 0;
  }
  if (*piVar2 == local_18) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

