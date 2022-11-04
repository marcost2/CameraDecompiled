
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::deferredWorkRoutine(void*) */

undefined4 qcamera::QCamera2HardwareInterface::deferredWorkRoutine(void *param_1)

{
  int **ppiVar1;
  cam_stream_type_t *pcVar2;
  QCameraPostProcessor *this;
  QCameraParametersIntf *this_00;
  QCameraCbNotifier *this_01;
  int iVar3;
  int *piVar4;
  cam_stream_type_t cVar5;
  cam_stream_type_t *pcVar6;
  int iVar7;
  QCameraMetadataStreamMemory *this_02;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  EVP_PKEY_CTX *pEVar12;
  undefined4 uVar13;
  int iVar14;
  QCameraChannel *pQVar15;
  int *piVar16;
  int *piVar17;
  pthread_mutex_t *__mutex;
  undefined auVar18 [16];
  int in_stack_ffffff20;
  cam_stream_type_t in_stack_ffffff24;
  int local_8c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack80;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  
  piVar17 = *(int **)(DAT_000b15d0 + 0xb1268);
  local_3c = *piVar17;
  QCameraCmdThread::setName
            ((QCameraCmdThread *)((int)param_1 + 0x1d38),(char *)(DAT_000b15d4 + 0xb127e));
  piVar16 = (int *)((int)param_1 + 0x1d60);
  auVar18 = ZEXT816(0);
  ppiVar1 = (int **)((int)param_1 + 0x1df0);
  pcVar2 = (cam_stream_type_t *)((int)param_1 + 0x1de8);
  __mutex = (pthread_mutex_t *)((int)param_1 + 0x1d64);
  this = (QCameraPostProcessor *)((int)param_1 + 0x550);
  this_00 = (QCameraParametersIntf *)((int)param_1 + 0x4ac);
  this_01 = (QCameraCbNotifier *)((int)param_1 + 0x854);
  local_8c = 0;
  do {
    while( true ) {
      pthread_mutex_lock(__mutex);
      iVar3 = *piVar16;
      if (iVar3 == 0) {
        do {
          iVar14 = pthread_cond_wait((pthread_cond_t *)((int)param_1 + 0x1d68),__mutex);
          iVar3 = *piVar16;
        } while (iVar3 == 0);
      }
      else {
        iVar14 = 0;
      }
      *piVar16 = iVar3 + -1;
      pthread_mutex_unlock(__mutex);
      if (iVar14 != 0) break;
      cVar5 = QCameraCmdThread::getCmd((QCameraCmdThread *)((int)param_1 + 0x1d38));
      iVar3 = *(int *)(DAT_000b15d8 + 0xb137c);
      if (*(int *)(iVar3 + 0x2c) != 0) {
        in_stack_ffffff20 = DAT_000b15dc + 0xb1390;
        in_stack_ffffff24 = cVar5;
        mm_camera_debug_log(1,4,DAT_000b15e0 + 0xb139a,0x35ff);
      }
      switch(cVar5) {
      case 1:
        if (*(int *)(iVar3 + 0x28) != 0) {
          in_stack_ffffff20 = DAT_000b15e4 + 0xb13c2;
          mm_camera_debug_log(1,3,DAT_000b15e8 + 0xb13ca,0x3602);
        }
        break;
      case 2:
        if (*(int *)(iVar3 + 0x28) != 0) {
          in_stack_ffffff20 = DAT_000b15ec + 0xb13e2;
          mm_camera_debug_log(1,3,DAT_000b15f0 + 0xb13ea,0x3606);
        }
        pthread_mutex_lock((pthread_mutex_t *)((int)param_1 + 0x1d70));
        *(int *)((int)param_1 + 0x1d6c) = *(int *)((int)param_1 + 0x1d6c) + 1;
        pthread_cond_signal((pthread_cond_t *)((int)param_1 + 0x1d74));
        pthread_mutex_unlock((pthread_mutex_t *)((int)param_1 + 0x1d70));
        break;
      case 3:
        pcVar6 = (cam_stream_type_t *)
                 QCameraQueue::dequeue((QCameraQueue *)((int)param_1 + 0x1d78),true);
        if (pcVar6 == (cam_stream_type_t *)0x0) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            in_stack_ffffff20 = DAT_000b15f4 + 0xb140c;
            mm_camera_debug_log(1,1,DAT_000b15f8 + 0xb1414,0x3611);
          }
        }
        else {
          cVar5 = *pcVar6;
          switch(cVar5) {
          case 0:
            pQVar15 = (QCameraChannel *)pcVar6[2];
            if (pQVar15 == (QCameraChannel *)0x0) {
              if (*(int *)(iVar3 + 0x20) == 0) {
                local_8c = -0x16;
              }
              else {
                in_stack_ffffff20 = DAT_000b19f0 + 0xb16f0;
                mm_camera_debug_log(1,1,DAT_000b19f4 + 0xb16f8,0x361b);
                local_8c = -0x16;
              }
            }
            else {
              cVar5 = pcVar6[3];
              if (*(int *)(iVar3 + 0x28) != 0) {
                in_stack_ffffff20 = DAT_000b15fc + 0xb1454;
                in_stack_ffffff24 = cVar5;
                mm_camera_debug_log(1,3,DAT_000b1600 + 0xb1460,0x3622);
              }
              uVar10 = *(uint *)(pQVar15 + 0x1c);
              if (uVar10 != 0) {
                uVar11 = 0;
                do {
                  piVar4 = (int *)QCameraChannel::getStreamByIndex(pQVar15,uVar11);
                  if (piVar4 == (int *)0x0) {
                    local_8c = -0x16;
                    break;
                  }
                  iVar14 = QCameraStream::isTypeOf((QCameraStream *)piVar4,cVar5);
                  if (iVar14 != 0) {
                    iVar14 = (**(code **)(*piVar4 + 0x24))(piVar4);
                    if (iVar14 != 0) {
                      if (*(int *)(iVar3 + 0x20) == 0) goto LAB_000b1a74;
                      uVar13 = 0x3630;
                      in_stack_ffffff20 = DAT_000b1b08 + 0xb192c;
                      iVar3 = DAT_000b1b0c + 0xb1934;
                      goto LAB_000b1a70;
                    }
                    break;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar10);
              }
            }
            break;
          case 1:
            iVar14 = getDefJobStatus((QCamera2HardwareInterface *)param_1,
                                     (uint *)((int)param_1 + 0x1db0));
            if (iVar14 == 0) {
              iVar14 = QCameraPostProcessor::start(this,(QCameraChannel *)pcVar6[2]);
              if (iVar14 != 0) {
                if (*(int *)(iVar3 + 0x20) != 0) {
                  uVar13 = 0x3648;
                  in_stack_ffffff20 = DAT_000b19f8 + 0xb1726;
                  iVar3 = DAT_000b19fc + 0xb172e;
LAB_000b18c2:
                  mm_camera_debug_log(1,1,iVar3,uVar13);
                }
LAB_000b18c6:
                local_68 = SUB168(auVar18,0);
                local_60 = SUB168(auVar18 >> 0x40,0);
                local_44 = 0;
                local_48 = 0;
                local_70 = 1;
                local_78._0_4_ = SUB164(auVar18,0);
                local_78 = CONCAT44(1,(uint)local_78);
                local_58 = local_68;
                uStack80 = local_60;
                QCameraCbNotifier::notifyCallback(this_01,(qcamera_callback_argm_t *)&local_78);
                local_8c = -0x16;
              }
            }
            else {
              local_8c = iVar14;
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x363f;
                in_stack_ffffff20 = DAT_000b160c + 0xb14e6;
                iVar3 = DAT_000b1610 + 0xb14ee;
LAB_000b1696:
                mm_camera_debug_log(1,1,iVar3,uVar13);
              }
LAB_000b169a:
              local_68 = SUB168(auVar18,0);
              local_60 = SUB168(auVar18 >> 0x40,0);
              local_44 = 0;
              local_48 = 0;
              local_70 = 1;
              local_78._0_4_ = SUB164(auVar18,0);
              local_78 = CONCAT44(1,(uint)local_78);
              local_58 = local_68;
              uStack80 = local_60;
              QCameraCbNotifier::notifyCallback(this_01,(qcamera_callback_argm_t *)&local_78);
            }
            break;
          case 2:
            iVar14 = *(int *)(*(int *)(DAT_000b1614 + 0xb14fa) + *(int *)((int)param_1 + 0x5c) * 4);
            pEVar12 = (EVP_PKEY_CTX *)pcVar6[2];
            if ((*pcVar2 == 0) &&
               (iVar7 = initJpegHandle((QCamera2HardwareInterface *)param_1), iVar7 != 0)) {
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x3695;
                in_stack_ffffff20 = DAT_000b1a00 + 0xb1750;
                iVar3 = DAT_000b1a04 + 0xb1758;
LAB_000b184c:
                mm_camera_debug_log(1,1,iVar3,uVar13);
              }
            }
            else {
              if (*(int *)(iVar3 + 0x28) != 0) {
                in_stack_ffffff24 = *pcVar2;
                in_stack_ffffff20 = DAT_000b1618 + 0xb1524;
                mm_camera_debug_log(1,3,DAT_000b161c + 0xb1530,0x369c);
              }
              iVar7 = QCameraPostProcessor::setJpegHandle
                                (this,(mm_jpeg_ops_t *)((int)param_1 + 0x1dcc),
                                 (mm_jpeg_mpo_ops_t *)((int)param_1 + 0x1de0),*pcVar2);
              if (iVar7 == 0) {
                iVar7 = QCameraPostProcessor::init(this,pEVar12);
                if (iVar7 == 0) {
                  QCameraPostProcessor::getJpegPaddingReq(this,(cam_padding_info_t *)&local_78);
                  if (*(uint *)(iVar14 + 0x3008) < (uint)local_78) {
                    *(uint *)(iVar14 + 0x3008) = (uint)local_78;
                  }
                  if (*(uint *)(iVar14 + 0x300c) < local_78._4_4_) {
                    *(uint *)(iVar14 + 0x300c) = local_78._4_4_;
                  }
                  if (*(int *)(iVar14 + 0x3010) != (int)local_70) {
                    uVar13 = mm_stream_calc_lcm();
                    *(undefined4 *)(iVar14 + 0x3010) = uVar13;
                  }
                  if (*(int *)(iVar14 + 0x301c) != local_68._4_4_) {
                    uVar13 = mm_stream_calc_lcm();
                    *(undefined4 *)(iVar14 + 0x301c) = uVar13;
                  }
                  if (*(int *)(iVar14 + 0x3020) != (int)local_60) {
                    uVar13 = mm_stream_calc_lcm();
                    *(undefined4 *)(iVar14 + 0x3020) = uVar13;
                  }
                  break;
                }
                if (*(int *)(iVar3 + 0x20) != 0) {
                  uVar13 = 0x36ad;
                  in_stack_ffffff20 = DAT_000b1b18 + 0xb1846;
                  iVar3 = DAT_000b1b1c + 0xb184e;
                  goto LAB_000b184c;
                }
              }
              else if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x36a2;
                in_stack_ffffff20 = DAT_000b1620 + 0xb155c;
                iVar3 = DAT_000b1624 + 0xb1564;
                goto LAB_000b184c;
              }
            }
LAB_000b1850:
            local_68 = SUB168(auVar18,0);
            local_60 = SUB168(auVar18 >> 0x40,0);
            local_44 = 0;
            local_48 = 0;
            local_70 = 1;
            local_78._0_4_ = SUB164(auVar18,0);
            local_78 = CONCAT44(1,(uint)local_78);
            local_58 = local_68;
            uStack80 = local_60;
            QCameraCbNotifier::notifyCallback(this_01,(qcamera_callback_argm_t *)&local_78);
            local_8c = -0x80000000;
            break;
          case 3:
            iVar14 = getDefJobStatus((QCamera2HardwareInterface *)param_1,
                                     (uint *)((int)param_1 + 0x1db4));
            if (iVar14 != 0) {
              local_8c = iVar14;
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x3654;
                in_stack_ffffff20 = DAT_000b1628 + 0xb158a;
                iVar3 = DAT_000b162c + 0xb1592;
                goto LAB_000b1696;
              }
              goto LAB_000b169a;
            }
            this_02 = (QCameraMetadataStreamMemory *)operator_new(0x718);
            piVar4 = (int *)QCameraMetadataStreamMemory::QCameraMetadataStreamMemory(this_02,true);
            *ppiVar1 = piVar4;
            iVar3 = (**(code **)(*piVar4 + 8))(piVar4,*(DefWork *)(pcVar6 + 2),pcVar6[3],0);
            if (iVar3 < 0) {
              if (*ppiVar1 != (int *)0x0) {
                (**(code **)(**ppiVar1 + 0x2c))();
              }
              *ppiVar1 = (int *)0x0;
            }
            break;
          case 4:
            pQVar15 = (QCameraChannel *)pcVar6[2];
            iVar14 = getDefJobStatus((QCamera2HardwareInterface *)param_1,
                                     (uint *)((int)param_1 + 0x1da4));
            if (iVar14 == 0) {
              iVar14 = QCameraPostProcessor::createJpegSession(this,pQVar15);
              if (iVar14 != 0) {
                if (*(int *)(iVar3 + 0x20) != 0) {
                  uVar13 = 0x367b;
                  in_stack_ffffff20 = DAT_000b1b10 + 0xb17a8;
                  iVar3 = DAT_000b1b14 + 0xb17b0;
LAB_000b17ea:
                  mm_camera_debug_log(1,1,iVar3,uVar13);
                }
LAB_000b17ee:
                local_68 = SUB168(auVar18,0);
                local_60 = SUB168(auVar18 >> 0x40,0);
                local_44 = 0;
                local_48 = 0;
                local_70 = 1;
                local_78._0_4_ = SUB164(auVar18,0);
                local_78 = CONCAT44(1,(uint)local_78);
                local_58 = local_68;
                uStack80 = local_60;
                QCameraCbNotifier::notifyCallback(this_01,(qcamera_callback_argm_t *)&local_78);
                local_8c = -0x80000000;
              }
            }
            else {
              local_8c = iVar14;
              if (*(int *)(iVar3 + 0x20) != 0) {
                in_stack_ffffff20 = DAT_000b1630 + 0xb15be;
                mm_camera_debug_log(1,1,DAT_000b1634 + 0xb15c6,0x3675);
              }
            }
            break;
          case 5:
            iVar14 = QCameraParametersIntf::allocate(this_00);
            if ((iVar14 != 0) && (local_8c = iVar14, *(int *)(iVar3 + 0x20) != 0)) {
              in_stack_ffffff20 = DAT_000b19e0 + 0xb1660;
              mm_camera_debug_log(1,1,DAT_000b19e4 + 0xb1668,0x36de);
            }
            break;
          case 6:
            iVar14 = getDefJobStatus((QCamera2HardwareInterface *)param_1,
                                     (uint *)((int)param_1 + 0x1db4));
            if (iVar14 != 0) {
              local_8c = iVar14;
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x36e8;
                in_stack_ffffff20 = DAT_000b19e8 + 0xb1690;
                iVar3 = DAT_000b19ec + 0xb1698;
                goto LAB_000b1696;
              }
              goto LAB_000b169a;
            }
            if (*(int *)((int)param_1 + 0x60) == 0) {
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x36f2;
                in_stack_ffffff20 = DAT_000b1b20 + 0xb18bc;
                iVar3 = DAT_000b1b24 + 0xb18c4;
                goto LAB_000b18c2;
              }
              goto LAB_000b18c6;
            }
            pEVar12 = *(EVP_PKEY_CTX **)
                       (*(int *)(DAT_000b1b28 + 0xb17c0) + *(int *)((int)param_1 + 0x5c) * 4);
            iVar14 = QCameraParametersIntf::init(this_00,pEVar12);
            if (iVar14 != 0) {
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x3708;
                in_stack_ffffff20 = DAT_000b1b2c + 0xb17e4;
                iVar3 = DAT_000b1b30 + 0xb17ec;
                goto LAB_000b17ea;
              }
              goto LAB_000b17ee;
            }
            piVar4 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
            if (*piVar4 == 1) {
              iVar14 = QCameraParametersIntf::getRelatedCamCalibration
                                 (this_00,(cam_related_system_calibration_data_t *)
                                          (cam_stream_type_t *)((int)param_1 + 0x70));
              if (*(int *)(iVar3 + 0x2c) != 0) {
                in_stack_ffffff24 = *(cam_stream_type_t *)((int)param_1 + 0x70);
                in_stack_ffffff20 = DAT_000b1b34 + 0xb19b0;
                mm_camera_debug_log(1,4,DAT_000b1b38 + 0xb19be,0x3716,in_stack_ffffff20,
                                    in_stack_ffffff24,iVar14);
              }
              if (iVar14 != 0) {
                if (*(int *)(iVar3 + 0x20) != 0) {
                  uVar13 = 0x3719;
                  in_stack_ffffff20 = DAT_000b1b3c + 0xb19d8;
                  iVar3 = (int)&DAT_000b19e0 + DAT_000b1b40;
                  goto LAB_000b184c;
                }
                goto LAB_000b1850;
              }
              *(undefined *)((int)param_1 + 0x4a4) = 1;
            }
            uVar13 = *(undefined4 *)(pEVar12 + 0x854);
            *(undefined4 *)((int)param_1 + 0x68) = 0;
            *(undefined4 *)((int)param_1 + 0x6c) = uVar13;
            QCameraParametersIntf::setMinPpMask(CONCAT44(in_stack_ffffff24,in_stack_ffffff20));
            pvVar8 = malloc((size_t)"sion");
            *(void **)((int)param_1 + 0xa64) = pvVar8;
            if (pvVar8 == (void *)0x0) {
              if (*(int *)(iVar3 + 0x20) != 0) {
                uVar13 = 0x372c;
                in_stack_ffffff20 = DAT_000b1b44 + 0xb1a6a;
                iVar3 = DAT_000b1b48 + 0xb1a72;
LAB_000b1a70:
                mm_camera_debug_log(1,1,iVar3,uVar13);
              }
LAB_000b1a74:
              local_68 = SUB168(auVar18,0);
              local_60 = SUB168(auVar18 >> 0x40,0);
              local_44 = 0;
              local_48 = 0;
              local_70 = 1;
              local_78._0_4_ = SUB164(auVar18,0);
              local_78 = CONCAT44(1,(uint)local_78);
              local_58 = local_68;
              uStack80 = local_60;
              QCameraCbNotifier::notifyCallback(this_01,(qcamera_callback_argm_t *)&local_78);
              local_8c = -0xc;
            }
            else {
              __aeabi_memclr8(pvVar8,(size_t)"sion");
              MotSmoothZoom::startThread(*(MotSmoothZoom **)((int)param_1 + 0x1ec8));
            }
            break;
          case 7:
            local_8c = (**(code **)pcVar6[2])(((code **)pcVar6[2])[1]);
            break;
          default:
            if (*(int *)(iVar3 + 0x20) != 0) {
              in_stack_ffffff20 = DAT_000b1604 + 0xb14b0;
              mm_camera_debug_log(1,1,DAT_000b1608 + 0xb14bc,0x3752);
              in_stack_ffffff24 = cVar5;
            }
          }
          dequeueDeferredWork((QCamera2HardwareInterface *)param_1,(DefWork *)pcVar6,local_8c);
        }
        break;
      case 4:
        goto switchD_000b13a2_caseD_4;
      }
    }
    piVar4 = (int *)__errno();
  } while (*piVar4 == 0x16);
  if (*(int *)(*(int *)(DAT_000b1afc + 0xb1abe) + 0x20) != 0) {
    pcVar9 = strerror(*piVar4);
    mm_camera_debug_log(1,1,DAT_000b1b04 + 0xb1adc,0x35f8,DAT_000b1b00 + 0xb1ad0,pcVar9);
  }
switchD_000b13a2_caseD_4:
  if (*piVar17 == local_3c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

