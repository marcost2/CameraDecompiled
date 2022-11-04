
/* qcamera::QCamera2HardwareInterface::processDualCameraUpdate(cam_reprocess_info_t) */

int qcamera::QCamera2HardwareInterface::processDualCameraUpdate(cam_reprocess_info_t param_1)

{
  undefined4 *puVar1;
  int in_r3;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000068;
  int in_stack_0000006c;
  int in_stack_00000078;
  int in_stack_0000007c;
  undefined4 in_stack_00000088;
  int in_stack_0000008c;
  uint in_stack_00000090;
  uint in_stack_00000094;
  int in_stack_000000e0;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack72;
  undefined8 local_40;
  undefined8 uStack56;
  int local_2c;
  int local_28;
  int local_24;
  
  piVar3 = *(int **)(DAT_000ba4a4 + 0xba1b0);
  local_24 = *piVar3;
  if ((int)((uint)*(byte *)(param_1 + 0x4b5) << 0x1a) < 0) {
    puVar1 = (undefined4 *)
             (**(code **)(param_1 + 0x4c8))(0xffffffff,0xb0,1,*(undefined4 *)(param_1 + 0x4d0));
    if (puVar1 == (undefined4 *)0x0) {
      if (*(int *)(*(int *)(DAT_000ba4a8 + 0xba44c) + 0x20) == 0) {
        iVar2 = -0xc;
      }
      else {
        mm_camera_debug_log(1,1,DAT_000ba4b0 + 0xba464,0x1f1f,DAT_000ba4ac + 0xba45c);
        iVar2 = -0xc;
      }
    }
    else {
      puVar4 = (undefined4 *)*puVar1;
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(*(int *)(DAT_000ba4b4 + 0xba472) + 0x20) == 0) {
          iVar2 = -0x80000000;
        }
        else {
          mm_camera_debug_log(1,1,DAT_000ba4bc + 0xba48a,0x1f25,DAT_000ba4b8 + 0xba482);
          iVar2 = -0x80000000;
        }
      }
      else {
        QCameraParametersIntf::getStreamDimension
                  ((QCameraParametersIntf *)(param_1 + 0x4ac),9,(cam_dimension_t *)&local_2c);
        *puVar4 = 0x40800000;
        puVar4[1] = 0x40800000;
        puVar4[2] = (float)(longlong)in_stack_000000e0;
        puVar4[3] = (float)(longlong)*(int *)(param_1 + 0x1be0);
        puVar4[4] = (float)(longlong)*(int *)(param_1 + 0x1be4);
        puVar4[5] = in_stack_00000088;
        puVar4[6] = (float)(longlong)in_r3;
        puVar4[7] = (float)(longlong)in_stack_00000000;
        puVar4[8] = (float)(longlong)in_stack_00000004;
        puVar4[9] = (float)(longlong)in_stack_00000008;
        puVar4[10] = (float)(longlong)in_stack_0000000c;
        puVar4[0xb] = (float)(longlong)in_stack_00000010;
        puVar4[0xc] = (float)(longlong)in_stack_00000014;
        puVar4[0xd] = (float)(longlong)in_stack_00000018;
        puVar4[0xe] = (float)(longlong)in_stack_00000020;
        puVar4[0xf] = (float)(longlong)in_stack_00000024;
        puVar4[0x10] = (float)(longlong)in_stack_00000028;
        puVar4[0x11] = (float)(longlong)in_stack_0000002c;
        puVar4[0x12] = (float)(longlong)in_stack_00000030;
        puVar4[0x13] = (float)(longlong)in_stack_00000034;
        puVar4[0x14] = (float)(longlong)in_stack_00000038;
        puVar4[0x15] = (float)(longlong)in_stack_0000003c;
        puVar4[0x16] = (float)(longlong)in_stack_00000044;
        puVar4[0x17] = (float)(longlong)in_stack_00000048;
        puVar4[0x18] = (float)(longlong)in_stack_0000004c;
        puVar4[0x19] = (float)(longlong)in_stack_00000050;
        puVar4[0x1a] = (float)(longlong)in_stack_00000054;
        puVar4[0x1b] = (float)(longlong)in_stack_00000058;
        puVar4[0x1c] = (float)(longlong)in_stack_0000005c;
        puVar4[0x1d] = (float)(longlong)in_stack_00000060;
        puVar4[0x1e] = (float)(longlong)in_stack_00000068;
        puVar4[0x1f] = (float)(longlong)in_stack_0000006c;
        puVar4[0x20] = (float)(longlong)local_2c;
        puVar4[0x21] = (float)(longlong)local_28;
        puVar4[0x22] = (float)(longlong)in_stack_00000078;
        puVar4[0x25] = (float)(longlong)local_28;
        puVar4[0x24] = (float)(longlong)local_2c;
        puVar4[0x23] = (float)(longlong)in_stack_0000007c;
        puVar4[0x26] = (float)(longlong)in_stack_0000008c;
        puVar4[0x27] = (float)(ulonglong)in_stack_00000090;
        puVar4[0x28] = (float)(ulonglong)in_stack_00000094;
        uStack56 = 0;
        local_50 = 0;
        local_60 = 0;
        local_64 = 0x2000;
        local_68 = 1;
        lStack72 = ZEXT48(puVar1) << 0x20;
        local_40 = CONCAT44(*(undefined4 *)(DAT_000ba4c0 + 0xba402),param_1);
        local_58 = ZEXT48(puVar1);
        iVar2 = QCameraCbNotifier::notifyCallback
                          ((QCameraCbNotifier *)(param_1 + 0x854),
                           (qcamera_callback_argm_t *)&local_68);
        if (iVar2 != 0) {
          if (*(int *)(*(int *)(DAT_000ba4c4 + 0xba422) + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000ba4cc + 0xba43a,0x1f5c,DAT_000ba4c8 + 0xba432);
          }
          (*(code *)puVar1[3])(puVar1);
        }
      }
    }
  }
  else {
    iVar2 = 0;
  }
  if (*piVar3 == local_24) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

