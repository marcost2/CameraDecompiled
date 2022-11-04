
/* qcamera::QCamera3ReprocessChannel::overrideFwkMetadata(qcamera::qcamera_fwk_input_pp_data_t*) */

undefined4 __thiscall
qcamera::QCamera3ReprocessChannel::overrideFwkMetadata
          (QCamera3ReprocessChannel *this,qcamera_fwk_input_pp_data_t *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  piVar4 = *(int **)(DAT_0005d660 + 0x5d436);
  iVar2 = *piVar4;
  if (param_1 == (qcamera_fwk_input_pp_data_t *)0x0) {
    iVar5 = *(int *)(*(int *)(DAT_0005d664 + 0x5d586) + 0x20);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x21c);
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(DAT_0005d670 + 0x5d5a6) + 0x20);
    }
    else {
      if (*(int *)(this + 0xc4) != 1) {
        if (*(int *)(*(int *)(DAT_0005d67c + 0x5d458) + 0x2c) != 0) {
          mm_camera_debug_log();
        }
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        *(undefined4 *)(iVar5 + 0x7475c) = uVar3;
        *(undefined *)(iVar5 + 0x38) = 1;
        *(undefined8 *)(iVar5 + 0x74754) = 1;
      }
      if (*(char *)(iVar5 + 0x3b) == '\0') {
        iVar7 = *(int *)(*(int *)(DAT_0005d6b0 + 0x5d5c6) + 0x24);
joined_r0x0005d55e:
        if (iVar7 != 0) {
          mm_camera_debug_log();
        }
      }
      else {
        pbVar6 = (byte *)(iVar5 + 0x2278);
        if (*pbVar6 != 1) {
          iVar5 = *(int *)(*(int *)(DAT_0005d6a4 + 0x5d60a) + 0x20);
          goto joined_r0x0005d58a;
        }
        *(undefined8 *)(iVar5 + 0x22a4) = *(undefined8 *)(iVar5 + 0x2280);
        *(undefined8 *)(iVar5 + 0x22ac) = *(undefined8 *)(iVar5 + 0x2288);
        *(undefined8 *)(iVar5 + 0x22b4) = *(undefined8 *)(iVar5 + 0x2290);
        *(undefined8 *)(iVar5 + 0x22bc) = *(undefined8 *)(iVar5 + 0x2298);
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        bVar1 = *pbVar6;
        *(undefined4 *)(iVar5 + 0x227c + (uint)bVar1 * 0x24) = uVar3;
        *pbVar6 = bVar1 + 1;
        iVar7 = *(int *)(DAT_0005d688 + 0x5d504);
        if (*(int *)(iVar7 + 0x2c) != 0) {
          QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
          mm_camera_debug_log();
          if (*(int *)(iVar7 + 0x2c) != 0) {
            mm_camera_debug_log();
            iVar7 = *(int *)(iVar7 + 0x2c);
            goto joined_r0x0005d55e;
          }
        }
      }
      if (*(char *)(iVar5 + 0xce) == '\0') {
        uVar3 = 0;
        goto LAB_0005d64e;
      }
      if (*(char *)(iVar5 + 0x2231) == '\x01') {
        uVar3 = QCamera3Stream::getMyServerID(*(QCamera3Stream **)(this + 0x24));
        *(undefined4 *)(iVar5 + 0x2234) = uVar3;
        uVar3 = 0;
        goto LAB_0005d64e;
      }
      iVar5 = *(int *)(*(int *)(DAT_0005d6bc + 0x5d62e) + 0x20);
    }
  }
joined_r0x0005d58a:
  if (iVar5 != 0) {
    mm_camera_debug_log();
  }
  uVar3 = 0xffffffea;
LAB_0005d64e:
  if (*piVar4 != iVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

