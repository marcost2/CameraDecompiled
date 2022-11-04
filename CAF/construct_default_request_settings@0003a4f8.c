
/* qcamera::QCamera3HardwareInterface::construct_default_request_settings(camera3_device const*,
   int) */

undefined4
qcamera::QCamera3HardwareInterface::construct_default_request_settings
          (camera3_device *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0003a56c + 0x3a506);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*(QCamera3HardwareInterface **)(param_1 + 0x44) == (QCamera3HardwareInterface *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0;
  }
  else {
    uVar1 = translateCapabilityToMetadata(*(QCamera3HardwareInterface **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  return uVar1;
}

