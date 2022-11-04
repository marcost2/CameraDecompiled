
/* qcamera::QCamera3HardwareInterface::dump(camera3_device const*, int) */

void qcamera::QCamera3HardwareInterface::dump(camera3_device *param_1,int param_2)

{
  int iVar1;
  
  getLogLevel();
  iVar1 = *(int *)(DAT_0003a688 + 0x3a62a);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  if (*(camera3_device **)(param_1 + 0x44) == (camera3_device *)0x0) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  else {
    dump(*(camera3_device **)(param_1 + 0x44),param_2);
    iVar1 = *(int *)(iVar1 + 0x2c);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
    return;
  }
  return;
}

