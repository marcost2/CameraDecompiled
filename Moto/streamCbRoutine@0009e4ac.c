
/* qcamera::QCamera3ProcessingChannel::streamCbRoutine(mm_camera_super_buf_t*,
   qcamera::QCamera3Stream*) */

void __thiscall
qcamera::QCamera3ProcessingChannel::streamCbRoutine
          (QCamera3ProcessingChannel *this,mm_camera_super_buf_t *param_1,QCamera3Stream *param_2)

{
  BSTBokehParam *this_00;
  int iVar1;
  QCamera3ProcessingChannel *this_01;
  mm_camera_super_buf_t *pmVar2;
  undefined4 uVar3;
  int iVar4;
  mm_camera_buf_def *pmVar5;
  mm_camera_super_buf_t *pmVar6;
  cam_dimension_t cVar7;
  cam_frame_len_offset_t cVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  mm_camera_super_buf_t **ppmVar12;
  int *piVar13;
  QCamera3StreamMem *this_02;
  uchar uVar14;
  QCamera3Stream *in_stack_fffffc88;
  uint *local_1e8;
  int *local_1e4;
  undefined4 *local_1dc;
  int **local_1d8;
  uint local_1d4;
  undefined4 local_1d0;
  undefined4 uStack460;
  undefined4 local_1c4;
  undefined4 uStack448;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack436;
  int local_1b0 [98];
  int local_28;
  
  local_1e4 = *(int **)(DAT_0009e7d0 + 0x9e4c0);
  local_28 = *local_1e4;
  QCamera3Stream::getFrameDimension(param_2,(cam_dimension_t *)local_1b0);
  iVar9 = *(int *)(this + 4);
  this_00 = (BSTBokehParam *)BSTBokehParam::createInstance();
  iVar1 = BSTBokehParam::getStereoMode(this_00);
  if (iVar1 != 0) {
    iVar1 = *(int *)(QCameraParameters::SCENE_MODES_MAP + iVar9 + 0x80);
    if ((local_1b0[1] != *(int *)(QCameraParameters::SCENE_MODES_MAP + iVar9 + 0x78)) ||
       (local_1b0[0] != *(int *)(QCameraParameters::SCENE_MODES_MAP + iVar9 + 0x74))) {
      iVar4 = iVar1;
      if (local_1b0[1] == iVar1) {
        iVar4 = local_1b0[0];
      }
      if (local_1b0[1] != iVar1 ||
          iVar4 != *(int *)(QCameraParameters::SCENE_MODES_MAP + iVar9 + 0x7c)) goto LAB_0009e538;
    }
    in_stack_fffffc88 = param_2;
    iVar1 = (**(code **)(**(int **)(this + 0x90) + 0x20))
                      (*(int **)(this + 0x90),*(undefined4 *)(iVar9 + 0x60),
                       *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),param_1);
    if (iVar1 == 0) goto LAB_0009e94a;
  }
