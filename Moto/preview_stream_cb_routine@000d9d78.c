
/* qcamera::QCamera2HardwareInterface::preview_stream_cb_routine(mm_camera_super_buf_t*,
   qcamera::QCameraStream*, void*) */

void qcamera::QCamera2HardwareInterface::preview_stream_cb_routine
               (mm_camera_super_buf_t *param_1,QCameraStream *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  MotSmoothZoom *this;
  uint uVar13;
  QCameraParametersIntf *this_00;
  QCameraStream *pQVar14;
  int *this_01;
  int *piVar15;
  mm_camera_buf_def *pmVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  longlong lVar20;
  int iVar21;
  uint in_stack_ffffff94;
  
  piVar17 = *(int **)(DAT_000da0c0 + 0xd9d8a);
  if (*piVar17 != 0) {
    if ((**(byte **)(DAT_000da0c4 + 0xd9d9a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000da0c8 + 0xd9daa) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_000da360 + 0xda342);
    }
  }
  iVar18 = *(int *)(DAT_000da0cc + 0xd9db8);
  if (*(int *)(iVar18 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000da0d4 + 0xd9dd4,0x40e,DAT_000da0d0 + 0xd9dcc);
  }
  if (param_3 == (void *)0x0) {
    if (*(int *)(iVar18 + 0x20) != 0) {
      uVar19 = 0x415;
      iVar18 = DAT_000da0e0 + 0xd9e9e;
      iVar2 = DAT_000da0e4 + 0xd9ea6;
LAB_000d9ed8:
      mm_camera_debug_log(1,1,iVar2,uVar19,iVar18);
    }
  }
  else {
    this_01 = *(int **)(*(int *)(param_1 + 0x10) + 0x210);
    if (this_01 == (int *)0x0) {
      if (*(int *)(iVar18 + 0x20) != 0) {
        uVar19 = 0x41a;
        iVar18 = DAT_000da0e8 + 0xd9eb8;
        iVar2 = DAT_000da0ec + 0xd9ec0;
        goto LAB_000d9ed8;
      }
    }
    else {
      kpi_preview_stream_cb_routine((QCamera2HardwareInterface *)param_3);
      pmVar16 = *(mm_camera_buf_def **)(param_1 + 0x10);
      if (pmVar16 != (mm_camera_buf_def *)0x0) {
        this_00 = (QCameraParametersIntf *)((int)param_3 + 0x4ac);
        iVar2 = QCameraParametersIntf::isInstantAECEnabled(this_00);
        if ((iVar2 != 0) ||
           (iVar2 = QCameraParametersIntf::isInstantCaptureEnabled(this_00), iVar2 != 0)) {
          *(char *)((int)param_3 + 0x1c21) = *(char *)((int)param_3 + 0x1c21) + '\x01';
        }
        __mutex = (pthread_mutex_t *)((int)param_3 + 0x1df8);
        pthread_mutex_lock(__mutex);
        pQVar14 = param_2 + 0x10084;
        if ((param_2[0x10084] == (QCameraStream)0x0) &&
           (*(undefined4 *)((int)param_3 + 0x1e18) = *(undefined4 *)(pmVar16 + 0x1c),
           *pQVar14 == (QCameraStream)0x0)) {
          iVar2 = needProcessPreviewFrame
                            ((QCamera2HardwareInterface *)param_3,*(uint *)(pmVar16 + 0x1c));
          if (iVar2 != 0) {
            if (*pQVar14 != (QCameraStream)0x0) goto LAB_000d9e42;
            goto LAB_000d9f20;
          }
LAB_000d9e58:
          pthread_mutex_unlock(__mutex);
          if (*(int *)(iVar18 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000da0dc + 0xd9e78,0x450,DAT_000da0d8 + 0xd9e70);
          }
          (**(code **)(*(int *)param_2 + 0x10))(param_2,*(undefined4 *)(pmVar16 + 0xc));
          uVar3 = 1;
        }
        else {
LAB_000d9e42:
          if (*(char *)((int)this_01 + *(uint *)(pmVar16 + 0xc) + 0x818) != '\0') {
            QCameraGrallocMemory::setBufferStatus
                      ((QCameraGrallocMemory *)this_01,*(uint *)(pmVar16 + 0xc),0);
            goto LAB_000d9e58;
          }
LAB_000d9f20:
          pthread_mutex_unlock(__mutex);
          uVar3 = 0;
        }
        uVar4 = *(uint *)(pmVar16 + 0xc);
        iVar2 = 0;
        uVar19 = dumpFrameToFile((QCamera2HardwareInterface *)param_3,param_2,pmVar16,1,(char *)0x0)
        ;
        if (*(char *)((int)param_3 + 0x9d8) != '\0') {
          if (*(int *)(iVar18 + 0x34) != 0) {
            iVar2 = DAT_000da100 + 0xd9f5c;
            mm_camera_debug_log(uVar19,1,6,DAT_000da104 + 0xd9f64,0x45f);
          }
          *(undefined *)((int)param_3 + 0x9d8) = 0;
        }
        piVar15 = (int *)((int)param_3 + 0x1c08);
        this = *(MotSmoothZoom **)((int)param_3 + 0x1ec8);
        if (this[0x39] != (MotSmoothZoom)0x0) {
          lVar1 = (longlong)*(int *)(pmVar16 + 0x14) * 1000000000 +
                  (longlong)*(int *)(pmVar16 + 0x18);
          uVar5 = __aeabi_ldivmod((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),(uint)&DAT_000f4240,0
                                 );
          MotSmoothZoom::frameUpdate(this,uVar5);
        }
        uVar5 = (uint)(byte)*pQVar14;
        if (uVar5 != 0) {
          uVar5 = 1;
        }
        if ((uVar5 | uVar3) == 0) {
          iVar7 = needDebugFps();
          if (iVar7 != 0) {
            *piVar15 = *piVar15 + 1;
            lVar20 = systemTime(extraout_s0,1);
            lVar1 = lVar20 - *(longlong *)((int)param_3 + 0x1c10);
            uVar5 = (uint)lVar1;
            iVar7 = (int)((ulonglong)lVar1 >> 0x20);
            if ((int)(iVar7 - (uint)(uVar5 < 0xee6b281)) < 0 ==
                (SBORROW4(iVar7,(uint)(uVar5 < 0xee6b281)) != false)) {
              __floatdidf(uVar5,iVar7);
              iVar7 = *piVar15;
              *(double *)((int)param_3 + 0x1c18) =
                   ((double)(longlong)(iVar7 - *(int *)((int)param_3 + 0x1c0c)) * DAT_000da358) /
                   (double)CONCAT44(extraout_r1,uVar5);
              if (*(int *)(iVar18 + 0x34) != 0) {
                iVar2 = DAT_000da364 + 0xda054;
                mm_camera_debug_log(1,6,DAT_000da368 + 0xda05c,0xd35);
                iVar7 = *piVar15;
              }
              *(int *)(longlong *)((int)param_3 + 0x1c10) = (int)lVar20;
              *(int *)((int)param_3 + 0x1c14) = (int)((ulonglong)lVar20 >> 0x20);
              *(int *)((int)param_3 + 0x1c0c) = iVar7;
            }
          }
          if (*(int *)(iVar18 + 0x2c) != 0) {
            iVar2 = DAT_000da36c + 0xda07e;
            in_stack_ffffff94 = uVar4;
            mm_camera_debug_log(1,4,DAT_000da370 + 0xda088,0x471);
          }
          uVar5 = QCameraGrallocMemory::enqueueBuffer
                            ((uint)this_01,CONCAT44(in_stack_ffffff94,iVar2));
          if (uVar5 == 0) {
            pthread_mutex_lock(__mutex);
            bVar12 = *(char *)((int)param_3 + 0x1dfc) + 1;
            *(byte *)((int)param_3 + 0x1dfc) = bVar12;
            goto LAB_000da11c;
          }
          if (*(int *)(iVar18 + 0x20) == 0) {
            bVar12 = 0;
          }
          else {
            mm_camera_debug_log(extraout_s0_00,1,1,DAT_000da378 + 0xda0b8,0x47d,
                                DAT_000da374 + 0xda0b0);
            bVar12 = 0;
          }
        }
        else {
          pthread_mutex_lock(__mutex);
          bVar12 = *(byte *)((int)param_3 + 0x1dfc);
LAB_000da11c:
          pthread_mutex_unlock(__mutex);
          uVar5 = 0;
        }
        uVar6 = (**(code **)*this_01)(this_01);
        if (*(int *)(iVar18 + 0x2c) != 0) {
          mm_camera_debug_log(extraout_s0_01,1,4,DAT_000da380 + 0xda150,0x491,DAT_000da37c + 0xda140
                              ,bVar12,uVar6);
        }
        if (bVar12 != 0) {
          uVar13 = 0;
          iVar2 = DAT_000da384 + 0xda176;
          iVar7 = DAT_000da388 + 0xda17c;
          do {
            uVar8 = QCameraGrallocMemory::dequeueBuffer((QCameraGrallocMemory *)this_01);
            uVar19 = extraout_s0_02;
            if (*(int *)(iVar18 + 0x2c) != 0) {
              uVar19 = mm_camera_debug_log(extraout_s0_02,1,4,DAT_000da390 + 0xda1aa,0x495,
                                           DAT_000da38c + 0xda19a,uVar8,uVar6 & 0xff);
            }
            if (((int)uVar8 < 0) ||
               (iVar9 = QCameraMemory::getCnt((QCameraMemory *)this_01), uVar19 = extraout_s0_03,
               iVar9 <= (int)uVar8)) {
              if (*(int *)(iVar18 + 0x20) != 0) {
                mm_camera_debug_log(uVar19,1,1,DAT_000da398 + 0xda2ba,0x498,DAT_000da394 + 0xda2b0,
                                    uVar8);
              }
              break;
            }
            pthread_mutex_lock(__mutex);
            *(char *)((int)param_3 + 0x1dfc) = *(char *)((int)param_3 + 0x1dfc) + -1;
            pthread_mutex_unlock(__mutex);
            if ((int)(uVar6 & 0xff) <= (int)uVar8) {
              uVar5 = QCameraStream::mapNewBuffer(param_2,uVar8);
              iVar9 = (**(code **)(*this_01 + 4))(extraout_s0_04,this_01);
              if (iVar9 == 0) {
                if (*(int *)(iVar18 + 0x28) != 0) {
                  mm_camera_debug_log(extraout_s0_05,1,3,DAT_000da3a8 + 0xda238,0x4a8,
                                      DAT_000da3a4 + 0xda230);
                }
              }
              else {
                pthread_mutex_lock((pthread_mutex_t *)((int)param_3 + 0x1e10));
                pthread_cond_signal((pthread_cond_t *)((int)param_3 + 0x1e14));
                if (*(int *)(iVar18 + 0x28) != 0) {
                  mm_camera_debug_log(1,3,DAT_000da3a0 + 0xda214,0x4a6,DAT_000da39c + 0xda20c);
                }
                pthread_mutex_unlock((pthread_mutex_t *)((int)param_3 + 0x1e10));
              }
            }
            uVar6 = (**(code **)*this_01)(this_01);
            if ((int)uVar5 < 0) {
              if (*(int *)(iVar18 + 0x20) != 0) {
                uVar10 = 1;
                uVar11 = 0x4af;
                iVar9 = iVar7;
                uVar19 = extraout_s0_06;
                iVar21 = iVar2;
                goto LAB_000da28e;
              }
            }
            else {
              uVar5 = (**(code **)(*(int *)param_2 + 0x10))(extraout_s0_06,param_2,uVar8);
              if ((0x7fffffff < uVar5) && (*(int *)(iVar18 + 0x24) != 0)) {
                uVar10 = 2;
                uVar11 = 0x4b4;
                iVar9 = DAT_000da3b0 + 0xda278;
                uVar19 = extraout_s0_07;
                iVar21 = DAT_000da3ac + 0xda26e;
LAB_000da28e:
                mm_camera_debug_log(uVar19,1,uVar10,iVar9,uVar11,iVar21,uVar5);
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < bVar12);
        }
        if ((((*(int *)((int)param_3 + 0x9d4) == 0) &&
             (uVar5 = needSendPreviewCallback((QCamera2HardwareInterface *)param_3),
             (uVar5 ^ 1 | uVar3) == 0)) &&
            (iVar2 = QCameraParametersIntf::isSceneSelectionEnabled(this_00), iVar2 == 0)) &&
           ((iVar2 = sendPreviewCallback((QCamera2HardwareInterface *)param_3,param_2,
                                         (QCameraMemory *)this_01,uVar4), iVar2 != 0 &&
            (*(int *)(iVar18 + 0x24) != 0)))) {
          mm_camera_debug_log(extraout_s0_08,1,2,DAT_000da3b8 + 0xda304,0x4c2,DAT_000da3b4 + 0xda2fc
                             );
        }
        free(param_1);
        if (*(int *)(iVar18 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000da3c0 + 0xda32e,0x4c8,DAT_000da3bc + 0xda326);
        }
        goto LAB_000d9ee2;
      }
      if (*(int *)(iVar18 + 0x20) != 0) {
        uVar19 = 0x424;
        iVar18 = DAT_000da0f0 + 0xd9ed2;
        iVar2 = DAT_000da0f4 + 0xd9eda;
        goto LAB_000d9ed8;
      }
    }
  }
  free(param_1);
LAB_000d9ee2:
  if (*piVar17 != 0) {
    if ((**(byte **)(DAT_000da0f8 + 0xd9eee) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000da0fc + 0xd9efe) + 1) << 0x1d) < 0) {
      atrace_end_body();
      return;
    }
  }
  return;
}

