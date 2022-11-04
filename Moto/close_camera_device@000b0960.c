
/* qcamera::QCamera2HardwareInterface::close_camera_device(hw_device_t*) */

undefined4 qcamera::QCamera2HardwareInterface::close_camera_device(hw_device_t *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_130 [68];
  undefined4 local_20;
  undefined local_1c;
  int local_18;
  
  piVar4 = *(int **)(DAT_000b0a90 + 0xb0970);
  local_18 = *piVar4;
  android::CameraHalWatchdog::GlobalWatchdog::stop((ulong)"s19PREVIEW_FORMATS_MAPE",false);
  local_1c = 0;
  local_20 = 0;
  local_130[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_130,(char *)(DAT_000b0a94 + 0xb0992));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_130);
  piVar3 = *(int **)(DAT_000b0a98 + 0xb09a0);
  if (*piVar3 != 0) {
    if ((**(byte **)(DAT_000b0a9c + 0xb09aa) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0aa0 + 0xb09b8) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000b0aa4 + 0xb0a7c);
    }
  }
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_000b0aa8 + 0xb09c6) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b0ab0 + 0xb0a26,0x74b,DAT_000b0aac + 0xb0a1e);
    }
    uVar2 = 0xffffffea;
  }
  else {
    iVar5 = *(int *)(DAT_000b0aa8 + 0xb09c6);
    if (*(int *)(iVar5 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b0ab8 + 0xb09e4,0x74e,DAT_000b0ab4 + 0xb09d8,piVar1[0x17]);
    }
    (**(code **)(*piVar1 + 0x24))(piVar1);
    if (*(int *)(iVar5 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b0ac0 + 0xb0a06,0x750,DAT_000b0abc + 0xb09fe);
    }
    uVar2 = 0;
  }
  if (*piVar3 != 0) {
    if ((**(byte **)(DAT_000b0ac4 + 0xb0a36) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000b0ac8 + 0xb0a44) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_130);
  if (local_130[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_130[0] + *(int *)(*local_130[0] + -0xc)));
  }
  if (*piVar4 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

