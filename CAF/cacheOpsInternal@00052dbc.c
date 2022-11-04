
/* qcamera::QCamera3Memory::cacheOpsInternal(unsigned int, unsigned int, void*) */

uint __thiscall
qcamera::QCamera3Memory::cacheOpsInternal
          (QCamera3Memory *this,uint param_1,uint param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  uint uVar3;
  int *piVar4;
  uint local_40;
  int *piStack60;
  int local_34;
  undefined4 local_30;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Autolock aAStack32 [4];
  int local_1c;
  
  piVar4 = *(int **)(DAT_00052ed8 + 0x52dd0);
  local_1c = *piVar4;
  android::Mutex::Autolock::Autolock(aAStack32,(Mutex *)(this + 0x608));
  if (param_1 < 0x40) {
    piVar2 = (int *)(this + param_1 * 0x10 + 0x10);
    if (*piVar2 != 0) {
      local_28 = 0;
      local_30 = *(undefined4 *)(this + param_1 * 0x10 + 8);
      local_34 = *piVar2;
      local_24 = *(undefined4 *)(this + param_1 * 0x10 + 0x14);
      piStack60 = &local_34;
      iVar1 = *(int *)(DAT_00052ef4 + 0x52e36);
      local_40 = param_2;
      local_2c = param_3;
      if (*(int *)(iVar1 + 0x2c) != 0) {
        mm_camera_debug_log();
      }
      uVar3 = ioctl(*(int *)(this + param_1 * 0x10 + 0xc),0xc0084906,&local_40);
      piVar2 = extraout_r1_00;
      if ((0x7fffffff < uVar3) && (*(int *)(iVar1 + 0x20) != 0)) {
        piVar2 = (int *)__errno();
        strerror(*piVar2);
        mm_camera_debug_log();
        piVar2 = extraout_r1_01;
      }
      goto LAB_00052ebc;
    }
    iVar1 = *(int *)(*(int *)(DAT_00052ee8 + 0x52e9e) + 0x20);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00052edc + 0x52dec) + 0x20);
    piVar2 = extraout_r1;
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
    piVar2 = extraout_r1_02;
  }
  uVar3 = 0xffffffb5;
LAB_00052ebc:
  android::Mutex::Autolock::_Autolock(aAStack32,(Mutex *)piVar2);
  if (*piVar4 == local_1c) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

