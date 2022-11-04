
/* qcamera::QCamera2Factory::open_legacy(hw_module_t const*, char const*, unsigned int,
   hw_device_t**) */

undefined4
qcamera::QCamera2Factory::open_legacy
          (hw_module_t *param_1,char *param_2,uint param_3,hw_device_t **param_4)

{
  int iVar1;
  undefined4 uVar2;
  hw_device_t **pphVar3;
  
  pphVar3 = *(hw_device_t ***)(DAT_0003a0b0 + 0x3a044);
  if ((hw_device_t **)param_1 != pphVar3) {
    if (*(int *)(*(int *)(DAT_0003a0b4 + 0x3a04e) + 0x3c) != 0) {
      mm_camera_debug_log();
    }
    return 0xffffffda;
  }
  if (param_2 != (char *)0x0) {
    iVar1 = atoi(param_2);
    uVar2 = __ThumbV7PILongThunk__ZN7qcamera15QCamera2Factory10openLegacyEijPP11hw_device_t
                      (iVar1,param_3,pphVar3);
    return uVar2;
  }
  if (*(int *)(*(int *)(DAT_0003a0c0 + 0x3a08e) + 0x3c) != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

