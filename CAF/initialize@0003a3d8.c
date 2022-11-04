
/* qcamera::QCamera3HardwareInterface::initialize(camera3_device const*, camera3_callback_ops
   const*) */

undefined4
qcamera::QCamera3HardwareInterface::initialize
          (camera3_device *param_1,camera3_callback_ops *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0003a44c + 0x3a3e6);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*(camera3_device **)(param_1 + 0x44) == (camera3_device *)0x0) {
    if (*(int *)(iVar2 + 0x20) != 0) {
      mm_camera_debug_log();
    }
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = initialize(*(camera3_device **)(param_1 + 0x44),param_2);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log();
    }
  }
  return uVar1;
}

