
/* qcamera::QCamera3HardwareInterface::isSupportChannelNeeded(camera3_stream_configuration*,
   cam_stream_size_info_t) */

undefined4
qcamera::QCamera3HardwareInterface::isSupportChannelNeeded
          (camera3_stream_configuration *param_1,cam_stream_size_info_t param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000038;
  uint local_8 [2];
  
  if (in_stack_00000038 != 0) {
    uVar2 = 0;
    iVar1 = 0x68;
    do {
      if ((*(int *)(&stack0x0000003c + uVar2 * 4) != 0xb) &&
         ((*(uint *)((int)local_8 + iVar1) | *(uint *)((int)local_8 + iVar1 + 4)) != 0)) {
        if (*(int *)param_2 == 0) {
          return 1;
        }
        uVar2 = 0;
        while( true ) {
          uVar3 = *(int *)(*(int *)(*(int *)(param_2 + 4) + uVar2 * 4) + 0xc) - 0x20;
          if (5 < uVar3) {
            return 0;
          }
          if ((1 << (uVar3 & 0xff) & 0x33U) == 0) break;
          uVar2 = uVar2 + 1;
          if (*(uint *)param_2 <= uVar2) {
            return 1;
          }
        }
        return 0;
      }
      iVar1 = iVar1 + 8;
      uVar2 = uVar2 + 1;
    } while (uVar2 < in_stack_00000038);
  }
  return 1;
}

