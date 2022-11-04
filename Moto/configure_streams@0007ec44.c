
/* qcamera::QCamera3HardwareInterface::configure_streams(camera3_device const*,
   camera3_stream_configuration*) */

undefined4
qcamera::QCamera3HardwareInterface::configure_streams
          (camera3_device *param_1,camera3_stream_configuration *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_138 [68];
  undefined4 local_28;
  undefined local_24;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0007ed0c + 0x7ec54);
  local_1c = *piVar3;
  iVar2 = *(int *)(DAT_0007ed10 + 0x7ec62);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ed18 + 0x7ec7a,0x30c8,DAT_0007ed14 + 0x7ec72);
  }
  local_24 = 0;
  local_28 = 0;
  local_138[0] = (int *)0x0;
  android::CameraHalWatchdog::AutoWatchdog::setWatched
            ((AutoWatchdog *)local_138,(char *)(DAT_0007ed1c + 0x7ec90));
  android::CameraHalWatchdog::AutoWatchdog::startWatchdog((AutoWatchdog *)local_138);
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007ed24 + 0x7ecd8,0x30cf,DAT_0007ed20 + 0x7ecd0);
    }
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = configureStreams(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007ed2c + 0x7ecbc,0x30d3,DAT_0007ed28 + 0x7ecb4);
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

