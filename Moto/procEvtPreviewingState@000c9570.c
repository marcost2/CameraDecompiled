
/* qcamera::QCameraStateMachine::procEvtPreviewingState(qcamera::qcamera_sm_evt_enum_t, void*) */

int __thiscall
qcamera::QCameraStateMachine::procEvtPreviewingState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined (*pauVar1) [16];
  QCamera2HardwareInterface *this_00;
  cam_reprocess_info_t cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  uint local_44;
  undefined8 local_40;
  ulonglong local_38;
  int local_24;
  
  puVar8 = (undefined8 *)&stack0xfffffed0;
  piVar12 = *(int **)(DAT_000c98b4 + 0xc9590);
  local_24 = *piVar12;
  local_40 = 0;
  local_38 = 0;
  iVar11 = *(int *)(DAT_000c98b8 + 0xc95a4);
  if (*(int *)(iVar11 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000c98c0 + 0xc95be,0x4cc);
  }
  local_40._4_4_ = param_1;
  switch(param_1) {
  case 1:
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c98e0 + 0xc96ca,0x4d1);
    }
    local_40._4_4_ = 1;
    goto LAB_000c96d4;
  case 2:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::setCallBacks
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                        *(FuncDef85 **)((int)param_2 + 4),*(FuncDef86 **)((int)param_2 + 8),
                        *(FuncDef87 **)((int)param_2 + 0xc),*(void **)((int)param_2 + 0x10));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 2;
    break;
  case 3:
                    /* WARNING: Load size is inaccurate */
    uVar3 = *param_2;
    if ((this[100] != (QCameraStateMachine)0x0) && ((uVar3 & 0x10) != 0)) {
      uVar3 = uVar3 & 0xffffffef;
      *(undefined4 *)(this + 0x68) = 0x10;
    }
    iVar10 = QCamera2HardwareInterface::enableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),uVar3);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 3;
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    uVar3 = *param_2;
    if (((this[100] != (QCameraStateMachine)0x0) && (*(uint *)(this + 0x68) != 0)) &&
       (uVar9 = *(uint *)(this + 0x68) & ~uVar3, *(uint *)(this + 0x68) = uVar9, uVar9 == 0)) {
      this[100] = (QCameraStateMachine)0x0;
    }
    iVar10 = QCamera2HardwareInterface::disableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),uVar3);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar9 = *param_2;
    uVar3 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),uVar9);
    if ((this[100] != (QCameraStateMachine)0x0) && (*(uint *)(this + 0x68) != 0)) {
      uVar3 = uVar3 | *(uint *)(this + 0x68) & uVar9;
    }
    iVar10 = 0;
    local_38 = CONCAT44(uVar3,1);
    local_40._4_4_ = 5;
    break;
  case 6:
    local_44 = local_44 & 0xffffff00;
    iVar10 = QCamera2HardwareInterface::updateParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_44)
    ;
    local_40._4_4_ = 6;
    goto LAB_000c9dac;
  case 7:
    if (*(int *)(iVar11 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c98e8 + 0xc97b8,0x525);
    }
    iVar10 = QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    if (iVar10 != 0) {
      QCameraParametersIntf::cancelParameterChanges
                ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    }
    QCameraMemoryPool::clear((QCameraMemoryPool *)(*(int *)(this + 4) + 0x934));
    local_40._4_4_ = 7;
    goto LAB_000c9dac;
  case 8:
    iVar10 = QCamera2HardwareInterface::commitParameterChanges();
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 8;
    break;
  case 9:
    iVar10 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar10 == 0) {
      if (this[100] != (QCameraStateMachine)0x0) {
        if (*(int *)(this + 0x68) != 0) {
          QCamera2HardwareInterface::enableMsgType
                    (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
          *(undefined4 *)(this + 0x68) = 0;
        }
        this[100] = (QCameraStateMachine)0x0;
      }
      iVar11 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
      iVar10 = 0;
      if (iVar11 != 0) {
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        *(undefined4 *)(this + 8) = 0;
        iVar10 = iVar11;
      }
    }
    *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 9;
    break;
  case 10:
    uVar4 = QCameraParametersIntf::getParameters
                      ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    uVar3 = count_leading_zeroes(uVar4);
    local_38 = CONCAT44(uVar4,2);
    local_40._4_4_ = 10;
    iVar10 = (uVar3 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar10 = QCamera2HardwareInterface::putParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xb;
    break;
  case 0xc:
    if (*(int *)(iVar11 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c98f0 + 0xc987c,0x56f);
    }
    local_40._4_4_ = 0xc;
    goto LAB_000c9c82;
  case 0xd:
  case 0xe:
    if (*(int *)(iVar11 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c98c8 + 0xc963a,0x57b);
    }
    if (this[100] != (QCameraStateMachine)0x0) {
      if (*(int *)(this + 0x68) != 0) {
        QCamera2HardwareInterface::enableMsgType
                  (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
        *(undefined4 *)(this + 0x68) = 0;
      }
      this[100] = (QCameraStateMachine)0x0;
    }
    goto LAB_000c9d00;
  case 0xf:
    iVar10 = QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    if (this[100] != (QCameraStateMachine)0x0) {
      if (*(int *)(this + 0x68) != 0) {
        QCamera2HardwareInterface::enableMsgType
                  (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
        *(undefined4 *)(this + 0x68) = 0;
      }
      this[100] = (QCameraStateMachine)0x0;
    }
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xf;
    break;
  case 0x10:
    if (this[100] != (QCameraStateMachine)0x0) {
      if (*(int *)(this + 0x68) != 0) {
        QCamera2HardwareInterface::enableMsgType
                  (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
        *(undefined4 *)(this + 0x68) = 0;
      }
      this[100] = (QCameraStateMachine)0x0;
    }
    pauVar1 = (undefined (*) [16])&DAT_000ca000;
    goto LAB_000c9dd6;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::storeMetaDataInBuffers
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x11;
    break;
  case 0x12:
    iVar10 = QCamera2HardwareInterface::preStartRecording(*(QCamera2HardwareInterface **)(this + 4))
    ;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x12;
    break;
  case 0x13:
    iVar10 = QCamera2HardwareInterface::startRecording(*(QCamera2HardwareInterface **)(this + 4));
    if ((iVar10 == 0) && (*(undefined4 *)(this + 8) = 5, this[100] != (QCameraStateMachine)0x0)) {
      if (*(int *)(this + 0x68) != 0) {
        QCamera2HardwareInterface::enableMsgType
                  (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
        *(undefined4 *)(this + 0x68) = 0;
      }
      this[100] = (QCameraStateMachine)0x0;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x13;
    break;
  case 0x14:
  case 0x1a:
    if (*(int *)(iVar11 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c98d0 + 0xc9684,0x6c5);
    }
LAB_000c9d00:
    iVar10 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0x15:
    pauVar1 = (undefined (*) [16])&DAT_000c9ff0;
LAB_000c9dd6:
    local_40 = SUB168(*pauVar1,0);
    local_38 = SUB168(*pauVar1 >> 0x40,0);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto LAB_000c9de8;
  case 0x16:
  case 0x1e:
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c98d8 + 0xc96a8,0x6b9);
    }
LAB_000c96d4:
    local_38 = local_38 & 0xffffffff00000000;
    iVar10 = -0x26;
    break;
  case 0x17:
    iVar10 = QCamera2HardwareInterface::prepareHardwareForSnapshot
                       (*(QCamera2HardwareInterface **)(this + 4),0);
    if (iVar10 == 0) {
      *(undefined4 *)(this + 8) = 3;
      if (this[100] != (QCameraStateMachine)0x0) {
        if (*(int *)(this + 0x68) == 0) {
          iVar10 = 0;
          this[100] = (QCameraStateMachine)0x0;
        }
        else {
          QCamera2HardwareInterface::enableMsgType
                    (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
          iVar10 = 0;
          *(undefined4 *)(this + 0x68) = 0;
          this[100] = (QCameraStateMachine)0x0;
        }
        goto switchD_000c9b4c_caseD_1;
      }
      goto LAB_000c9de8;
    }
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c9d0c + 0xc99b0,0x5ee);
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x17;
    break;
  case 0x18:
    iVar10 = QCamera2HardwareInterface::preTakePicture(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x18;
    break;
  case 0x19:
    if (*(int *)(iVar11 + 0x30) != 0) {
      mm_camera_debug_log(1,5,DAT_000c9d14 + 0xc99e8,0x602);
    }
    iVar10 = QCameraParametersIntf::getRecordingHintValue
                       ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    if (iVar10 != 0) {
      QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
      QCameraParametersIntf::updateRecordingHintValue
                ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),0);
      iVar10 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
      if ((iVar10 == 0) &&
         (iVar10 = QCamera2HardwareInterface::startPreview
                             (*(QCamera2HardwareInterface **)(this + 4)), iVar10 != 0)) {
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
      }
    }
    iVar10 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac))
    ;
    if ((iVar10 == 0) &&
       ((*(QCamera2HardwareInterface **)(this + 4))[0xa9e] == (QCamera2HardwareInterface)0x0)) {
      *(undefined4 *)(this + 8) = 4;
      iVar10 = QCamera2HardwareInterface::takePicture(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar10 != 0) {
        QCamera2HardwareInterface::unconfigureAdvancedCapture
                  (*(QCamera2HardwareInterface **)(this + 4));
        QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
        iVar11 = QCamera2HardwareInterface::preparePreview
                           (*(QCamera2HardwareInterface **)(this + 4));
        if (iVar11 == 0) {
          iVar11 = QCamera2HardwareInterface::startPreview
                             (*(QCamera2HardwareInterface **)(this + 4));
          if (iVar11 != 0) {
            QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
            goto LAB_000c9e2e;
          }
          uVar4 = 2;
        }
        else {
LAB_000c9e2e:
          uVar4 = 0;
        }
        *(undefined4 *)(this + 8) = uVar4;
      }
    }
    else {
      iVar10 = QCamera2HardwareInterface::isPreviewRestartEnabled();
      if ((iVar10 == 0) ||
         (iVar10 = QCameraParametersIntf::getManualCaptureMode
                             ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac)), iVar10 < 3)) {
        this[100] = (QCameraStateMachine)0x1;
        uVar4 = 7;
      }
      else {
        QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
        QCameraParametersIntf::updateZSLModeValue
                  ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),false);
        this[0x6c] = (QCameraStateMachine)0x1;
        this[100] = (QCameraStateMachine)0x1;
        uVar4 = 4;
      }
      *(undefined4 *)(this + 8) = uVar4;
      iVar10 = QCamera2HardwareInterface::takePicture(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar10 == 0) {
        if ((*(QCamera2HardwareInterface **)(this + 4))[0x9da] != (QCamera2HardwareInterface)0x0)
        goto LAB_000c9de8;
      }
      else {
        QCamera2HardwareInterface::unconfigureAdvancedCapture
                  (*(QCamera2HardwareInterface **)(this + 4));
        *(undefined4 *)(this + 8) = 2;
      }
      if (*(int *)(iVar11 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000ca014 + 0xc9cd4,0x632);
      }
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x19;
    break;
  case 0x1b:
    iVar10 = QCamera2HardwareInterface::autoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1b;
    break;
  case 0x1c:
    iVar10 = QCamera2HardwareInterface::cancelAutoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1c;
    break;
  case 0x1d:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::sendCommand
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,(int *)((int)param_2 + 4)
                        ,(int *)((int)param_2 + 8));
    iVar11 = *(int *)((int)param_2 + 4);
    uVar3 = count_leading_zeroes(iVar11 + -0x27);
    this[0x65] = SUB41(uVar3 >> 5,0);
    uVar3 = count_leading_zeroes(*(int *)((int)param_2 + 8) + -0x28);
    this[0x66] = SUB41(uVar3 >> 5,0);
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0x17 && iVar11 == 0x27) {
      QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
      QCameraMemoryPool::clear((QCameraMemoryPool *)(*(int *)(this + 4) + 0x934));
      if ((this[0x66] == (QCameraStateMachine)0x0) &&
         (iVar10 = QCamera2HardwareInterface::preparePreview
                             (*(QCamera2HardwareInterface **)(this + 4)), iVar10 == 0)) {
        if (this[100] != (QCameraStateMachine)0x0) {
          if (*(int *)(this + 0x68) != 0) {
            QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
            *(undefined4 *)(this + 0x68) = 0;
          }
          this[100] = (QCameraStateMachine)0x0;
        }
        iVar10 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        }
      }
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1d;
    break;
  case 0x1f:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::dump(*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1f;
    break;
  case 0x20:
    local_44 = 0;
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::registerFaceImage
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                        *(cam_pp_offline_src_config_t **)((int)param_2 + 4),(int *)&local_44);
    local_40 = CONCAT44(0x20,iVar10);
    local_38 = CONCAT44(local_44,3);
    goto LAB_000c9e86;
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    iVar10 = 0;
    switch(*param_2) {
    case 0:
      iVar10 = QCamera2HardwareInterface::processAutoFocusEvent
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_auto_focus_data_t *)((int)param_2 + 8));
      break;
    case 1:
      break;
    case 2:
      iVar10 = QCamera2HardwareInterface::processFaceDetectionResult
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_faces_data_t *)((int)param_2 + 8));
      break;
    case 3:
      iVar10 = QCamera2HardwareInterface::processHistogramStats
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_hist_stats_t *)((int)param_2 + 8));
      break;
    case 4:
      iVar10 = QCamera2HardwareInterface::processZoomEvent
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_crop_data_t *)((int)param_2 + 8));
      break;
    case 5:
      this_00 = *(QCamera2HardwareInterface **)(this + 4);
      iVar11 = 200;
      puVar5 = (undefined4 *)((int)param_2 + 0x14);
      do {
        iVar11 = iVar11 + -4;
        *(undefined4 *)puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = (undefined8 *)((int)puVar8 + 4);
      } while (iVar11 != 0);
      iVar10 = QCamera2HardwareInterface::processASDUpdate
                         (this_00,*(cam_asd_decision_t *)((int)param_2 + 8));
      break;
    default:
      if (*(int *)(iVar11 + 0x20) != 0) {
        uVar7 = 0x701;
        uVar4 = 1;
        iVar11 = DAT_000ca01c + 0xc9f2a;
        goto LAB_000c9cf4;
      }
      goto LAB_000c9de8;
    case 7:
      iVar10 = QCameraParametersIntf::updateFlashMode
                         ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),
                          *(cam_flash_mode_t *)((int)param_2 + 8));
      break;
    case 8:
      iVar10 = QCamera2HardwareInterface::transAwbMetaToParams
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_awb_params_t *)((int)param_2 + 8));
      break;
    case 9:
      iVar10 = QCamera2HardwareInterface::processAEInfo
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_3a_params_t *)((int)param_2 + 8));
      break;
    case 10:
      iVar10 = QCamera2HardwareInterface::processFocusPositionInfo
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_focus_pos_info_t *)((int)param_2 + 8));
      break;
    case 0xb:
      iVar10 = QCamera2HardwareInterface::processHDRData(*(cam_asd_hdr_scene_data_t *)(this + 4));
      break;
    case 0xc:
      iVar10 = QCamera2HardwareInterface::processRetroAECUnlock
                         (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xd:
      iVar10 = QCamera2HardwareInterface::processZSLCaptureDone
                         (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xe:
      cVar2 = *(cam_reprocess_info_t *)(this + 4);
      puVar6 = (undefined8 *)((int)param_2 + 0x10);
      iVar11 = 0xe8;
      do {
        uVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 + -8;
        *puVar8 = uVar13;
        puVar8 = puVar8 + 1;
      } while (iVar11 != 0);
      iVar10 = QCamera2HardwareInterface::processDualCameraUpdate(cVar2);
    }
    goto switchD_000c9b4c_caseD_1;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 8) {
      iVar10 = 0;
      QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
      goto switchD_000c9b4c_caseD_1;
    }
    if (*(int *)(iVar11 + 0x24) != 0) {
      uVar7 = 0x713;
      uVar4 = 2;
      iVar11 = DAT_000ca024 + 0xc9cf6;
      goto LAB_000c9cf4;
    }
    goto LAB_000c9de8;
  default:
    if (*(int *)(iVar11 + 0x24) != 0) {
      uVar7 = 0x767;
      uVar4 = 2;
      iVar11 = DAT_000c9d1c + 0xc9bbe;
LAB_000c9cf4:
      mm_camera_debug_log(1,uVar4,iVar11,uVar7);
    }
