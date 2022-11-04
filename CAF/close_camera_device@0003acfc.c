
/* qcamera::QCamera3HardwareInterface::close_camera_device(hw_device_t*) */

undefined4 qcamera::QCamera3HardwareInterface::close_camera_device(hw_device_t *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x44);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(DAT_0003ad74 + 0x3ad08);
    if (*(int *)(iVar2 + 0x34) != 0) {
      mm_camera_debug_log();
    }
    (**(code **)(*piVar1 + 4))(piVar1);
    if (*(int *)(iVar2 + 0x34) != 0) {
      mm_camera_debug_log();
    }
    return 0;
  }
  if (*(int *)(*(int *)(DAT_0003ad74 + 0x3ad08) + 0x20) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

