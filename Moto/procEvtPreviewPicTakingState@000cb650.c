
/* qcamera::QCameraStateMachine::procEvtPreviewPicTakingState(qcamera::qcamera_sm_evt_enum_t, void*)
    */

int __thiscall
qcamera::QCameraStateMachine::procEvtPreviewPicTakingState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  uint uVar1;
  undefined (*pauVar2) [16];
  QCamera2HardwareInterface *pQVar3;
  cam_reprocess_info_t cVar4;
  qcamera_ch_type_enum_t qVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  uint local_44;
  undefined8 local_40;
  ulonglong local_38;
  int local_24;
  
  puVar10 = (undefined8 *)&stack0xfffffed0;
  piVar13 = *(int **)(DAT_000cb94c + 0xcb670);
  local_24 = *piVar13;
  local_40 = 0;
  local_38 = 0;
  iVar12 = *(int *)(DAT_000cb950 + 0xcb684);
  if (*(int *)(iVar12 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000cb958 + 0xcb69e,0xd7d);
  }
  switch(param_1) {
  case 1:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x14:
  case 0x1e:
    if (*(int *)(iVar12 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cb960 + 0xcb722,0xf47);
    }
    local_38 = local_38 & 0xffffffff00000000;
    iVar11 = -0x26;
    local_40._4_4_ = param_1;
    break;
  case 2:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::setCallBacks
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                        *(FuncDef85 **)((int)param_2 + 4),*(FuncDef86 **)((int)param_2 + 8),
                        *(FuncDef87 **)((int)param_2 + 0xc),*(void **)((int)param_2 + 0x10));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 2;
    break;
  case 3:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::enableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 3;
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::disableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar6 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    iVar11 = 0;
    local_38 = CONCAT44(uVar6,1);
    local_40._4_4_ = 5;
    break;
  case 6:
    local_44 = local_44 & 0xffffff00;
    iVar11 = QCamera2HardwareInterface::updateParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_44)
    ;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 6;
    break;
  case 7:
    if (*(int *)(iVar12 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000cb968 + 0xcb7c4,0xdd6);
    }
    iVar11 = QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    if (iVar11 != 0) {
      QCameraParametersIntf::cancelParameterChanges
                ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    }
    QCameraMemoryPool::clear((QCameraMemoryPool *)(*(int *)(this + 4) + 0x934));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 7;
    break;
  case 8:
    iVar11 = QCamera2HardwareInterface::commitParameterChanges();
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 8;
    break;
  case 9:
    iVar11 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar11 == 0) {
      if (this[100] != (QCameraStateMachine)0x0) {
        if (*(int *)(this + 0x68) != 0) {
          QCamera2HardwareInterface::enableMsgType
                    (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
          *(undefined4 *)(this + 0x68) = 0;
        }
        this[100] = (QCameraStateMachine)0x0;
      }
      iVar11 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar11 != 0) {
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        goto LAB_000cbeca;
      }
      iVar11 = 0;
    }
    else {
LAB_000cbeca:
      *(undefined4 *)(this + 8) = 4;
    }
    *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 9;
    break;
  case 10:
    uVar6 = QCameraParametersIntf::getParameters
                      ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    uVar1 = count_leading_zeroes(uVar6);
    local_38 = CONCAT44(uVar6,2);
    local_40._4_4_ = 10;
    iVar11 = (uVar1 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar11 = QCamera2HardwareInterface::putParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xb;
    break;
  case 0xf:
    iVar12 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if (iVar12 == 0) {
      if (pQVar3[0xa9e] == (QCamera2HardwareInterface)0x0) {
        iVar11 = QCamera2HardwareInterface::cancelLiveSnapshot(pQVar3);
        pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
        qVar5 = 2;
        goto LAB_000cbe76;
      }
      iVar11 = QCamera2HardwareInterface::cancelPicture(pQVar3);
    }
    else {
      iVar11 = QCamera2HardwareInterface::cancelPicture(pQVar3);
      pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      qVar5 = 0;
LAB_000cbe76:
      QCamera2HardwareInterface::stopChannel(pQVar3,qVar5);
    }
    QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xf;
    break;
  case 0x10:
    pauVar2 = (undefined (*) [16])&DAT_000cc0e0;
    goto LAB_000cb924;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::storeMetaDataInBuffers
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x11;
    break;
  case 0x12:
    iVar11 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    if (iVar11 == 0) {
      if ((*(QCamera2HardwareInterface **)(this + 4))[0xa9e] != (QCamera2HardwareInterface)0x0) {
        if (*(int *)(iVar12 + 0x20) != 0) {
          uVar6 = 0xeac;
          iVar12 = DAT_000cbd04 + 0xcbcba;
          goto LAB_000cbcb8;
        }
        goto LAB_000cbcbc;
      }
      iVar11 = QCamera2HardwareInterface::preStartRecording
                         (*(QCamera2HardwareInterface **)(this + 4));
    }
    else {
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar6 = 0xea9;
        iVar12 = DAT_000cb970 + 0xcb8e8;
LAB_000cbcb8:
        mm_camera_debug_log(1,1,iVar12,uVar6);
      }
LAB_000cbcbc:
      iVar11 = -0x26;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x12;
    break;
  case 0x13:
    iVar11 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    if (iVar11 == 0) {
      if ((*(QCamera2HardwareInterface **)(this + 4))[0xa9e] != (QCamera2HardwareInterface)0x0) {
        if (*(int *)(iVar12 + 0x20) != 0) {
          uVar6 = 0xebf;
          iVar12 = DAT_000cc0a4 + 0xcbd38;
          goto LAB_000cbd36;
        }
        goto LAB_000cbd3a;
      }
      iVar11 = QCamera2HardwareInterface::startRecording(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar11 == 0) {
        iVar11 = 0;
        *(undefined4 *)(this + 8) = 6;
      }
    }
    else {
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar6 = 0xebb;
        iVar12 = DAT_000cb978 + 0xcb920;
LAB_000cbd36:
        mm_camera_debug_log(1,1,iVar12,uVar6);
      }
LAB_000cbd3a:
      iVar11 = -0x26;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x13;
    break;
  case 0x15:
    pauVar2 = (undefined (*) [16])&DAT_000cc0d0;
LAB_000cb924:
    local_40 = SUB168(*pauVar2,0);
    local_38 = SUB168(*pauVar2 >> 0x40,0);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto switchD_000cbae2_caseD_f;
  case 0x16:
    iVar11 = QCamera2HardwareInterface::releaseRecordingFrame
                       (*(QCamera2HardwareInterface **)(this + 4),param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x16;
    break;
  case 0x17:
    if (*(int *)(iVar12 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000cbccc + 0xcb994,0xf28);
    }
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if (pQVar3[0x9da] == (QCamera2HardwareInterface)0x0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000cc0cc + 0xcbd68,0xf37);
        pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      }
      iVar11 = -0x26;
      local_38 = local_38 & 0xffffffff00000000;
      uVar6 = 0x17;
      goto LAB_000cbdaa;
    }
    if (*(int *)(iVar12 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000cbcd4 + 0xcb9bc,0xf2a);
      pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    }
    iVar11 = QCamera2HardwareInterface::prepareHardwareForSnapshot(pQVar3,0);
    if (iVar11 == 0) goto switchD_000cbae2_caseD_f;
    if (*(int *)(iVar12 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cbcdc + 0xcb9ea,0xf2e);
    }
