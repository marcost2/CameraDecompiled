
/* qcamera::QCamera3HardwareInterface::process_capture_request(camera3_device const*,
   camera3_capture_request*) */

undefined4
qcamera::QCamera3HardwareInterface::process_capture_request
          (camera3_device *param_1,camera3_capture_request *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0007ee90 + 0x7ee2a);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007ee98 + 0x7ee42,0x3107,DAT_0007ee94 + 0x7ee3a);
  }
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007eea0 + 0x7ee84,0x310b,DAT_0007ee9c + 0x7ee7c);
    }
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = orchestrateRequest(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007eea8 + 0x7ee68,0x3110,DAT_0007eea4 + 0x7ee60);
    }
  }
  return uVar1;
}

