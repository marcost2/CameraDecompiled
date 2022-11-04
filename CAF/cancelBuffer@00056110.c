
/* qcamera::QCamera3Stream::cancelBuffer(unsigned int) */

undefined4 __thiscall qcamera::QCamera3Stream::cancelBuffer(QCamera3Stream *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar3;
  undefined8 uVar4;
  Autolock aAStack24 [4];
  int local_14;
  
  piVar3 = *(int **)(DAT_000561e4 + 0x5611e);
  local_14 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack24,(Mutex *)(this + 0x27c));
  if ((param_1 < (byte)this[0x34]) && (*(int *)(this + 0xd0) != 0)) {
    iVar2 = *(int *)(this + 0xcc);
    iVar1 = *(int *)(*(int *)(DAT_000561f4 + 0x56144) + 0x3c);
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        mm_camera_debug_log();
        iVar2 = extraout_r1_00;
      }
      uVar4 = CONCAT44(iVar2,0xffffffda);
    }
    else {
      if (iVar1 != 0) {
        getMyType(this);
        mm_camera_debug_log();
      }
      uVar4 = (**(code **)(*(int *)(this + 0x10) + 0x70))
                        (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                         *(undefined4 *)(this + 0xc),param_1);
      if ((int)uVar4 < 0) {
        uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),0x80000002);
      }
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(DAT_000561e8 + 0x5618a) + 0x3c);
    if (iVar2 != 0) {
      mm_camera_debug_log();
      iVar2 = extraout_r1;
    }
    uVar4 = CONCAT44(iVar2,0xffffffb5);
  }
  android::Mutex::Autolock::_Autolock(aAStack24,(Mutex *)((ulonglong)uVar4 >> 0x20));
  if (*piVar3 == local_14) {
    return (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