LAB_000cb9f0:
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x17;
    break;
  case 0x18:
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if (pQVar3[0xa9e] == (QCamera2HardwareInterface)0x0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000cc0f4 + 0xcbd9c,0xee7);
        pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      }
      iVar11 = -0x26;
    }
    else {
      iVar11 = 0;
    }
    uVar6 = 0x18;
    local_38 = local_38 & 0xffffffff00000000;
LAB_000cbdaa:
    local_40 = CONCAT44(uVar6,iVar11);
    goto LAB_000cbee8;
  case 0x19:
    if ((*(QCamera2HardwareInterface **)(this + 4))[0xa9e] == (QCamera2HardwareInterface)0x0) {
      if (*(int *)(iVar12 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000cc0fc + 0xcbdd2,0xefe);
      }
      iVar11 = -0x26;
    }
    else {
      iVar11 = QCamera2HardwareInterface::longShot(*(QCamera2HardwareInterface **)(this + 4));
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x19;
    break;
  case 0x1a:
    iVar12 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if ((iVar12 == 0) && (pQVar3[0xa9e] == (QCamera2HardwareInterface)0x0)) {
      iVar11 = QCamera2HardwareInterface::cancelLiveSnapshot(pQVar3);
    }
    else {
      iVar11 = QCamera2HardwareInterface::cancelPicture(pQVar3);
    }
    *(undefined4 *)(this + 8) = 2;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1a;
    break;
  case 0x1b:
    iVar11 = QCamera2HardwareInterface::autoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1b;
    break;
  case 0x1c:
    iVar11 = QCamera2HardwareInterface::cancelAutoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1c;
    break;
  case 0x1d:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::sendCommand
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,(int *)((int)param_2 + 4)
                        ,(int *)((int)param_2 + 8));
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0x18) {
      *(undefined4 *)(this + 8) = 2;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1d;
    break;
  case 0x1f:
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::dump(*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1f;
    break;
  case 0x20:
    local_44 = 0;
                    /* WARNING: Load size is inaccurate */
    iVar11 = QCamera2HardwareInterface::registerFaceImage
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                        *(cam_pp_offline_src_config_t **)((int)param_2 + 4),(int *)&local_44);
    local_40 = CONCAT44(0x20,iVar11);
    local_38 = CONCAT44(local_44,3);
    goto LAB_000cbee4;
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    switch(*param_2) {
    case 0:
      iVar11 = QCamera2HardwareInterface::processAutoFocusEvent
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_auto_focus_data_t *)((int)param_2 + 8));
      break;
    case 1:
      if (*(int *)(iVar12 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000cc104 + 0xcbf22,0xf58);
      }
      if ((*(QCamera2HardwareInterface **)(this + 4))[0x9da] != (QCamera2HardwareInterface)0x0) {
        QCamera2HardwareInterface::processPrepSnapshotDoneEvent
                  (*(QCamera2HardwareInterface **)(this + 4),
                   *(cam_prep_snapshot_state_t *)((int)param_2 + 8));
        if (*(int *)(iVar12 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000cc10c + 0xcbf52,0xf5b);
        }
        iVar11 = 0;
        goto LAB_000cb9f0;
      }
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar6 = 1;
        uVar9 = 0xf63;
        iVar12 = (int)&DAT_000cc0a0 + DAT_000cc114;
        goto LAB_000cbe56;
      }
    default:
