
/* qcamera::BaseBSTBokeh::dumpYUV(char const*, mm_camera_buf_def*, qcamera::QCamera3Stream*) */

void __thiscall
qcamera::BaseBSTBokeh::dumpYUV
          (BaseBSTBokeh *this,char *param_1,mm_camera_buf_def *param_2,QCamera3Stream *param_3)

{
  int __fd;
  ssize_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int aiStack476 [4];
  int iStack460;
  int local_1c8;
  char *pcStack452;
  int *local_1c0;
  uint local_1bc;
  cam_dimension_t acStack440 [8];
  uint local_1b0 [2];
  size_t local_1a8 [96];
  int local_28;
  
  piVar5 = *(int **)(DAT_0010101c + 0x100f1e);
  local_28 = *piVar5;
  QCamera3Stream::getFrameDimension(param_3,acStack440);
  QCamera3Stream::getFrameOffset(param_3,(cam_frame_len_offset_t *)local_1b0);
  __fd = open(param_1,0x42,0x1ff);
  if (__fd < 1) {
    if (*(int *)(*(int *)(DAT_0010102c + 0x100fba) + 0x20) != 0) {
      iStack460 = DAT_00101034 + 0x100fca;
      aiStack476[3] = DAT_00101038 + 0x100fcc;
      local_1c8 = DAT_00101030 + 0x100fce;
      pcStack452 = param_1;
      mm_camera_debug_log(1,1,local_1c8,0x8c);
    }
  }
  else {
    local_1c0 = piVar5;
    fchmod(__fd,0x1a4);
    if (local_1b0[0] == 0) {
      iVar7 = 0;
    }
    else {
      uVar3 = 0;
      iVar7 = 0;
      uVar2 = local_1b0[0];
      do {
        sVar6 = local_1a8[uVar3 * 0xc];
        if (uVar3 != 0) {
          sVar6 = sVar6 + aiStack476[uVar3 * 0xc];
        }
        uVar4 = uVar3;
        if (0 < (int)local_1a8[uVar3 * 0xc + 7]) {
          iVar8 = 0;
          local_1bc = uVar3;
          do {
            sVar1 = write(__fd,(void *)(*(int *)(param_2 + 0x208) + sVar6),
                          local_1a8[uVar3 * 0xc + 6]);
            iVar7 = iVar7 + sVar1;
            iVar8 = iVar8 + 1;
            sVar6 = sVar6 + local_1a8[uVar3 * 0xc + 3];
            uVar2 = local_1b0[0];
            uVar4 = local_1bc;
          } while (iVar8 < (int)local_1a8[uVar3 * 0xc + 7]);
        }
        uVar3 = uVar4 + 1;
      } while (uVar3 < uVar2);
    }
    if (*(int *)(*(int *)(DAT_00101020 + 0x100fe6) + 0x28) != 0) {
      aiStack476[3] = DAT_00101024 + 0x100ff4;
      iStack460 = iVar7;
      mm_camera_debug_log(1,3,DAT_00101028 + 0x100ffe,0x89);
    }
    close(__fd);
    piVar5 = local_1c0;
  }
  if (*piVar5 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

