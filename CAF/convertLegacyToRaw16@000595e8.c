
/* qcamera::QCamera3RawChannel::convertLegacyToRaw16(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::convertLegacyToRaw16
          (QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  QCamera3Stream *this_00;
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_1b8;
  int local_1b4;
  cam_frame_len_offset_t acStack432 [24];
  int local_198;
  int local_28;
  
  piVar8 = *(int **)(DAT_00059720 + 0x595f6);
  local_28 = *piVar8;
  this_00 = (QCamera3Stream *)QCamera3Channel::getStreamByIndex((QCamera3Channel *)this,0);
  if (this_00 == (QCamera3Stream *)0x0) {
    if (*(int *)(*(int *)(DAT_00059724 + 0x596f0) + 0x20) != 0) {
      mm_camera_debug_log();
      if (*piVar8 == local_28) {
        return;
      }
      goto LAB_0005971a;
    }
  }
  else {
    local_1b8 = 0;
    local_1b4 = 0;
    QCamera3Stream::getFrameDimension(this_00,(cam_dimension_t *)&local_1b8);
    __aeabi_memclr4(acStack432,0x188);
    QCamera3Stream::getFrameOffset(this_00,acStack432);
    if (0 < local_1b4) {
      uVar4 = local_1b8 + 0xf >> 4;
      iVar13 = *(int *)(param_1 + 0x208) + (local_1b4 + -1) * uVar4 * 0x20 + -2;
      iVar11 = local_1b4;
      do {
        iVar11 = iVar11 + -1;
        if (0 < (int)local_1b8) {
          iVar12 = *(int *)(param_1 + 0x208) + (iVar11 * local_198 & 0xfffffff8U);
          iVar6 = local_1b8 * 10;
          uVar5 = local_1b8;
          uVar2 = local_1b8;
          do {
            iVar6 = iVar6 + -10;
            uVar2 = uVar2 - 1;
            uVar1 = iVar6 + ((uVar2 / 6) * 0x10 - uVar2 / 6) * -4;
            uVar7 = uVar5 - 1;
            iVar9 = ((uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0x7ffffffc) * 2;
            uVar10 = *(uint *)(iVar9 + iVar12 + 4);
            uVar3 = (ushort)(*(uint *)(iVar12 + iVar9) >> (uVar1 & 0xff)) |
                    (ushort)(uVar10 << (0x20 - uVar1 & 0xff));
            if (-1 < (int)(uVar1 - 0x20)) {
              uVar3 = (ushort)(uVar10 >> (uVar1 - 0x20 & 0xff));
            }
            *(ushort *)(iVar13 + uVar5 * 2) = uVar3 & 0x3ff;
            uVar5 = uVar7;
          } while (0 < (int)uVar7);
        }
        iVar13 = iVar13 + uVar4 * -0x20;
      } while (0 < iVar11);
    }
  }
  if (*piVar8 == local_28) {
    return;
  }
LAB_0005971a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