LAB_0009e538:
  local_1e8 = *(uint **)(DAT_0009e7d4 + 0x9e53e);
  if (1 < *local_1e8) {
    if ((**(byte **)(DAT_0009e7d8 + 0x9e54a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009e7dc + 0x9e55a) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0009e97c + 0x9e966);
    }
  }
  local_1d0 = 0;
  uStack460 = 0;
  this_01 = (QCamera3ProcessingChannel *)__aeabi_memclr8(local_1b0,0x188);
  iVar1 = checkStreamCbErrors(this_01,param_1,param_2);
  if (iVar1 == 0) {
    uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
    if (uVar10 < *(uint *)(this + 0x14e4)) {
      if (this[0x698] != (QCamera3ProcessingChannel)0x0) {
        iVar1 = QCamera3Stream::getMyType(param_2);
        showDebugFPS(this,iVar1);
      }
      local_1d8 = (int **)(this + 0x316c);
      local_1dc = (undefined4 *)(this + 0x14e0);
      QCamera3Stream::getFrameDimension(param_2,(cam_dimension_t *)&local_1d0);
      QCamera3Stream::getFrameOffset(param_2,(cam_frame_len_offset_t *)local_1b0);
      iVar1 = QCamera3Stream::getMyType(param_2);
      if (iVar1 == 1) {
        pmVar5 = *(mm_camera_buf_def **)(param_1 + 0x10);
        cVar7 = SUB41(local_1d0,0);
        cVar8 = SUB41(uStack460,0);
        iVar1 = 0x188;
        piVar11 = local_1b0;
        piVar13 = (int *)&stack0xfffffc88;
        do {
          iVar1 = iVar1 + -4;
          *piVar13 = *piVar11;
          uVar14 = (uchar)in_stack_fffffc88;
          piVar11 = piVar11 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar1 != 0);
LAB_0009e69c:
        QCamera3Channel::dumpYUV((QCamera3Channel *)this,pmVar5,cVar7,cVar8,uVar14);
      }
      else {
        iVar1 = QCamera3Stream::getMyType(param_2);
        if (iVar1 == 4) {
          pmVar5 = *(mm_camera_buf_def **)(param_1 + 0x10);
          cVar7 = SUB41(local_1d0,0);
          cVar8 = SUB41(uStack460,0);
          iVar1 = 0x188;
          piVar11 = local_1b0;
          piVar13 = (int *)&stack0xfffffc88;
          do {
            iVar1 = iVar1 + -4;
            *piVar13 = *piVar11;
            uVar14 = (uchar)in_stack_fffffc88;
            piVar11 = piVar11 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar1 != 0);
          goto LAB_0009e69c;
        }
        iVar1 = QCamera3Stream::getMyType(param_2);
        if (iVar1 == 5) {
          pmVar5 = *(mm_camera_buf_def **)(param_1 + 0x10);
          cVar7 = SUB41(local_1d0,0);
          cVar8 = SUB41(uStack460,0);
          iVar1 = 0x188;
          piVar11 = local_1b0;
          piVar13 = (int *)&stack0xfffffc88;
          do {
            iVar1 = iVar1 + -4;
            *piVar13 = *piVar11;
            uVar14 = (uchar)in_stack_fffffc88;
            piVar11 = piVar11 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar1 != 0);
          goto LAB_0009e69c;
        }
      }
      this_02 = (QCamera3StreamMem *)(this + 0x6b0);
      iVar1 = *(int *)(DAT_0009e994 + 0x9e6b0);
      while( true ) {
        uVar3 = QCamera3StreamMem::getBufferHandle(this_02,uVar10);
        iVar9 = QCamera3StreamMem::getFrameNumber(this_02,uVar10);
        iVar4 = QCamera3StreamMem::getOldestFrameNumber(this_02,&local_1d4);
        if (((iVar4 != -1) && (iVar4 < iVar9)) &&
           (QCameraParameters::FOCUS_MODES_MAP[*(int *)(this + 4) + 0x14] != '\x01')) {
          if (*(int *)(iVar1 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0009e99c + 0x9e8f8,0x402);
          }
          piVar11 = *local_1d8;
          if ((int *)piVar11[2] == piVar11) {
            (**(code **)(*(int *)param_2 + 0x10))(param_2,local_1d4);
            piVar11 = *local_1d8;
          }
          ppmVar12 = (mm_camera_super_buf_t **)operator_new(0xc);
          ppmVar12[2] = (mm_camera_super_buf_t *)piVar11;
          *ppmVar12 = param_1;
          ppmVar12[1] = (mm_camera_super_buf_t *)piVar11[1];
          *(mm_camera_super_buf_t ***)(piVar11[1] + 8) = ppmVar12;
          piVar11[1] = (int)ppmVar12;
          goto LAB_0009e92a;
        }
        local_1c4 = *local_1dc;
        uStack448 = uVar3;
        if ((int)((uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x214) << 0x19) < 0) {
          local_1bc = 1;
          if (*(int *)(iVar1 + 0x24) != 0) {
            QCamera3Stream::getMyType(*(QCamera3Stream **)(this + 0x24));
            mm_camera_debug_log(1,2,DAT_0009e9a4 + 0x9e73e,0x40f);
          }
          (**(code **)(this + 100))(this,iVar9,1,*(undefined4 *)(this + 4));
        }
        else {
          local_1bc = 0;
        }
        local_1b8 = 0xffffffff;
        uStack436 = 0xffffffff;
        if (this[0x7c] != (QCamera3ProcessingChannel)0x0) {
          iVar4 = (**(code **)(*(int *)param_2 + 0x14))(param_2,uVar10);
          if ((iVar4 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,DAT_0009e9ac + 0x9e788,0x41a);
          }
          iVar4 = QCamera3StreamMem::unregisterBuffer(this_02,uVar10);
          if ((iVar4 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
            mm_camera_debug_log(1,1,DAT_0009e9b4 + 0x9e7b2,0x420);
          }
        }
        if (iVar9 < 0) {
          if (*(int *)(iVar1 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_0009e9bc + 0x9e806,0x429);
          }
        }
        else if (*(code **)(this + 0x60) != (code *)0x0) {
          (**(code **)(this + 0x60))(0,&local_1c4,iVar9,0);
        }
        free(param_1);
        ppmVar12 = (mm_camera_super_buf_t **)(*local_1d8)[2];
        if (ppmVar12 == (mm_camera_super_buf_t **)*local_1d8) goto LAB_0009e92a;
        param_1 = *ppmVar12;
        uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0xc);
        iVar9 = QCamera3StreamMem::getFrameNumber(this_02,uVar10);
        iVar4 = QCamera3StreamMem::getOldestFrameNumber(this_02,&local_1d4);
        if (*(int *)(iVar1 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0009e9c4 + 0x9e85a,0x437);
        }
        if ((iVar4 != -1) && (iVar4 < iVar9)) break;
        if (iVar4 == iVar9) {
          if (*(int *)(iVar1 + 0x20) != 0) {
            uVar3 = 0x43e;
            iVar9 = DAT_0009e9d4 + 0x9e88a;
LAB_0009e8a4:
            mm_camera_debug_log(1,1,iVar9,uVar3);
          }
        }
        else if (*(int *)(iVar1 + 0x20) != 0) {
          uVar3 = 0x441;
          iVar9 = DAT_0009e9dc + 0x9e8a6;
          goto LAB_0009e8a4;
        }
        pmVar2 = ppmVar12[1];
        pmVar6 = ppmVar12[2];
        *(mm_camera_super_buf_t **)(pmVar2 + 8) = pmVar6;
        *(mm_camera_super_buf_t **)(pmVar6 + 4) = pmVar2;
        operator_delete(ppmVar12);
      }
      if (*(int *)(iVar1 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009e9cc + 0x9e8ca,0x43a);
      }
      (**(code **)(*(int *)param_2 + 0x10))(param_2,local_1d4);
    }
    else {
      if (*(int *)(*(int *)(DAT_0009e988 + 0x9e620) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0009e990 + 0x9e638,0x3e5);
      }
      (**(code **)(*(int *)param_2 + 0xc))(param_2,uVar10);
    }
  }
  else if (*(int *)(*(int *)(DAT_0009e7e0 + 0x9e582) + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0009e7e8 + 0x9e59e,0x3df);
  }
LAB_0009e92a:
  if (1 < *local_1e8) {
    if ((**(byte **)(DAT_0009e980 + 0x9e936) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0009e984 + 0x9e944) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
LAB_0009e94a:
  if (*local_1e4 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

