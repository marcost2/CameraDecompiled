
/* qcamera::QCamera2HardwareInterface::video_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::video_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  QCameraStream QVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  int iVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  QCameraMemory *this;
  mm_camera_buf_def *pmVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  int iVar20;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined8 extraout_d0;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  int local_28;
  
  piVar19 = *(int **)(DAT_000db1f4 + 0xdae8a);
  local_28 = *piVar19;
  puVar16 = *(uint **)(DAT_000db1f8 + 0xdae98);
  if (1 < *puVar16) {
    if ((**(byte **)(DAT_000db1fc + 0xdaea8) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000db200 + 0xdaeb8) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000db608 + 0xdb5e4);
    }
  }
  iVar12 = *(int *)(DAT_000db204 + 0xdaec6);
  piVar3 = *(int **)(iVar12 + 0x2c);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)mm_camera_debug_log(1,4,DAT_000db20c + 0xdaede,0x6a7,DAT_000db208 + 0xdaed6);
  }
  if (param_3 != (void *)0x0) {
    piVar3 = *(int **)((int)param_3 + 0x60);
  }
  if ((param_3 != (void *)0x0 && piVar3 != (int *)0x0) && (*piVar3 == *(int *)param_1)) {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    iVar5 = needDebugFps();
    if (iVar5 != 0) {
      piVar3 = (int *)((int)param_3 + 0x1bec);
      *piVar3 = *piVar3 + 1;
      lVar22 = systemTime(extraout_s0,1);
      lVar2 = lVar22 - *(longlong *)((int)param_3 + 0x1bf8);
      uVar6 = (uint)lVar2;
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      if ((int)(iVar5 - (uint)(uVar6 < 0xee6b281)) < 0 ==
          (SBORROW4(iVar5,(uint)(uVar6 < 0xee6b281)) != false)) {
        __floatdidf(uVar6,iVar5);
        iVar5 = *piVar3;
        *(double *)((int)param_3 + 0x1c00) =
             ((double)(longlong)(iVar5 - *(int *)((int)param_3 + 0x1bf0)) * DAT_000db220) /
             (double)CONCAT44(extraout_r1,uVar6);
        if (*(int *)(iVar12 + 0x34) != 0) {
          mm_camera_debug_log(1,6,DAT_000db22c + 0xdafe0,0xd1d,DAT_000db228 + 0xdafd8);
          iVar5 = *piVar3;
        }
        *(int *)(longlong *)((int)param_3 + 0x1bf8) = (int)lVar22;
        *(int *)((int)param_3 + 0x1bfc) = (int)((ulonglong)lVar22 >> 0x20);
        *(int *)((int)param_3 + 0x1bf0) = iVar5;
      }
    }
    if (*(char *)((int)param_3 + 0x9d9) != '\0') {
      if (*(int *)(iVar12 + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000db234 + 0xdb010,0x6b8,DAT_000db230 + 0xdb008);
      }
      *(undefined *)((int)param_3 + 0x9d9) = 0;
    }
    if (*(int *)(iVar12 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000db23c + 0xdb040,0x6be,DAT_000db238 + 0xdb02c,*puVar4,puVar4[5],
                          puVar4[6]);
    }
    if (puVar4[2] == 0) {
      iVar5 = QCameraParametersIntf::getVideoBatchSize
                        ((QCameraParametersIntf *)((int)param_3 + 0x4ac));
      if (iVar5 == 0) {
        iVar5 = puVar4[5];
        iVar7 = puVar4[6];
        uVar9 = dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,
                                (mm_camera_buf_def *)puVar4,2,(char *)0x0);
        piVar3 = (int *)puVar4[0x84];
        if (piVar3 != (int *)0x0) {
          lVar2 = (longlong)iVar5 * 1000000000 + (longlong)iVar7;
          iVar5 = (int)lVar2;
          uVar17 = (undefined4)((ulonglong)lVar2 >> 0x20);
          uVar6 = (**(code **)(*piVar3 + 0x1c))
                            (uVar9,piVar3,puVar4[3],0 < *(int *)((int)param_3 + 0x4b8));
          if (*(int *)(iVar12 + 0x28) != 0) {
            mm_camera_debug_log(extraout_s0_01,1,3,DAT_000db630 + 0xdb39a,0x6cc,
                                DAT_000db62c + 0xdb392);
          }
joined_r0x000db39e:
          if (uVar6 != 0) goto LAB_000db55a;
        }
      }
      else {
        uVar9 = dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,
                                (mm_camera_buf_def *)puVar4,2,(char *)0x0);
        uVar6 = *(uint *)(param_2 + 0x18);
        piVar3 = (int *)puVar4[0x84];
        if ((uVar6 == 0) || (param_2[0x1c] == (QCameraStream)0xff)) {
          if (param_2[0x28] == (QCameraStream)0x0) {
            uVar13 = 0;
          }
          else if (param_2[0x3a] == (QCameraStream)0x0) {
            uVar13 = 1;
          }
          else {
            if (param_2[0x4c] != (QCameraStream)0x0) goto LAB_000db3e6;
            uVar13 = 2;
          }
          uVar6 = (**(code **)(*piVar3 + 0x1c))(uVar9,piVar3,uVar13,1);
          param_2[0x1d] = SUB41(uVar13,0);
          param_2[0x1c] = (QCameraStream)0x0;
          *(uint *)(param_2 + 0x18) = uVar6;
          param_2[(uVar13 | uVar13 << 3) * 2 + 0x29] = (QCameraStream)0x0;
        }
LAB_000db3e6:
        iVar5 = QCameraVideoMemory::getNativeHandle
                          ((QCameraVideoMemory *)piVar3,(int)(char)param_2[0x1d],true);
        if (uVar6 == 0 || iVar5 == 0) {
          uVar9 = extraout_s0_02;
          if (*(int *)(iVar12 + 0x20) != 0) {
            uVar9 = mm_camera_debug_log(extraout_s0_02,1,1,DAT_000db610 + 0xdb416,0x6e3,
                                        DAT_000db60c + 0xdb40e);
          }
          param_2[0x1c] = (QCameraStream)0xff;
          (**(code **)(*(int *)param_2 + 0x10))(uVar9,param_2,puVar4[3]);
          goto LAB_000daf08;
        }
        iVar10 = (int)(char)param_2[0x1c];
        uVar13 = QCameraParametersIntf::getVideoBatchSize
                           ((QCameraParametersIntf *)((int)param_3 + 0x4ac));
        lVar2 = (longlong)(int)puVar4[5] * 1000000000 + (longlong)(int)puVar4[6];
        iVar7 = (int)lVar2;
        if (iVar10 == 0) {
          *(int *)(param_2 + 0x20) = iVar7;
          *(int *)(param_2 + 0x24) = (int)((ulonglong)lVar2 >> 0x20);
        }
        param_2[iVar10 + (char)param_2[0x1d] * 0x12 + 0x2a] = SUB41(puVar4[3],0);
        param_2[(char)param_2[0x1d] * 0x12 + 0x29] =
             (QCameraStream)((char)param_2[(char)param_2[0x1d] * 0x12 + 0x29] + '\x01');
        param_2[(char)param_2[0x1d] * 0x12 + 0x28] = (QCameraStream)0x1;
        uVar9 = QCameraMemory::getFd((QCameraMemory *)piVar3,puVar4[3]);
        iVar5 = iVar5 + 0xc;
        *(undefined4 *)(iVar5 + iVar10 * 4) = uVar9;
        *(undefined4 *)(iVar5 + (uVar13 + iVar10) * 4) = 0;
        uVar9 = QCameraMemory::getSize((QCameraMemory *)piVar3,puVar4[3]);
        *(undefined4 *)(iVar5 + (iVar10 + uVar13 * 2) * 4) = uVar9;
        *(int *)(iVar5 + (uVar13 * 3 + iVar10) * 4) = piVar3[0x209];
        *(int *)(iVar5 + (iVar10 + uVar13 * 4) * 4) = iVar7 - *(int *)(param_2 + 0x20);
        *(int *)(iVar5 + (uVar13 * 5 + iVar10) * 4) = piVar3[0x20a];
        QVar1 = param_2[0x1c];
        param_2[0x1c] = (QCameraStream)((char)QVar1 + 1U);
        if ((uint)(byte)((char)QVar1 + 1U) == (uVar13 & 0xff)) {
          iVar5 = *(int *)(param_2 + 0x20);
          uVar17 = *(undefined4 *)(param_2 + 0x24);
          if (*(int *)(iVar12 + 0x28) != 0) {
            mm_camera_debug_log(extraout_s0_03,1,3,DAT_000db618 + 0xdb53e,0x70a,
                                DAT_000db614 + 0xdb536);
          }
          *(undefined2 *)(param_2 + 0x1c) = 0xffff;
          *(undefined4 *)(param_2 + 0x18) = 0;
          goto joined_r0x000db39e;
        }
      }
      goto LAB_000db2f6;
    }
    piVar3 = (int *)puVar4[0x84];
    if (piVar3 == (int *)0x0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar9 = mm_camera_debug_log(1,1,DAT_000db620 + 0xdb2ca,0x71a,DAT_000db61c + 0xdb2c2);
        goto LAB_000db2cc;
      }
LAB_000db2e8:
      pcVar11 = *(code **)(*(int *)param_2 + 0x10);
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
LAB_000db2f4:
      (*pcVar11)(param_2,uVar9);
    }
    else {
      uVar13 = (uint)(byte)*(mm_camera_buf_def *)((int)puVar4 + 0x21);
      uVar6 = (**(code **)(*piVar3 + 0x1c))(piVar3,puVar4[3],1);
      iVar7 = QCameraVideoMemory::getNativeHandle((QCameraVideoMemory *)piVar3,puVar4[3],true);
      uVar9 = (undefined4)extraout_d0;
      if (iVar7 == 0) {
LAB_000db2cc:
        if (*(int *)(iVar12 + 0x20) != 0) {
          mm_camera_debug_log(uVar9,1,1,DAT_000db628 + 0xdb2e6,0x741,DAT_000db624 + 0xdb2de);
        }
        goto LAB_000db2e8;
      }
      lVar2 = (longlong)(int)puVar4[5] * 1000000000 + (longlong)(int)puVar4[6];
      iVar5 = (int)lVar2;
      uVar17 = (undefined4)((ulonglong)lVar2 >> 0x20);
      if (uVar13 != 0) {
        iVar10 = iVar7 + 0xc;
        iVar20 = 0;
        uVar21 = extraout_d0;
        do {
          iVar8 = *(int *)((int)puVar4 + iVar20 + 0x24);
          if (-1 < iVar8) {
            pmVar14 = (mm_camera_buf_def *)(iVar8 * 0x218 + puVar4[0x19]);
            iVar8 = *(int *)(pmVar14 + 0x14);
            iVar15 = *(int *)(pmVar14 + 0x18);
            this = *(QCameraMemory **)(pmVar14 + 0x210);
            uVar18 = *(undefined4 *)(this + 0x824);
            uVar9 = QCameraMemory::getFd(this,*(uint *)(pmVar14 + 0xc));
            *(undefined4 *)(iVar10 + iVar20) = uVar9;
            *(undefined4 *)(iVar10 + uVar13 * 4 + iVar20) = 0;
            uVar9 = QCameraMemory::getSize(this,*(uint *)(pmVar14 + 0xc));
            *(undefined4 *)(iVar10 + uVar13 * 8 + iVar20) = uVar9;
            *(undefined4 *)(iVar7 + uVar13 * 0xc + 0xc + iVar20) = uVar18;
            *(int *)(iVar10 + uVar13 * 0x10 + iVar20) = (iVar15 - iVar5) + iVar8 * 1000000000;
            *(undefined4 *)(iVar10 + uVar13 * 0x14 + iVar20) = *(undefined4 *)(this + 0x828);
            if (*(int *)(iVar12 + 0x2c) != 0) {
              mm_camera_debug_log(extraout_s0_00,1,4,DAT_000db244 + 0xdb190,0x739,
                                  DAT_000db240 + 0xdb188);
            }
            uVar21 = dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar14,2,
                                     (char *)0x0);
          }
          uVar9 = (undefined4)uVar21;
          iVar20 = iVar20 + 4;
        } while (uVar13 << 2 != iVar20);
      }
      if (*(int *)(iVar12 + 0x28) == 0) goto joined_r0x000db39e;
      mm_camera_debug_log(uVar9,1,3,DAT_000db24c + 0xdb1e2,0x73f,DAT_000db248 + 0xdb1da);
      if (uVar6 == 0) goto LAB_000db2f6;
LAB_000db55a:
      if ((*(int *)((int)param_3 + 0x4c4) != 0) &&
         (iVar7 = msgTypeEnabledWithLock((QCamera2HardwareInterface *)param_3,0x20), 0 < iVar7)) {
        uStack64 = 0;
        local_58 = 0;
        local_38 = 0;
        uStack48 = 0;
        local_5c = 0x20;
        local_60 = 2;
        local_48 = CONCAT44(uVar17,iVar5);
        local_50 = (ulonglong)uVar6;
        iVar5 = QCameraCbNotifier::notifyCallback
                          ((QCameraCbNotifier *)((int)param_3 + 0x854),
                           (qcamera_callback_argm_t *)&local_60);
        if (iVar5 == 0) goto LAB_000db2f6;
        if (*(int *)(iVar12 + 0x20) != 0) {
          mm_camera_debug_log(extraout_s0_04,1,1,DAT_000db638 + 0xdb5ca,0x751,DAT_000db634 + 0xdb5c2
                             );
        }
        uVar9 = puVar4[3];
        pcVar11 = *(code **)(*(int *)param_2 + 0x10);
        goto LAB_000db2f4;
      }
    }
LAB_000db2f6:
    free(param_1);
    if (*(int *)(iVar12 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000db640 + 0xdb31a,0x758,DAT_000db63c + 0xdb312);
    }
  }
  else {
    if (*(int *)(iVar12 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000db214 + 0xdaf04,0x6ac,DAT_000db210 + 0xdaefc);
    }
LAB_000daf08:
    free(param_1);
  }
  if (1 < *puVar16) {
    if ((**(byte **)(DAT_000db218 + 0xdaf1a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000db21c + 0xdaf2a) + 1) << 0x1d) < 0) {
      if (*piVar19 == local_28) {
        atrace_end_body();
        return;
      }
      goto LAB_000db602;
    }
  }
  if (*piVar19 == local_28) {
    return;
  }
LAB_000db602:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

