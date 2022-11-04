
/* qcamera::QCamera3Stream::bufRelease(int) */

undefined4 __thiscall qcamera::QCamera3Stream::bufRelease(QCamera3Stream *this,int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint extraout_r1_02;
  int *piVar3;
  ulonglong uVar4;
  Autolock aAStack28 [4];
  int local_18;
  
  piVar3 = *(int **)(DAT_0005630c + 0x56226);
  local_18 = *piVar3;
  android::Mutex::Autolock::Autolock(aAStack28,(Mutex *)(this + 0x27c));
  uVar2 = extraout_r1;
  if ((param_1 < (int)(uint)(byte)this[0x34]) && (*(int *)(this + 0xd0) != 0)) {
    uVar2 = 0x218;
    if (*(int *)(param_1 * 0x218 + *(int *)(this + 0xd0) + 0x210) != 0) {
      iVar1 = *(int *)(this + 0x30);
      if (iVar1 == 0) {
        if (*(int *)(*(int *)(DAT_00056310 + 0x562bc) + 0x3c) == 0) {
          uVar4 = 0x218ffffffed;
        }
        else {
          mm_camera_debug_log();
          uVar4 = CONCAT44(extraout_r1_01,0xffffffed);
        }
      }
      else {
        uVar4 = (**(code **)(iVar1 + 8))(param_1,0xffffffff,3,*(undefined4 *)(iVar1 + 0xc));
        if ((int)uVar4 < 0) {
          if (*(int *)(*(int *)(DAT_0005631c + 0x562e2) + 0x3c) != 0) {
            mm_camera_debug_log();
            uVar4 = uVar4 & 0xffffffff | (ulonglong)extraout_r1_02 << 0x20;
          }
        }
        else {
          uVar4 = uVar4 & 0xffffffff;
          *(undefined4 *)(param_1 * 0x218 + *(int *)(this + 0xd0) + 0x210) = 0;
        }
      }
      goto LAB_000562a2;
    }
    if (*(int *)(*(int *)(DAT_00056328 + 0x56284) + 0x3c) != 0) {
      mm_camera_debug_log();
      uVar2 = extraout_r1_00;
    }
  }
  uVar4 = CONCAT44(uVar2,0xffffffb5);
LAB_000562a2:
  android::Mutex::Autolock::_Autolock(aAStack28,(Mutex *)(uVar4 >> 0x20));
  if (*piVar3 == local_18) {
    return (int)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

