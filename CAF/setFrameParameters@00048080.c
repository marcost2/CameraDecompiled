
/* qcamera::QCamera3HardwareInterface::setFrameParameters(camera3_capture_request*, cam_stream_ID_t,
   int, unsigned int) */

undefined4
qcamera::QCamera3HardwareInterface::setFrameParameters
          (camera3_capture_request *param_1,cam_stream_ID_t param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_0000003c;
  uint in_stack_00000040;
  int local_8;
  uint uStack4;
  
  local_8 = param_3;
  uStack4 = param_4;
  clear_metadata_buffer(*(metadata_buffer_t **)(param_1 + 0x14c));
  if (*(int *)(param_1 + 0x14c) == 0) {
    iVar2 = *(int *)(DAT_00048264 + 0x4814a);
    if (*(int *)(iVar2 + 0x20) == 0) {
      return 0xffffffea;
    }
    mm_camera_debug_log();
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x72dd4) = 3;
    *(undefined *)(*(int *)(param_1 + 0x14c) + 1) = 1;
    if (*(int *)(param_1 + 0x14c) == 0) {
      iVar2 = *(int *)(DAT_00048278 + 0x48190);
      if (*(int *)(iVar2 + 0x20) == 0) {
        return 0xffffffea;
      }
      mm_camera_debug_log();
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0xc4f4) = *(undefined4 *)param_2;
      *(undefined *)(*(int *)(param_1 + 0x14c) + 0x6e) = 1;
      if (*(int *)(param_1 + 0x14c) != 0) {
        __aeabi_memcpy8((void *)(*(int *)(param_1 + 0x14c) + 0x73654),&local_8,0x44);
        *(undefined *)(*(int *)(param_1 + 0x14c) + 0xa1) = 1;
        if (param_1[0x3b4] != (camera3_capture_request)0x0) {
          if (*(int *)(param_1 + 0x14c) == 0) {
            iVar2 = *(int *)(DAT_000482a0 + 0x48218);
            if (*(int *)(iVar2 + 0x20) == 0) {
              return 0xffffffea;
            }
            mm_camera_debug_log();
            iVar2 = *(int *)(iVar2 + 0x20);
            goto joined_r0x00048174;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x2274) = 0;
          *(undefined *)(*(int *)(param_1 + 0x14c) + 0xb2) = 1;
          param_1[0x3b4] = (camera3_capture_request)0x0;
        }
        if (*(int *)(param_2 + 4) == 0) {
          return 0;
        }
        uVar1 = translateToHalMetadata
                          ((QCamera3HardwareInterface *)param_1,(camera3_capture_request *)param_2,
                           *(metadata_buffer_t **)(param_1 + 0x14c),in_stack_00000040);
        if (in_stack_0000003c != 0) {
          __aeabi_memcpy8(*(void **)(param_1 + 0x150),*(void **)(param_1 + 0x14c),0x1174b8);
          return uVar1;
        }
        return uVar1;
      }
      iVar2 = *(int *)(DAT_0004828c + 0x481d4);
      if (*(int *)(iVar2 + 0x20) == 0) {
        return 0xffffffea;
      }
      mm_camera_debug_log();
      iVar2 = *(int *)(iVar2 + 0x20);
    }
  }
joined_r0x00048174:
  if (iVar2 != 0) {
    mm_camera_debug_log();
  }
  return 0xffffffea;
}

