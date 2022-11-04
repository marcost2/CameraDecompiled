
/* qcamera::QCamera3HardwareInterface::configure_streams(camera3_device const*,
   camera3_stream_configuration*) */

undefined4
qcamera::QCamera3HardwareInterface::configure_streams
          (camera3_device *param_1,camera3_stream_configuration *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0003a4dc + 0x3a476);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = configureStreams(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  return uVar1;
}

