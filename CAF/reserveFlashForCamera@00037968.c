
/* qcamera::QCameraFlash::reserveFlashForCamera(int) */

undefined4 __thiscall qcamera::QCameraFlash::reserveFlashForCamera(QCameraFlash *this,int param_1)

{
  int iVar1;
  uint extraout_r1;
  char *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  bool local_6e;
  char acStack109 [21];
  char acStack88 [64];
  int local_18;
  
  piVar5 = *(int **)(DAT_00037a94 + 0x37976);
  local_18 = *piVar5;
  if (4 < (uint)param_1) {
    if (*(int *)(*(int *)(DAT_00037a98 + 0x37984) + 0x3c) == 0) {
      uVar4 = 0xffffffea;
    }
    else {
      mm_camera_debug_log();
      uVar4 = 0xffffffea;
    }
    goto LAB_00037a80;
  }
  if (this[param_1 + 0x21] == (QCameraFlash)0x0) {
    if (this[param_1 + 0x1c] != (QCameraFlash)0x0) {
      setFlashMode(this,param_1,false);
      deinitFlash(this,param_1);
    }
    this[param_1 + 0x21] = (QCameraFlash)0x1;
    local_6e = false;
    pcVar2 = acStack88;
    QCamera3HardwareInterface::getFlashInfo(param_1,&local_6e,pcVar2);
    iVar1 = *(int *)(this + 4);
    bVar6 = iVar1 != 0;
    if (bVar6) {
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (!bVar6 || iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_00037ab0 + 0x37a1e) + 0x3c) != 0) {
        mm_camera_debug_log();
      }
      uVar4 = 0xffffffda;
      goto LAB_00037a80;
    }
    if (local_6e != false) {
      snprintf(acStack109,extraout_r1,pcVar2);
      pcVar3 = *(code **)(*(int *)(this + 4) + 4);
      uVar4 = 0;
      (*pcVar3)(*(int *)(this + 4),acStack109,0,pcVar3,param_1);
      goto LAB_00037a80;
    }
    iVar1 = *(int *)(*(int *)(DAT_00037abc + 0x37a64) + 0x48);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_00037aa4 + 0x379b6) + 0x48);
  }
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    mm_camera_debug_log();
    uVar4 = 0;
  }
LAB_00037a80:
  if (*piVar5 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

