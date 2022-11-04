
/* qcamera::QCameraMuxer::open_legacy(hw_module_t const*, char const*, unsigned int, hw_device_t**)
    */

undefined4
qcamera::QCameraMuxer::open_legacy
          (hw_module_t *param_1,char *param_2,uint param_3,hw_device_t **param_4)

{
  int iVar1;
  undefined4 uVar2;
  QCameraMuxer *this;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000c0ab0 + 0xc0a26);
  if (*(int *)(iVar3 + 0x28) != 0) {
    iVar1 = atoi(param_2);
    mm_camera_debug_log(1,3,DAT_000c0ab8 + 0xc0a46,0x15f,DAT_000c0ab4 + 0xc0a3a,iVar1);
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c0ac0 + 0xc0aa2,0x161,DAT_000c0abc + 0xc0a9a);
    }
    uVar2 = 0xffffffea;
  }
  else {
    this = **(QCameraMuxer ***)(DAT_000c0ac4 + 0xc0a50);
    iVar1 = atoi(param_2);
    uVar2 = cameraDeviceOpen(this,iVar1,param_4);
    if (*(int *)(iVar3 + 0x28) != 0) {
      iVar3 = atoi(param_2);
      mm_camera_debug_log(1,3,DAT_000c0acc + 0xc0a86,0x166,DAT_000c0ac8 + 0xc0a78,iVar3,uVar2);
    }
  }
  return uVar2;
}

