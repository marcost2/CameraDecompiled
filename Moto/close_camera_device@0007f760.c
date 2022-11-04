
/* qcamera::QCamera3HardwareInterface::close_camera_device(hw_device_t*) */

undefined4 qcamera::QCamera3HardwareInterface::close_camera_device(hw_device_t *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *local_130 [68];
  undefined4 local_20;
  undefined local_1c;
  int local_14;
  
  piVar4 = *(int **)(DAT_0007f828 + 0x7f770);
  local_14 = *piVar4;
  local_1c = 0;
  local_20 = 3000;
  local_130[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_130,(char *)(DAT_0007f82c + 0x7f788));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_130);
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_0007f830 + 0x7f798) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007f838 + 0x7f7f8,0x317d,DAT_0007f834 + 0x7f7f0);
    }
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = *(int *)(DAT_0007f830 + 0x7f798);
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0007f840 + 0x7f7b6,0x3181,DAT_0007f83c + 0x7f7aa,piVar1[0x18]);
    }
    (**(code **)(*piVar1 + 4))(piVar1);
    if (*(int *)(iVar3 + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_0007f848 + 0x7f7d8,0x3183,DAT_0007f844 + 0x7f7d0);
    }
    uVar2 = 0;
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_130);
  if (local_130[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_130[0] + *(int *)(*local_130[0] + -0xc)));
  }
  if (*piVar4 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

