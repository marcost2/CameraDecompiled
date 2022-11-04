
/* qcamera::QCamera2Factory::camera_device_open(hw_module_t const*, char const*, hw_device_t**) */

undefined4
qcamera::QCamera2Factory::camera_device_open
          (hw_module_t *param_1,char *param_2,hw_device_t **param_3)

{
  hw_module_t *phVar1;
  int iVar2;
  undefined4 uVar3;
  
  phVar1 = *(hw_module_t **)(DAT_0007eb34 + 0x7eaa6);
  if (param_1 != phVar1) {
    if (*(int *)(*(int *)(DAT_0007eb38 + 0x7eab0) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007eb40 + 0x7eacc,0x202,DAT_0007eb3c + 0x7eabe,param_1,phVar1);
    }
    return 0xffffffda;
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)(*(int *)(DAT_0007eb44 + 0x7eaf4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0007eb4c + 0x7eb0c,0x206,DAT_0007eb48 + 0x7eb04);
    }
    return 0xffffffea;
  }
  if (**(int **)(DAT_0007eb50 + 0x7eade) == 0) {
    uVar3 = **(undefined4 **)(DAT_0007eb54 + 0x7eb1c);
    iVar2 = atoi(param_2);
    uVar3 = (*(code *)PTR_cameraDeviceOpen_00119338)(uVar3,iVar2,param_3);
    return uVar3;
  }
  uVar3 = (*(code *)PTR_camera_device_open_00119334)(phVar1,param_2,param_3);
  return uVar3;
}

