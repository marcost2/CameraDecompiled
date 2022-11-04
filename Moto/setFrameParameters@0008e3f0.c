
/* qcamera::QCamera3HardwareInterface::setFrameParameters(camera3_capture_request*, cam_stream_ID_t,
   int, unsigned int) */

undefined4
qcamera::QCamera3HardwareInterface::setFrameParameters
          (camera3_capture_request *param_1,cam_stream_ID_t param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  void *pvVar4;
  int in_stack_0000003c;
  uint in_stack_00000040;
  int local_8;
  uint uStack4;
  
  pvVar4 = *(void **)(param_1 + 0x1b4);
  local_8 = param_3;
  uStack4 = param_4;
  if (pvVar4 != (void *)0x0) {
    __aeabi_memclr8(pvVar4,0x10f);
    *(undefined *)((int)pvVar4 + 0x117aec) = 0;
    *(undefined *)((int)pvVar4 + 0x106974) = 0;
    *(undefined *)((int)pvVar4 + 0xe1f78) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa74) = 0;
    *(undefined *)((int)pvVar4 + 0xcfa08) = 0;
    *(undefined *)((int)pvVar4 + 0xc36b0) = 0;
    *(undefined *)((int)pvVar4 + 0xb86e0) = 0;
    *(undefined *)((int)pvVar4 + 0xb7340) = 0;
    *(undefined *)((int)pvVar4 + 0xb72e8) = 0;
    *(undefined *)((int)pvVar4 + 0x772c8) = 0;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      *(undefined4 *)("No Advanced Capture feature enabled!" + *(int *)(param_1 + 0x1b4) + 2) = 3;
      *(undefined *)(*(int *)(param_1 + 0x1b4) + 1) = 1;
      if (*(int *)(param_1 + 0x1b4) == 0) {
        __android_log_print(6,DAT_0008e618 + 0x8e572,DAT_0008e61c + 0x8e574,0,0x6f);
        if (*(int *)(*(int *)(DAT_0008e620 + 0x8e57c) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar1 = 0x29a9;
        iVar2 = DAT_0008e624 + 0x8e58e;
        puVar3 = (undefined *)(DAT_0008e628 + 0x8e596);
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0xc584) = *(undefined4 *)param_2;
        *(undefined *)(*(int *)(param_1 + 0x1b4) + 0x6f) = 1;
        if (*(int *)(param_1 + 0x1b4) != 0) {
          __aeabi_memcpy8("putBufs invalid stream pointer" + *(int *)(param_1 + 0x1b4) + 0x10,
                          &local_8,0x44);
          *(undefined *)(*(int *)(param_1 + 0x1b4) + 0xa3) = 1;
          if (param_1[0x41c] != (camera3_capture_request)0x0) {
            if (*(int *)(param_1 + 0x1b4) == 0) {
              __android_log_print(6,DAT_0008e640 + 0x8e5de,DAT_0008e644 + 0x8e5e0,0,0xb4);
              if (*(int *)(*(int *)(DAT_0008e648 + 0x8e5e8) + 0x20) == 0) {
                return 0xffffffea;
              }
              uVar1 = 0x29b9;
              iVar2 = DAT_0008e64c + 0x8e5fa;
              puVar3 = &UNK_0008e602 + DAT_0008e650;
              goto LAB_0008e54e;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x22b8) = 0;
            *(undefined *)(*(int *)(param_1 + 0x1b4) + 0xb4) = 1;
            param_1[0x41c] = (camera3_capture_request)0x0;
          }
          if (*(int *)(param_2 + 4) == 0) {
            return 0;
          }
          uVar1 = translateToHalMetadata
                            ((QCamera3HardwareInterface *)param_1,(camera3_capture_request *)param_2
                             ,*(metadata_buffer_t **)(param_1 + 0x1b4),in_stack_00000040);
          if (in_stack_0000003c != 0) {
            __aeabi_memcpy8(*(void **)(param_1 + 0x1b8),*(void **)(param_1 + 0x1b4),
                            (size_t)&PTR_bufDone_00117af8);
            return uVar1;
          }
          return uVar1;
        }
        __android_log_print(6,DAT_0008e62c + 0x8e5a6,DAT_0008e630 + 0x8e5a8,0,0xa3);
        if (*(int *)(*(int *)(DAT_0008e634 + 0x8e5b0) + 0x20) == 0) {
          return 0xffffffea;
        }
        uVar1 = 0x29af;
        iVar2 = DAT_0008e638 + 0x8e5c2;
        puVar3 = (undefined *)(DAT_0008e63c + 0x8e5ca);
      }
      goto LAB_0008e54e;
    }
  }
  __android_log_print(6,DAT_0008e604 + 0x8e52e,DAT_0008e608 + 0x8e530,0,1);
  if (*(int *)(*(int *)(DAT_0008e60c + 0x8e538) + 0x20) == 0) {
    return 0xffffffea;
  }
  uVar1 = 0x29a2;
  iVar2 = DAT_0008e610 + 0x8e548;
  puVar3 = (undefined *)(DAT_0008e614 + 0x8e550);
LAB_0008e54e:
  mm_camera_debug_log(1,1,puVar3,uVar1,iVar2);
  return 0xffffffea;
}

