
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
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  QCamera3StreamMem *pQVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  bool bVar13;
  cam_format_t local_33c;
  cam_frame_len_offset_t acStack824 [392];
  cam_frame_len_offset_t acStack432 [392];
  int local_28;
  
  piVar10 = *(int **)(DAT_000a8f80 + 0xa8c02);
  local_28 = *piVar10;
  iVar11 = *(int *)(DAT_000a8f84 + 0xa8c10);
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a8f8c + 0xa8c2c,0x1d7,DAT_000a8f88 + 0xa8c24);
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
  *(uint *)(this + 0x468) = uVar5;
  *(uint *)(param_1 + 0xc) = uVar5;
  local_33c = 1;
  QCamera3Stream::getFormat(param_2,&local_33c);
  if (local_33c - 1 < 7) {
    uVar4 = *(undefined4 *)(DAT_000a8f90 + 0xa8c7e + (local_33c - 1) * 4);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x13810) = uVar4;
  uVar5 = (uint)(byte)param_3[8];
  if (uVar5 == 0) {
    uVar5 = 0x55;
  }
  *(uint *)(param_1 + 0x13818) = uVar5;
  *(uint *)(param_1 + 0x1381c) = (uint)(byte)param_3[9];
  __aeabi_memclr8(acStack432,0x188);
  QCamera3Stream::getFrameOffset(param_2,acStack432);
  pQVar8 = *(QCamera3StreamMem **)(param_2 + 0xcc);
  if (pQVar8 == (QCamera3StreamMem *)0x0) {
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar4 = 0x1fb;
      iVar3 = DAT_000a8f94 + 0xa8d02;
      iVar2 = DAT_000a8f98 + 0xa8d0a;
LAB_000a8f42:
      mm_camera_debug_log(1,1,iVar2,uVar4,iVar3);
    }
  }
  else {
    uVar5 = QCamera3StreamMem::getCnt(pQVar8);
    if (uVar5 < 0x40) {
      iVar3 = QCamera3StreamMem::getCnt(pQVar8);
      *(int *)param_1 = iVar3;
      if (iVar3 != 0) goto LAB_000a8d10;
    }
    else {
      *(undefined4 *)param_1 = 0x40;
LAB_000a8d10:
      puVar12 = (uint *)(param_1 + 0x1ac);
      uVar5 = 0;
      do {
        *puVar12 = uVar5;
        uVar6 = QCamera3StreamMem::getSize(pQVar8,uVar5);
        if (uVar6 == 0xffffffb5) {
          if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000a8f46;
          uVar4 = 0x205;
          iVar3 = DAT_000a8f9c + 0xa8df2;
          iVar2 = DAT_000a8fa0 + 0xa8dfc;
          goto LAB_000a8f42;
        }
        puVar12[-100] = uVar6;
        uVar6 = QCamera3StreamMem::getPtr(pQVar8,uVar5);
        puVar12[-0x66] = uVar6;
        uVar6 = QCamera3StreamMem::getFd(pQVar8,uVar5);
        puVar12[-99] = 0;
        puVar12[-0x65] = uVar6;
        __aeabi_memcpy8(puVar12 + -0x62,acStack432,0x188);
        uVar5 = uVar5 + 1;
        puVar12 = puVar12 + 0x68;
      } while (uVar5 < *(uint *)param_1);
    }
    if (*(int *)(this + 0x468) == 1) {
      pQVar8 = *(QCamera3StreamMem **)(param_2 + 0xcc);
      if (pQVar8 == (QCamera3StreamMem *)0x0) {
        if (*(int *)(iVar11 + 0x20) != 0) {
          uVar4 = 0x216;
          iVar3 = DAT_000a8fac + 0xa8e12;
          iVar2 = DAT_000a8fb0 + 0xa8e1a;
          goto LAB_000a8f42;
        }
        goto LAB_000a8f46;
      }
      __aeabi_memclr8(acStack824,0x188);
      QCamera3Stream::getFrameOffset(param_2,acStack824);
      uVar5 = QCamera3StreamMem::getCnt(pQVar8);
      if (uVar5 < 0x40) {
        iVar3 = QCamera3StreamMem::getCnt(pQVar8);
        *(int *)(param_1 + 4) = iVar3;
        if (iVar3 == 0) goto LAB_000a8e7e;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0x40;
      }
      puVar7 = (undefined4 *)(param_1 + 0x6814);
      uVar5 = 0;
      do {
        puVar7[0x66] = uVar5;
        iVar3 = QCamera3StreamMem::getSize(pQVar8,uVar5);
        if (iVar3 == -0x4b) {
          if (*(int *)(iVar11 + 0x20) == 0) goto LAB_000a8f46;
          uVar4 = 0x223;
          iVar3 = DAT_000a8fb4 + 0xa8f3a;
          iVar2 = DAT_000a8fb8 + 0xa8f44;
          goto LAB_000a8f42;
        }
        puVar7[2] = iVar3;
        uVar4 = QCamera3StreamMem::getPtr(pQVar8,uVar5);
        *puVar7 = uVar4;
        uVar4 = QCamera3StreamMem::getFd(pQVar8,uVar5);
        puVar7[3] = 0;
        puVar7[1] = uVar4;
        __aeabi_memcpy8(puVar7 + 4,acStack824,0x188);
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 0x68;
      } while (uVar5 < *(uint *)(param_1 + 4));
    }
LAB_000a8e7e:
    iVar3 = QCamera3StreamMem::getSize(*(QCamera3StreamMem **)(this + 0x46c),*(uint *)param_3);
    if (iVar3 != -0x4b) {
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xd1ac) = 0;
      *(int *)(param_1 + 0xd01c) = iVar3;
      *(undefined4 *)(param_1 + 8) = 1;
      uVar4 = QCamera3StreamMem::getPtr(*(QCamera3StreamMem **)(this + 0x46c),*(uint *)param_3);
      *(undefined4 *)(param_1 + 0xd014) = uVar4;
      uVar4 = QCamera3StreamMem::getFd(*(QCamera3StreamMem **)(this + 0x46c),*(uint *)param_3);
      *(undefined4 *)(param_1 + 0xd020) = 0;
      *(undefined4 *)(param_1 + 0xd018) = uVar4;
      __aeabi_memcpy8(param_1 + 0xd024,acStack432,0x188);
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a8fc8 + 0xa8f1e,0x243,DAT_000a8fc4 + 0xa8f16);
        uVar9 = 0;
      }
      goto LAB_000a8f68;
    }
    if (*(int *)(iVar11 + 0x20) != 0) {
      uVar4 = 0x235;
      iVar3 = DAT_000a8fbc + 0xa8ea4;
      iVar2 = DAT_000a8fc0 + 0xa8eb0;
      goto LAB_000a8f42;
    }
  }
LAB_000a8f46:
  uVar9 = 0xffffffea;
  if (*(int *)(iVar11 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000a8fa8 + 0xa8f66,0x247,DAT_000a8fa4 + 0xa8f5c,0xffffffea);
  }
LAB_000a8f68:
  if (*piVar10 == local_28) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

