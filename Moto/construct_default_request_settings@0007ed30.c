
/* qcamera::QCamera3HardwareInterface::construct_default_request_settings(camera3_device const*,
   int) */

undefined4
qcamera::QCamera3HardwareInterface::construct_default_request_settings
          (camera3_device *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0007edf8 + 0x7ed40);
  local_1c = *piVar3;
  iVar2 = *(int *)(DAT_0007edfc + 0x7ed4e);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ee04 + 0x7ed66,0x30e7,DAT_0007ee00 + 0x7ed5e);
  }
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_0007ee08 + 0x7ed7c));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007ee10 + 0x7edc4,0x30ef,DAT_0007ee0c + 0x7edbc);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = translateCapabilityToMetadata(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007ee18 + 0x7eda8,0x30f5,DAT_0007ee14 + 0x7eda0);
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

