
/* qcamera::QCamera3RawChannel::convertLegacyToRaw16(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::convertLegacyToRaw16
          (QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  QCamera3Stream *unaff_r5;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_1b8;
  int local_1b4;
  cam_frame_len_offset_t acStack432 [24];
  int iStack408;
  int local_28;
  
  piVar6 = *(int **)(DAT_000a0d98 + 0xa0c6a);
  local_28 = *piVar6;
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
      iVar2 = *(int *)(param_1 + 0x208);
      uVar5 = local_1b8 + 0xf >> 4;
      iVar13 = iVar2 + (local_1b4 + -1) * uVar5 * 0x20 + -2;
      iVar9 = local_1b4;
      while( true ) {
        iVar9 = iVar9 + -1;
        if (0 < (int)local_1b8) {
          iVar2 = iVar2 + (iVar9 * iStack408 & 0xfffffff8U);
          iVar7 = local_1b8 * 10;
          uVar12 = local_1b8;
          uVar3 = local_1b8;
          do {
            iVar7 = iVar7 + -10;
            uVar3 = uVar3 - 1;
            uVar8 = uVar12 - 1;
            uVar1 = iVar7 + ((uVar3 / 6) * 0x10 - uVar3 / 6) * -4;
            iVar10 = ((uint)((ulonglong)uVar8 * 0xaaaaaaab >> 0x20) & 0x7ffffffc) * 2;
            uVar11 = *(uint *)(iVar10 + iVar2 + 4);
            uVar4 = (ushort)(*(uint *)(iVar2 + iVar10) >> (uVar1 & 0xff)) |
                    (ushort)(uVar11 << (0x20 - uVar1 & 0xff));
            if (-1 < (int)(uVar1 - 0x20)) {
              uVar4 = (ushort)(uVar11 >> (uVar1 - 0x20 & 0xff));
            }
            *(ushort *)(iVar13 + uVar12 * 2) = uVar4 & 0x3ff;
            uVar12 = uVar8;
          } while (0 < (int)uVar8);
        }
        if (iVar9 < 1) break;
        iVar13 = iVar13 + uVar5 * -0x20;
        iVar2 = *(int *)(param_1 + 0x208);
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_000a0d9c + 0xa0c82) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_000a0da4 + 0xa0c9c,0x9d9,DAT_000a0da0 + 0xa0c94);
    if (*piVar6 == local_28) {
      return;
    }
    goto LAB_000a0d94;
  }
  if (*piVar6 == local_28) {
    return;
  }
LAB_000a0d94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

