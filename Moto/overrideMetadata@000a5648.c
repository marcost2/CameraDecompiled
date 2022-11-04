
/* qcamera::QCamera3ReprocessChannel::overrideMetadata(metadata_buffer_t*,
   qcamera::jpeg_settings_t*, unsigned int) */

void __thiscall
qcamera::QCamera3ReprocessChannel::overrideMetadata
          (QCamera3ReprocessChannel *this,metadata_buffer_t *param_1,jpeg_settings_t *param_2,
          uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  metadata_buffer_t *unaff_r6;
  int iVar6;
  int *piVar7;
  uint local_30;
  undefined4 uStack44;
  
  piVar7 = *(int **)(DAT_000a57b0 + 0xa5658);
  iVar1 = *piVar7;
  uVar2 = 0xffffffea;
  if (param_3 != 0) {
    unaff_r6 = param_1;
  }
  if ((param_3 != 0 && param_1 != (metadata_buffer_t *)0x0) && (*(int *)(this + 4) != 0)) {
    iVar6 = *(int *)(DAT_000a57b4 + 0xa5692);
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a57bc + 0xa56b0,0x13f8,DAT_000a57b8 + 0xa56a6,param_3);
    }
    if (param_2 != (jpeg_settings_t *)0x0) {
      local_30 = 0;
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 < 0xb4) {
        if (iVar3 == 0) {
          local_30 = 1;
        }
        else if (iVar3 == 0x5a) {
          local_30 = 2;
        }
      }
      else if (iVar3 == 0xb4) {
        local_30 = 4;
      }
      else if (iVar3 == 0x10e) {
        local_30 = 8;
      }
      if (param_2[0xc6] != (jpeg_settings_t)0x0) {
        local_30 = 1;
      }
      uVar2 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a57c4 + 0xa5716,0x140b,DAT_000a57c0 + 0xa5708,local_30,uVar2)
        ;
      }
      *(undefined4 *)(unaff_r6 + 0x74aec) = uVar2;
      unaff_r6[0x38] = (metadata_buffer_t)0x1;
      *(ulonglong *)(unaff_r6 + 0x74ae4) = (ulonglong)local_30;
    }
    if (unaff_r6[0xf0] != (metadata_buffer_t)0x0) {
      uVar5 = (uint)(byte)unaff_r6[0x2275];
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a57cc + 0xa5768,0x1411,DAT_000a57c8 + 0xa575e,uVar5);
      }
      uVar2 = 0;
      if (8 < uVar5) goto LAB_000a566e;
      uStack44 = 0;
      uVar2 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
      if (uVar5 != 0) {
        uVar4 = 0;
        do {
          if (*(uint *)(unaff_r6 + uVar4 * 8 + 0x2278) == param_3) {
            uStack44 = *(undefined4 *)(unaff_r6 + uVar4 * 8 + 0x227c);
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      unaff_r6[0x2275] = (metadata_buffer_t)0x1;
      *(undefined4 *)(unaff_r6 + 0x2278) = uVar2;
      *(undefined4 *)(unaff_r6 + 0x227c) = uStack44;
    }
    uVar2 = 0;
  }
LAB_000a566e:
  if (*piVar7 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

