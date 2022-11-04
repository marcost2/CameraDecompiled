
/* qcamera::QCamera3HardwareInterface::initialize(camera3_device const*, camera3_callback_ops
   const*) */

undefined4
qcamera::QCamera3HardwareInterface::initialize
          (camera3_device *param_1,camera3_callback_ops *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0007ec20 + 0x7eb68);
  local_1c = *piVar3;
  iVar2 = *(int *)(DAT_0007ec24 + 0x7eb76);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ec2c + 0x7eb8e,0x30a7,DAT_0007ec28 + 0x7eb86);
  }
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_0007ec30 + 0x7eba4));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007ec38 + 0x7ebec,0x30ae,DAT_0007ec34 + 0x7ebe4);
    }
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = initialize(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007ec40 + 0x7ebd0,0x30b3,DAT_0007ec3c + 0x7ebc8);
    }
  }
  android::CameraHalWatchdog::AutoWatchdog::stopWatchdog((AutoWatchdog *)local_138);
  if (local_138[0] != (int *)0x0) {
    android::RefBase::decStrong((void *)((int)local_138[0] + *(int *)(*local_138[0] + -0xc)));
  }
  if (*piVar3 == local_1c) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

