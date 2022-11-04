
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraStateMachine::procEvtPicTakingState(qcamera::qcamera_sm_evt_enum_t, void*) */

int __thiscall
qcamera::QCameraStateMachine::procEvtPicTakingState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  QCamera2HardwareInterface *pQVar1;
  uint uVar2;
  undefined (*pauVar3) [16];
  cam_reprocess_info_t cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_24;
  
  puVar9 = (undefined8 *)&stack0xfffffed0;
  piVar12 = *(int **)(DAT_000ca664 + 0xca340);
  local_24 = *piVar12;
  local_40 = 0;
  local_38 = 0;
  iVar11 = *(int *)(DAT_000ca688 + 0xca354);
  if (*(int *)(iVar11 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000ca690 + 0xca36e,0x869);
  }
  switch(param_1) {
  case 1:
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ca6a0 + 0xca43a,0x86e);
    }
    local_40._4_4_ = 1;
    goto LAB_000ca3fa;
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
    iVar10 = QCamera2HardwareInterface::enableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 3;
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::disableMsgType
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar5 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    iVar10 = 0;
    local_38 = CONCAT44(uVar5,1);
    local_40._4_4_ = 5;
    break;
  case 6:
    local_44 = local_44 & 0xffffff00;
    iVar10 = QCamera2HardwareInterface::updateParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_44)
    ;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 6;
    break;
  case 7:
    local_40._4_4_ = 7;
    goto LAB_000ca4f4;
  case 8:
    iVar10 = QCamera2HardwareInterface::commitParameterChanges();
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 8;
    break;
  case 9:
    *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    local_40._4_4_ = 9;
