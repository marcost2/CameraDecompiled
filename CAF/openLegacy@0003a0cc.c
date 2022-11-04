
/* qcamera::QCamera2Factory::openLegacy(int, unsigned int, hw_device_t**) */

undefined4 qcamera::QCamera2Factory::openLegacy(int param_1,uint param_2,hw_device_t **param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0003a138 + 0x3a0da);
  if (*(int *)(iVar2 + 0x50) != 0) {
    mm_camera_debug_log();
  }
  if ((-1 < param_1) &&
     (iVar1 = getNumberOfCameras(**(QCamera2Factory ***)(DAT_0003a144 + 0x3a100)), param_1 < iVar1))
  {
    if (*(int *)(iVar2 + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffea;
  }
  return 0xffffffed;
}

