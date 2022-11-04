
/* qcamera::QCamera3RawChannel::convertMipiToRaw16(mm_camera_buf_def*) */

void __thiscall
qcamera::QCamera3RawChannel::convertMipiToRaw16(QCamera3RawChannel *this,mm_camera_buf_def *param_1)

{
  QCamera3Stream *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_1b0;
  int local_1ac;
  cam_frame_len_offset_t acStack424 [24];
  int local_190;
  int local_20;
  
  piVar8 = *(int **)(DAT_000595d8 + 0x594fa);
  local_20 = *piVar8;
  this_00 = (QCamera3Stream *)QCamera3Channel::getStreamByIndex((QCamera3Channel *)this,0);
  if (this_00 == (QCamera3Stream *)0x0) {
    if (*(int *)(*(int *)(DAT_000595dc + 0x59598) + 0x20) != 0) {
      mm_camera_debug_log();
      if (*piVar8 == local_20) {
        return;
      }
      goto LAB_000595d2;
    }
  }
  else {
    local_1b0 = 0;
    local_1ac = 0;
    QCamera3Stream::getFrameDimension(this_00,(cam_dimension_t *)&local_1b0);
    __aeabi_memclr4(acStack424,0x188);
    QCamera3Stream::getFrameOffset(this_00,acStack424);
    if (0 < local_1ac) {
      uVar3 = local_1b0 + 0xf >> 4;
      iVar2 = *(int *)(param_1 + 0x208) + (local_1ac + -1) * uVar3 * 0x20 + -2;
      iVar1 = local_1ac;
      do {
        iVar1 = iVar1 + -1;
        if (0 < (int)local_1b0) {
          iVar6 = local_190 * iVar1 + *(int *)(param_1 + 0x208);
          uVar7 = local_1b0;
          do {
            uVar4 = uVar7 - 1;
            iVar5 = (uVar4 >> 2) + (uVar4 & 0xfffffffc);
            *(ushort *)(iVar2 + uVar7 * 2) =
                 *(byte *)(iVar5 + iVar6 + 4) >> (uVar4 & 3) & 3 |
                 (ushort)*(byte *)(iVar6 + iVar5 + (uVar4 & 3)) << 2;
            uVar7 = uVar4;
          } while (0 < (int)uVar4);
        }
        iVar2 = iVar2 + uVar3 * -0x20;
      } while (0 < iVar1);
    }
  }
  if (*piVar8 == local_20) {
    return;
  }
LAB_000595d2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

