
/* qcamera::QCamera3ProcessingChannel::bokehProcessCallback(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3ProcessingChannel::bokehProcessCallback
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  QCamera3ProcessingChannel *this_00;
  int iVar1;
  undefined4 *puVar2;
  mm_camera_super_buf_t *pmVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  mm_camera_buf_def *pmVar7;
  mm_camera_super_buf_t *pmVar8;
  cam_dimension_t cVar9;
  cam_frame_len_offset_t cVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  mm_camera_super_buf_t **ppmVar14;
  int **ppiVar15;
  QCamera3StreamMem *this_01;
  bool bVar16;
  undefined8 uVar17;
  uchar uVar18;
  undefined4 in_stack_fffffc90;
  int *local_1e4;
  int *local_1e0;
  undefined4 *local_1dc;
  uint local_1d4;
  undefined4 local_1d0;
  undefined4 uStack460;
  undefined4 local_1c4;
  undefined4 uStack448;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack436;
  undefined4 local_1b0 [98];
  int local_28;
  
  local_1e4 = *(int **)(DAT_0009e310 + 0x9dfc4);
  local_28 = *local_1e4;
  local_1d0 = 0;
  uStack460 = 0;
  this_00 = (QCamera3ProcessingChannel *)__aeabi_memclr8(local_1b0,0x188);
  iVar1 = checkStreamCbErrors(this_00,param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(DAT_0009e37c + 0x9dfe4) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009e384 + 0x9e000,0x348);
    }
    goto LAB_0009e366;
  }
  uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
  if (*(uint *)(this + 0x14e4) <= uVar11) {
    if (*(int *)(*(int *)(DAT_0009e388 + 0x9e06c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009e390 + 0x9e084,0x34e);
    }
    (**(code **)(*(int *)param_2 + 0xc))(param_2,uVar11);
    goto LAB_0009e366;
  }
  ppiVar15 = (int **)(this + 0x316c);
  local_1dc = (undefined4 *)(this + 0x14e0);
  QCamera3Stream::getFrameDimension(param_2,(cam_dimension_t *)&local_1d0);
  QCamera3Stream::getFrameOffset(param_2,(cam_frame_len_offset_t *)local_1b0);
  iVar1 = QCamera3Stream::getMyType(param_2);
  local_1e0 = (int *)param_2;
  if (iVar1 == 1) {
    pmVar7 = *(mm_camera_buf_def **)(param_1 + 0x10);
    cVar9 = SUB41(local_1d0,0);
    cVar10 = SUB41(uStack460,0);
    iVar1 = 0x188;
    puVar2 = (undefined4 *)&stack0xfffffc90;
    puVar13 = local_1b0;
    do {
      iVar1 = iVar1 + -4;
      *puVar2 = *puVar13;
      uVar18 = (uchar)in_stack_fffffc90;
      puVar2 = puVar2 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar1 != 0);
  }
  else {
    iVar1 = QCamera3Stream::getMyType(param_2);
    if (iVar1 == 4) {
      pmVar7 = *(mm_camera_buf_def **)(param_1 + 0x10);
      cVar9 = SUB41(local_1d0,0);
      cVar10 = SUB41(uStack460,0);
      iVar1 = 0x188;
      puVar2 = (undefined4 *)&stack0xfffffc90;
      puVar13 = local_1b0;
      do {
        iVar1 = iVar1 + -4;
        *puVar2 = *puVar13;
        uVar18 = (uchar)in_stack_fffffc90;
        puVar2 = puVar2 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar1 != 0);
    }
    else {
      iVar1 = QCamera3Stream::getMyType(param_2);
      if (iVar1 != 5) goto LAB_0009e0f0;
      pmVar7 = *(mm_camera_buf_def **)(param_1 + 0x10);
      cVar9 = SUB41(local_1d0,0);
      cVar10 = SUB41(uStack460,0);
      iVar1 = 0x188;
      puVar2 = (undefined4 *)&stack0xfffffc90;
      puVar13 = local_1b0;
      do {
        iVar1 = iVar1 + -4;
        *puVar2 = *puVar13;
        uVar18 = (uchar)in_stack_fffffc90;
        puVar2 = puVar2 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar1 != 0);
    }
  }
  QCamera3Channel::dumpYUV((QCamera3Channel *)this,pmVar7,cVar9,cVar10,uVar18);
LAB_0009e0f0:
  this_01 = (QCamera3StreamMem *)(this + 0x6b0);
  iVar1 = *(int *)(DAT_0009e394 + 0x9e0fa);
  do {
    uVar4 = QCamera3StreamMem::getBufferHandle(this_01,uVar11);
    iVar5 = QCamera3StreamMem::getFrameNumber(this_01,uVar11);
    iVar6 = QCamera3StreamMem::getOldestFrameNumber(this_01,&local_1d4);
    if (((iVar6 != -1) && (iVar6 < iVar5)) &&
       (QCameraParameters::FOCUS_MODES_MAP[*(int *)(this + 4) + 0x14] != '\x01')) {
      if (*(int *)(iVar1 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009e39c + 0x9e334,0x367);
      }
      piVar12 = *ppiVar15;
      if ((int *)piVar12[2] == piVar12) {
        (**(code **)(*local_1e0 + 0x10))(local_1e0,local_1d4);
        piVar12 = *ppiVar15;
      }
      ppmVar14 = (mm_camera_super_buf_t **)operator_new(0xc);
      ppmVar14[2] = (mm_camera_super_buf_t *)piVar12;
      *ppmVar14 = param_1;
      ppmVar14[1] = (mm_camera_super_buf_t *)piVar12[1];
      *(mm_camera_super_buf_t ***)(piVar12[1] + 8) = ppmVar14;
      piVar12[1] = (int)ppmVar14;
      goto LAB_0009e366;
    }
    local_1c4 = *local_1dc;
    uStack448 = uVar4;
    if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x214) << 0x19) < 0) {
      local_1bc = 1;
      if (*(int *)(iVar1 + 0x24) != 0) {
        QCamera3Stream::getMyType(*(QCamera3Stream **)(this + 0x24));
        mm_camera_debug_log(1,2,DAT_0009e3a4 + 0x9e184,0x374);
      }
      (**(code **)(this + 100))(this,iVar5,1,*(undefined4 *)(this + 4));
    }
    else {
      local_1bc = 0;
    }
    local_1b8 = 0xffffffff;
    uStack436 = 0xffffffff;
    if (this[0x7c] == (QCamera3ProcessingChannel)0x0) {
LAB_0009e1ec:
      if (-1 < iVar5) goto LAB_0009e1f0;
LAB_0009e222:
      if (*(int *)(iVar1 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009e3bc + 0x9e23c,0x38e);
      }
    }
    else {
      uVar17 = (**(code **)(*local_1e0 + 0x14))(local_1e0,uVar11);
      iVar6 = (int)((ulonglong)uVar17 >> 0x20);
      bVar16 = (int)uVar17 != 0;
      if (bVar16) {
        iVar6 = *(int *)(iVar1 + 0x20);
      }
      if (bVar16 && iVar6 != 0) {
        mm_camera_debug_log(1,1,DAT_0009e3ac + 0x9e1d2,0x37f);
      }
      uVar17 = QCamera3StreamMem::unregisterBuffer(this_01,uVar11);
      iVar6 = (int)((ulonglong)uVar17 >> 0x20);
      bVar16 = (int)uVar17 != 0;
      if (bVar16) {
        iVar6 = *(int *)(iVar1 + 0x20);
      }
      if (!bVar16 || iVar6 == 0) goto LAB_0009e1ec;
      mm_camera_debug_log(1,1,DAT_0009e3b4 + 0x9e21c,0x385);
      if (iVar5 < 0) goto LAB_0009e222;
LAB_0009e1f0:
      if (*(code **)(this + 0x60) != (code *)0x0) {
        (**(code **)(this + 0x60))(0,&local_1c4,iVar5,0);
      }
    }
    free(param_1);
    ppmVar14 = (mm_camera_super_buf_t **)(*ppiVar15)[2];
    if (ppmVar14 == (mm_camera_super_buf_t **)*ppiVar15) goto LAB_0009e366;
    param_1 = *ppmVar14;
    uVar11 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
    iVar5 = QCamera3StreamMem::getFrameNumber(this_01,uVar11);
    iVar6 = QCamera3StreamMem::getOldestFrameNumber(this_01,&local_1d4);
    if (*(int *)(iVar1 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0009e3c4 + 0x9e290,0x39c);
    }
    if ((iVar6 != -1) && (iVar6 < iVar5)) break;
    if (iVar6 == iVar5) {
      if (*(int *)(iVar1 + 0x20) != 0) {
        uVar4 = 0x3a3;
        iVar5 = DAT_0009e3d4 + 0x9e2c0;
LAB_0009e2da:
        mm_camera_debug_log(1,1,iVar5,uVar4);
      }
    }
    else if (*(int *)(iVar1 + 0x20) != 0) {
      uVar4 = 0x3a6;
      iVar5 = DAT_0009e3dc + 0x9e2dc;
      goto LAB_0009e2da;
    }
    pmVar3 = ppmVar14[1];
    pmVar8 = ppmVar14[2];
    *(mm_camera_super_buf_t **)(pmVar3 + 8) = pmVar8;
    *(mm_camera_super_buf_t **)(pmVar8 + 4) = pmVar3;
    operator_delete(ppmVar14);
  } while( true );
  if (*(int *)(iVar1 + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009e3cc + 0x9e300,0x39f);
  }
  (**(code **)(*local_1e0 + 0x10))(local_1e0,local_1d4);
LAB_0009e366:
  if (*local_1e4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

