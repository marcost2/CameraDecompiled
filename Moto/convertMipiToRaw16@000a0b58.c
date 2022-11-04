
/* qcamera::QCamera3RawChannel::convertMipiToRaw16(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::convertMipiToRaw16(QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  QCamera3Stream *unaff_r5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_1b8;
  int local_1b4;
  cam_frame_len_offset_t acStack432 [24];
  int local_198;
  int local_24;
  
  piVar8 = *(int **)(DAT_000a0c4c + 0xa0b66);
  local_24 = *piVar8;
  if (*(int *)(this + 0x44) != 0) {
    unaff_r5 = *(QCamera3Stream **)(this + 0x24);
  }
  if (*(int *)(this + 0x44) != 0 && unaff_r5 != (QCamera3Stream *)0x0) {
    local_1b8 = 0;
    local_1b4 = 0;
    QCamera3Stream::getFrameDimension(unaff_r5,(cam_dimension_t *)&local_1b8);
    __aeabi_memclr8(acStack432,0x188);
    QCamera3Stream::getFrameOffset(unaff_r5,acStack432);
    if (0 < local_1b4) {
      iVar6 = *(int *)(param_1 + 0x208);
      uVar2 = local_1b8 + 0xf >> 4;
      iVar3 = iVar6 + (local_1b4 + -1) * uVar2 * 0x20 + -2;
      iVar1 = local_1b4;
      while( true ) {
        iVar1 = iVar1 + -1;
        if (0 < (int)local_1b8) {
          iVar6 = local_198 * iVar1 + iVar6;
          uVar7 = local_1b8;
          do {
            uVar4 = uVar7 - 1;
            iVar5 = (uVar4 >> 2) + (uVar4 & 0xfffffffc);
            *(ushort *)(iVar3 + uVar7 * 2) =
                 *(byte *)(iVar5 + iVar6 + 4) >> (uVar4 & 3) & 3 |
                 (ushort)*(byte *)(iVar6 + iVar5 + (uVar4 & 3)) << 2;
            uVar7 = uVar4;
          } while (0 < (int)uVar4);
        }
        if (iVar1 < 1) break;
        iVar6 = *(int *)(param_1 + 0x208);
        iVar3 = iVar3 + uVar2 * -0x20;
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000a0c50 + 0xa0b82) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a0c58 + 0xa0b9c,0xa08,DAT_000a0c54 + 0xa0b94);
    if (*piVar8 == local_24) {
      return;
    }
    goto LAB_000a0c46;
  }
  if (*piVar8 == local_24) {
    return;
  }
LAB_000a0c46:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

