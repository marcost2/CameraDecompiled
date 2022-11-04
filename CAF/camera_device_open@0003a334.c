
/* qcamera::QCamera2Factory::camera_device_open(hw_module_t const*, char const*, hw_device_t**) */

undefined4
qcamera::QCamera2Factory::camera_device_open
          (hw_module_t *param_1,char *param_2,hw_device_t **param_3)

{
  int iVar1;
  undefined4 uVar2;
  QCamera2Factory *this;
  
  if (param_1 != *(hw_module_t **)(DAT_0003a3b8 + 0x3a340)) {
    if (*(int *)(*(int *)(DAT_0003a3bc + 0x3a34a) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffda;
  }
  if (param_2 != (char *)0x0) {
    this = **(QCamera2Factory ***)(DAT_0003a3d4 + 0x3a378);
    iVar1 = atoi(param_2);
    uVar2 = __ThumbV7PILongThunk__ZN7qcamera15QCamera2Factory16cameraDeviceOpenEiPP11hw_device_t
                      (this,iVar1,param_3);
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_0003a3c8 + 0x3a396) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