switchD_000cbae2_caseD_f:
      iVar11 = 0;
      break;
    case 2:
      iVar11 = QCamera2HardwareInterface::processFaceDetectionResult
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_faces_data_t *)((int)param_2 + 8));
      break;
    case 3:
      iVar11 = QCamera2HardwareInterface::processHistogramStats
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_hist_stats_t *)((int)param_2 + 8));
      break;
    case 4:
      iVar11 = QCamera2HardwareInterface::processZoomEvent
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_crop_data_t *)((int)param_2 + 8));
      break;
    case 5:
      pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      iVar12 = 200;
      puVar7 = (undefined4 *)((int)param_2 + 0x14);
      do {
        iVar12 = iVar12 + -4;
        *(undefined4 *)puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = (undefined8 *)((int)puVar10 + 4);
      } while (iVar12 != 0);
      iVar11 = QCamera2HardwareInterface::processASDUpdate
                         (pQVar3,*(cam_asd_decision_t *)((int)param_2 + 8));
      break;
    case 6:
      pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      if (pQVar3[0x9da] != (QCamera2HardwareInterface)0x0) {
        if (*(int *)(iVar12 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000cc11c + 0xcbfd4,0xf6c);
          pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
        }
        iVar11 = 0;
        uVar6 = 0x19;
        local_38 = local_38 & 0xffffffff00000000;
        goto LAB_000cbdaa;
      }
      if (*(int *)(iVar12 + 0x2c) != 0) {
        uVar6 = 4;
        uVar9 = 0xf73;
        iVar12 = DAT_000cc124 + 0xcc0c2;
        goto LAB_000cbe56;
      }
      goto switchD_000cbae2_caseD_f;
    case 7:
      if (*(int *)(iVar12 + 0x24) != 0) {
        uVar9 = 0xf85;
        uVar6 = 2;
        iVar12 = DAT_000cc12c + 0xcc008;
        goto LAB_000cbe56;
      }
      goto switchD_000cbae2_caseD_f;
    case 8:
      iVar11 = QCamera2HardwareInterface::transAwbMetaToParams
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_awb_params_t *)((int)param_2 + 8));
      break;
    case 9:
      iVar11 = QCamera2HardwareInterface::processAEInfo
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_3a_params_t *)((int)param_2 + 8));
      break;
    case 10:
      iVar11 = QCamera2HardwareInterface::processFocusPositionInfo
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_focus_pos_info_t *)((int)param_2 + 8));
      break;
    case 0xb:
      iVar11 = QCamera2HardwareInterface::processHDRData(*(cam_asd_hdr_scene_data_t *)(this + 4));
      break;
    case 0xc:
      iVar11 = QCamera2HardwareInterface::processRetroAECUnlock
                         (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xd:
      iVar11 = QCamera2HardwareInterface::processZSLCaptureDone
                         (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xe:
      cVar4 = *(cam_reprocess_info_t *)(this + 4);
      puVar8 = (undefined8 *)((int)param_2 + 0x10);
      iVar12 = 0xe8;
      do {
        uVar14 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar12 = iVar12 + -8;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 1;
      } while (iVar12 != 0);
      iVar11 = QCamera2HardwareInterface::processDualCameraUpdate(cVar4);
    }
    goto LAB_000cbeee;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0x80) {
      iVar11 = QCamera2HardwareInterface::isCACEnabled();
      if ((iVar11 != 0) ||
         (iVar11 = QCameraParametersIntf::isOEMFeatEnabled
                             ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac)), iVar11 != 0))
      {
        if (*(int *)(iVar12 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000cc134 + 0xcbe10,0xfba);
        }
        if ((*(char *)(*(int *)(this + 4) + 0xa9e) != '\0') &&
           (iVar12 = QCamera2HardwareInterface::isCaptureShutterEnabled(), iVar12 == 0)) {
          QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)(this + 4));
        }
        *(undefined *)(*(int *)(this + 4) + 0x1dfd) = 1;
      }
    }
    else {
      if (*param_2 == 8) {
        iVar11 = 0;
        local_38 = local_38 & 0xffffffff00000000;
        local_40 = 0x1700000000;
        QCamera2HardwareInterface::signalAPIResult
                  (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
        local_38 = local_38 & 0xffffffff00000000;
        local_40 = 0x1900000000;
        QCamera2HardwareInterface::signalAPIResult
                  (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
        QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
        goto LAB_000cbeee;
      }
      if (*(int *)(iVar12 + 0x20) != 0) {
        uVar9 = 0xfce;
        uVar6 = 1;
        iVar12 = DAT_000cc13c + 0xcbe58;
        goto LAB_000cbe56;
      }
    }
    goto switchD_000cbae2_caseD_f;
  case 0x23:
    if (*(int *)(iVar12 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000cbce4 + 0xcbb74,0xfd5);
    }
    iVar11 = QCamera2HardwareInterface::processJpegNotify
                       (*(qcamera_jpeg_evt_payload_t **)(this + 4));
    goto LAB_000cbeee;
  case 0x24:
    if (*(int *)(iVar12 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000cbcec + 0xcbb9c,0xfdd);
    }
    iVar11 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if ((iVar11 == 0) && (pQVar3[0xa9e] == (QCamera2HardwareInterface)0x0)) {
      iVar11 = QCamera2HardwareInterface::cancelLiveSnapshot(pQVar3);
    }
    else {
      iVar11 = QCamera2HardwareInterface::cancelPicture(pQVar3);
    }
    *(undefined4 *)(this + 8) = 2;
    pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    if (pQVar3[0x9da] != (QCamera2HardwareInterface)0x0) {
      local_38 = local_38 & 0xffffffff00000000;
      local_40 = CONCAT44(0x24,iVar11);
      if (*(int *)(iVar12 + 0x30) != 0) {
        mm_camera_debug_log(1,5,DAT_000cbcf4 + 0xcbbf4,0xfe8);
        pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
      }
      QCamera2HardwareInterface::signalAPIResult(pQVar3,(qcamera_api_result_t *)&local_40);
      pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = CONCAT44(0x24,iVar11);
    QCamera2HardwareInterface::signalEvtResult(pQVar3,(qcamera_api_result_t *)&local_40);
    goto LAB_000cbeee;
  case 0x25:
    iVar11 = QCamera2HardwareInterface::updateThermalLevel
                       (*(QCamera2HardwareInterface **)(this + 4),param_2);
    goto LAB_000cbeee;
  default:
    if (*(int *)(iVar12 + 0x24) != 0) {
      uVar9 = 0x1046;
      uVar6 = 2;
      iVar12 = DAT_000cbcfc + 0xcbc48;
LAB_000cbe56:
      mm_camera_debug_log(1,uVar6,iVar12,uVar9);
    }
    goto switchD_000cbae2_caseD_f;
  case 0x2a:
    iVar11 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar11 == 0) {
      iVar11 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x2a;
    break;
  case 0x2b:
    QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    iVar11 = 0;
    local_40._4_4_ = 0x2b;
    local_38 = local_38 & 0xffffffff00000000;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar11);
LAB_000cbee4:
  pQVar3 = *(QCamera2HardwareInterface **)(this + 4);
LAB_000cbee8:
  QCamera2HardwareInterface::signalAPIResult(pQVar3,(qcamera_api_result_t *)&local_40);
LAB_000cbeee:
  if (*piVar13 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
}