LAB_000c9de8:
    iVar10 = 0;
    goto switchD_000c9b4c_caseD_1;
  case 0x24:
    if (*(int *)(iVar11 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c9d24 + 0xc9be0,0x723);
    }
    iVar10 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = 0x2400000000;
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto switchD_000c9b4c_caseD_1;
  case 0x25:
    iVar10 = QCamera2HardwareInterface::updateThermalLevel
                       (*(QCamera2HardwareInterface **)(this + 4),param_2);
    goto switchD_000c9b4c_caseD_1;
  case 0x29:
                    /* WARNING: Load size is inaccurate */
    iVar10 = 0;
    if (*param_2 == 0x17) {
      if ((this[0x65] == (QCameraStateMachine)0x0) || (this[0x66] == (QCameraStateMachine)0x0)) {
LAB_000c9da8:
        iVar10 = 0;
      }
      else {
        iVar10 = QCamera2HardwareInterface::preparePreview
                           (*(QCamera2HardwareInterface **)(this + 4));
        if (iVar10 == 0) {
          iVar10 = QCamera2HardwareInterface::startPreview
                             (*(QCamera2HardwareInterface **)(this + 4));
          if (iVar10 == 0) goto LAB_000c9da8;
          QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        }
      }
    }
    local_40._4_4_ = 0x29;
LAB_000c9dac:
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0x2a:
    iVar10 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar10 == 0) {
      iVar10 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x2a;
    break;
  case 0x2b:
    QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    local_40._4_4_ = 0x2b;
LAB_000c9c82:
    iVar10 = 0;
    local_38 = local_38 & 0xffffffff00000000;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar10);
LAB_000c9e86:
  QCamera2HardwareInterface::signalAPIResult
            (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
switchD_000c9b4c_caseD_1:
  if (*piVar12 == local_24) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

