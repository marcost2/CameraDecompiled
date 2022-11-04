
/* qcamera::QCamera2Factory::open_legacy(hw_module_t const*, char const*, unsigned int,
   hw_device_t**) */

undefined4
qcamera::QCamera2Factory::open_legacy
          (hw_module_t *param_1,char *param_2,uint param_3,hw_device_t **param_4)

{
  hw_module_t *phVar1;
  int iVar2;
  undefined4 uVar3;
  
  phVar1 = *(hw_module_t **)(DAT_0007e6cc + 0x7e642);
  if (param_1 != phVar1) {
    if (*(int *)(*(int *)(DAT_0007e6d0 + 0x7e64c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007e6d8 + 0x7e668,0x122,DAT_0007e6d4 + 0x7e65a,param_1,phVar1);
    }
    return 0xffffffda;
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)(*(int *)(DAT_0007e6dc + 0x7e694) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007e6e4 + 0x7e6ac,0x126,DAT_0007e6e0 + 0x7e6a4);
    }
    return 0xffffffea;
  }
  if (**(int **)(DAT_0007e6e8 + 0x7e67c) == 0) {
    iVar2 = atoi(param_2);
    uVar3 = (*(code *)PTR_openLegacy_00119300)(iVar2,param_3,param_4);
    return uVar3;
  }
  uVar3 = (*(code *)PTR_open_legacy_001192fc)(phVar1,param_2,param_3,param_4);
  return uVar3;
}