LAB_000ca4f4:
    iVar10 = 0;
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    break;
  case 10:
    uVar5 = QCameraParametersIntf::getParameters
                      ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    uVar2 = count_leading_zeroes(uVar5);
    local_38 = CONCAT44(uVar5,2);
    local_40._4_4_ = 10;
    iVar10 = (uVar2 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar10 = QCamera2HardwareInterface::putParameters
                       (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xb;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x1e:
  case 0x2a:
  case 0x2b:
    local_40._4_4_ = param_1;
    if (*(int *)(iVar11 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000ca698 + 0xca3f2,0x97c);
    }
LAB_000ca3fa:
    local_38 = local_38 & 0xffffffff00000000;
    iVar10 = -0x26;
    break;
  case 0xf:
    iVar10 = QCamera2HardwareInterface::cancelPicture(*(QCamera2HardwareInterface **)(this + 4));
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xf;
    break;
  case 0x10:
    pauVar3 = (undefined (*) [16])&DAT_000caa40;
    goto LAB_000ca56a;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar10 = QCamera2HardwareInterface::storeMetaDataInBuffers
                       (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x11;
    break;
  case 0x15:
    pauVar3 = (undefined (*) [16])&DAT_000caa30;
LAB_000ca56a:
    local_40 = SUB168(*pauVar3,0);
    local_38 = SUB168(*pauVar3 >> 0x40,0);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto LAB_000ca900;
  case 0x18:
    pQVar1 = *(QCamera2HardwareInterface **)(this + 4);
    if (pQVar1[0xa9e] == (QCamera2HardwareInterface)0x0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000caa54 + 0xca846,0x952);
        pQVar1 = *(QCamera2HardwareInterface **)(this + 4);
      }
      iVar10 = -0x26;
    }
    else {
      iVar10 = 0;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = CONCAT44(0x18,iVar10);
    goto LAB_000ca404;
  case 0x19:
    if ((*(QCamera2HardwareInterface **)(this + 4))[0xa9e] == (QCamera2HardwareInterface)0x0) {
      if (*(int *)(iVar11 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000caa5c + 0xca87c,0x966);
      }
      iVar10 = -0x26;
    }
    else {
      iVar10 = QCamera2HardwareInterface::longShot(*(QCamera2HardwareInterface **)(this + 4));
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x19;
    break;
  case 0x1a:
    iVar10 = QCamera2HardwareInterface::cancelPicture(*(QCamera2HardwareInterface **)(this + 4));
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1a;
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
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0x18) {
      *(undefined4 *)(this + 8) = 2;
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
    goto LAB_000ca400;
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
    case 2:
    case 3:
    case 6:
      break;
    case 4:
      iVar10 = QCamera2HardwareInterface::processZoomEvent
                         (*(QCamera2HardwareInterface **)(this + 4),
                          (cam_crop_data_t *)((int)param_2 + 8));
      break;
    case 5:
      pQVar1 = *(QCamera2HardwareInterface **)(this + 4);
      iVar11 = 200;
      puVar6 = (undefined4 *)((int)param_2 + 0x14);
      do {
        iVar11 = iVar11 + -4;
        *(undefined4 *)puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = (undefined8 *)((int)puVar9 + 4);
      } while (iVar11 != 0);
      iVar10 = QCamera2HardwareInterface::processASDUpdate
                         (pQVar1,*(cam_asd_decision_t *)((int)param_2 + 8));
      break;
    case 7:
      if (*(int *)(iVar11 + 0x24) != 0) {
        uVar8 = 0x99d;
        uVar5 = 2;
        iVar11 = DAT_000caa64 + 0xca95e;
        goto LAB_000ca8fc;
      }
      goto LAB_000ca900;
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
      cVar4 = *(cam_reprocess_info_t *)(this + 4);
      puVar7 = (undefined8 *)((int)param_2 + 0x10);
      iVar11 = 0xe8;
      do {
        uVar13 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar11 = iVar11 + -8;
        *puVar9 = uVar13;
        puVar9 = puVar9 + 1;
      } while (iVar11 != 0);
      iVar10 = QCamera2HardwareInterface::processDualCameraUpdate(cVar4);
    }
    goto switchD_000ca660_caseD_f;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 0x80) {
      iVar10 = QCamera2HardwareInterface::isCACEnabled();
      if ((iVar10 != 0) ||
         (iVar10 = QCameraParametersIntf::isOEMFeatEnabled
                             ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac)), iVar10 != 0))
      {
        if (*(int *)(iVar11 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000caa6c + 0xca8bc,0x9d2);
        }
        if ((*(char *)(*(int *)(this + 4) + 0xa9e) != '\0') &&
           (iVar11 = QCamera2HardwareInterface::isCaptureShutterEnabled(), iVar11 == 0)) {
          QCamera2HardwareInterface::playShutter(*(QCamera2HardwareInterface **)(this + 4));
        }
        *(undefined *)(*(int *)(this + 4) + 0x1dfd) = 1;
      }
    }
    else {
      if (*param_2 == 8) {
        iVar10 = 0;
        local_38 = (ulonglong)local_38._4_4_ << 0x20;
        local_40 = 0x1700000000;
        QCamera2HardwareInterface::signalAPIResult
                  (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
        local_38 = local_38 & 0xffffffff00000000;
        local_40 = 0x1900000000;
        QCamera2HardwareInterface::signalAPIResult
                  (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
        QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
        goto switchD_000ca660_caseD_f;
      }
      if (*(int *)(iVar11 + 0x28) != 0) {
        uVar8 = 0x9de;
        uVar5 = 3;
        iVar11 = DAT_000caa74 + 0xca8fe;
        goto LAB_000ca8fc;
      }
    }
    goto LAB_000ca900;
  case 0x23:
    iVar10 = QCamera2HardwareInterface::processJpegNotify
                       (*(qcamera_jpeg_evt_payload_t **)(this + 4));
    goto switchD_000ca660_caseD_f;
  case 0x24:
    iVar10 = QCamera2HardwareInterface::cancelPicture(*(QCamera2HardwareInterface **)(this + 4));
    iVar11 = QCamera2HardwareInterface::isPreviewRestartEnabled();
    if (iVar11 == 0) {
      uVar5 = 0;
    }
    else {
      iVar11 = QCameraParametersIntf::getManualCaptureMode
                         ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
      if (2 < iVar11) {
        QCameraParametersIntf::updateZSLModeValue
                  ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),(bool)this[0x6c]);
        this[0x6c] = (QCameraStateMachine)0x0;
        iVar10 = QCamera2HardwareInterface::preparePreview
                           (*(QCamera2HardwareInterface **)(this + 4));
        if (iVar10 == 0) {
          *(undefined *)(*(int *)(this + 4) + 0x9d8) = 1;
          if (this[100] != (QCameraStateMachine)0x0) {
            if (*(int *)(this + 0x68) != 0) {
              QCamera2HardwareInterface::enableMsgType
                        (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
              *(undefined4 *)(this + 0x68) = 0;
            }
            this[100] = (QCameraStateMachine)0x0;
          }
          iVar10 = QCamera2HardwareInterface::startPreview
                             (*(QCamera2HardwareInterface **)(this + 4));
        }
      }
      uVar5 = 2;
    }
    *(undefined4 *)(this + 8) = uVar5;
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = CONCAT44(0x24,iVar10);
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto switchD_000ca660_caseD_f;
  case 0x25:
    iVar10 = QCamera2HardwareInterface::updateThermalLevel
                       (*(QCamera2HardwareInterface **)(this + 4),param_2);
    goto switchD_000ca660_caseD_f;
  case 0x26:
    iVar11 = QCamera2HardwareInterface::isPreviewRestartEnabled();
    iVar10 = QCamera2HardwareInterface::stopCaptureChannel
                       (*(QCamera2HardwareInterface **)(this + 4),SUB41(iVar11,0));
    if ((iVar11 != 0) && (iVar10 == 0)) {
      QCamera2HardwareInterface::unconfigureAdvancedCapture
                (*(QCamera2HardwareInterface **)(this + 4));
      iVar10 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar10 == 0) {
        *(undefined *)(*(int *)(this + 4) + 0x9d8) = 1;
        if (this[100] != (QCameraStateMachine)0x0) {
          if (*(int *)(this + 0x68) != 0) {
            QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
            *(undefined4 *)(this + 0x68) = 0;
          }
          this[100] = (QCameraStateMachine)0x0;
        }
        iVar10 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
      }
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x26;
    break;
  default:
    if (*(int *)(iVar11 + 0x24) != 0) {
      uVar8 = 0xa21;
      uVar5 = 2;
      iVar11 = DAT_000caa7c + 0xca820;
LAB_000ca8fc:
      mm_camera_debug_log(1,uVar5,iVar11,uVar8);
    }
LAB_000ca900:
    iVar10 = 0;
    goto switchD_000ca660_caseD_f;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar10);
LAB_000ca400:
  pQVar1 = *(QCamera2HardwareInterface **)(this + 4);
LAB_000ca404:
  QCamera2HardwareInterface::signalAPIResult(pQVar1,(qcamera_api_result_t *)&local_40);
switchD_000ca660_caseD_f:
  if (*piVar12 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}

