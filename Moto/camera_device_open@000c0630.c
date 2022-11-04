
/* qcamera::QCameraMuxer::camera_device_open(hw_module_t const*, char const*, hw_device_t**) */

undefined4
qcamera::QCameraMuxer::camera_device_open(hw_module_t *param_1,char *param_2,hw_device_t **param_3)

{
  int iVar1;
  undefined4 uVar2;
  QCameraMuxer *this;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000c06c8 + 0xc063e);
  if (*(int *)(iVar3 + 0x28) != 0) {
    iVar1 = atoi(param_2);
    mm_camera_debug_log(1,3,DAT_000c06d0 + 0xc065e,0x140,DAT_000c06cc + 0xc0652,iVar1);
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c06d8 + 0xc06ba,0x142,DAT_000c06d4 + 0xc06b2);
    }
    uVar2 = 0xffffffea;
  }
  else {
    this = **(QCameraMuxer ***)(DAT_000c06dc + 0xc0668);
    iVar1 = atoi(param_2);
    uVar2 = cameraDeviceOpen(this,iVar1,param_3);
    if (*(int *)(iVar3 + 0x28) != 0) {
      iVar3 = atoi(param_2);
      mm_camera_debug_log(1,3,DAT_000c06e4 + 0xc069e,0x147,DAT_000c06e0 + 0xc0690,iVar3,uVar2);
    }
  }
  return uVar2;
}

