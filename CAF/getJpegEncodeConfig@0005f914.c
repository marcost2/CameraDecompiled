
/* WARNING: Type propagation algorithm not settling */
/* qcamera::QCamera3PostProcessor::getJpegEncodeConfig(mm_jpeg_encode_params_t&,
   qcamera::QCamera3Stream*, qcamera::jpeg_settings_t*) */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::getJpegEncodeConfig
          (QCamera3PostProcessor *this,mm_jpeg_encode_params_t *param_1,QCamera3Stream *param_2,
          jpeg_settings_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  QCamera3PostProcessor *this_00;
  undefined4 uVar4;
  uint uVar5;
  QCamera3StreamMem *pQVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  undefined8 uVar14;
  cam_format_t local_33c;
  cam_frame_len_offset_t acStack824 [392];
  cam_frame_len_offset_t acStack432 [392];
  int local_28;
  
  piVar10 = *(int **)(DAT_0005fca0 + 0x5f92a);
  local_28 = *piVar10;
  iVar11 = *(int *)(DAT_0005fca4 + 0x5f938);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
  *(undefined4 *)(param_1 + 0x13830) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x13834) = *(undefined4 *)(this + 0xc);
  iVar2 = *(int *)(param_3 + 0xc);
  bVar13 = iVar2 == 1;
  iVar3 = iVar2;
  if (0 < iVar2) {
    iVar3 = *(int *)(param_3 + 0x10);
  }
  iVar1 = iVar2 + -1;
  if (iVar2 >= 1) {
    bVar13 = iVar3 == 0;
    iVar1 = iVar3;
  }
  uVar5 = (uint)(!bVar13 && iVar1 < 0 == (iVar2 < 1 && SBORROW4(iVar2,1)));
  *(uint *)(this + 0x1e8) = uVar5;
  *(uint *)(param_1 + 0xc) = uVar5;
  local_33c = 1;
  this_00 = (QCamera3PostProcessor *)QCamera3Stream::getFormat(param_2,&local_33c);
  uVar4 = getColorfmtFromImgFmt(this_00,local_33c);
  *(undefined4 *)(param_1 + 0x13810) = uVar4;
  uVar5 = (uint)(byte)param_3[8];
  if (uVar5 == 0) {
    uVar5 = 0x55;
  }
  *(uint *)(param_1 + 0x13818) = uVar5;
  *(uint *)(param_1 + 0x1381c) = (uint)(byte)param_3[9];
  __aeabi_memclr4(acStack432,0x188);
  QCamera3Stream::getFrameOffset(param_2,acStack432);
  pQVar6 = (QCamera3StreamMem *)QCamera3Stream::getStreamBufs(param_2,extraout_r1);
  if (pQVar6 == (QCamera3StreamMem *)0x0) {
    iVar3 = *(int *)(iVar11 + 0x20);
  }
  else {
    uVar5 = QCamera3StreamMem::getCnt(pQVar6);
    if (uVar5 < 0x40) {
      uVar14 = QCamera3StreamMem::getCnt(pQVar6);
      uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
      *(int *)param_1 = (int)uVar14;
      if ((int)uVar14 != 0) goto LAB_0005fa2a;
    }
    else {
      *(undefined4 *)param_1 = 0x40;
LAB_0005fa2a:
      puVar12 = (uint *)(param_1 + 0x1ac);
      uVar7 = 0;
      do {
        *puVar12 = uVar7;
        uVar5 = QCamera3StreamMem::getSize(pQVar6,uVar7);
        if (uVar5 == 0xffffffb5) {
          iVar3 = *(int *)(iVar11 + 0x20);
          goto joined_r0x0005fc4c;
        }
        puVar12[-100] = uVar5;
        uVar5 = QCamera3StreamMem::getPtr((uint)pQVar6);
        puVar12[-0x66] = uVar5;
        uVar5 = QCamera3StreamMem::getFd(pQVar6,uVar7);
        puVar12[-99] = 0;
        puVar12[-0x65] = uVar5;
        __aeabi_memcpy8(puVar12 + -0x62,acStack432,0x188);
        puVar12 = puVar12 + 0x68;
        uVar7 = uVar7 + 1;
        uVar5 = extraout_r1_00;
      } while (uVar7 < *(uint *)param_1);
    }
    if (*(int *)(this + 0x1e8) == 1) {
      pQVar6 = (QCamera3StreamMem *)QCamera3Stream::getStreamBufs(param_2,uVar5);
      if (pQVar6 == (QCamera3StreamMem *)0x0) {
        iVar3 = *(int *)(iVar11 + 0x20);
        goto joined_r0x0005fc4c;
      }
      __aeabi_memclr4(acStack824,0x188);
      QCamera3Stream::getFrameOffset(param_2,acStack824);
      uVar5 = QCamera3StreamMem::getCnt(pQVar6);
      if (uVar5 < 0x40) {
        iVar3 = QCamera3StreamMem::getCnt(pQVar6);
        *(int *)(param_1 + 4) = iVar3;
        if (iVar3 == 0) goto LAB_0005fb9c;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0x40;
      }
      puVar8 = (undefined4 *)(param_1 + 0x6814);
      uVar5 = 0;
      do {
        puVar8[0x66] = uVar5;
        iVar3 = QCamera3StreamMem::getSize(pQVar6,uVar5);
        if (iVar3 == -0x4b) {
          iVar3 = *(int *)(iVar11 + 0x20);
          goto joined_r0x0005fc4c;
        }
        puVar8[2] = iVar3;
        uVar4 = QCamera3StreamMem::getPtr((uint)pQVar6);
        *puVar8 = uVar4;
        uVar4 = QCamera3StreamMem::getFd(pQVar6,uVar5);
        puVar8[3] = 0;
        puVar8[1] = uVar4;
        __aeabi_memcpy8(puVar8 + 4,acStack824,0x188);
        puVar8 = puVar8 + 0x68;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 4));
    }
LAB_0005fb9c:
    iVar3 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0x1ec),*(uint *)param_3);
    if (iVar3 != -0x4b) {
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xd1ac) = 0;
      *(int *)(param_1 + 0xd01c) = iVar3;
      *(undefined4 *)(param_1 + 8) = 1;
      uVar4 = QCamera3StreamMem::getPtr(*(uint *)(this + 0x1ec));
      *(undefined4 *)(param_1 + 0xd014) = uVar4;
      uVar4 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0x1ec),*(uint *)param_3);
      *(undefined4 *)(param_1 + 0xd020) = 0;
      *(undefined4 *)(param_1 + 0xd018) = uVar4;
      __aeabi_memcpy8(param_1 + 0xd024,acStack432,0x188);
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log();
        uVar9 = 0;
      }
      goto LAB_0005fc88;
    }
    iVar3 = *(int *)(iVar11 + 0x20);
  }
joined_r0x0005fc4c:
  if (iVar3 != 0) {
    mm_camera_debug_log();
  }
  uVar9 = 0xffffffea;
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log();
  }
LAB_0005fc88:
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

