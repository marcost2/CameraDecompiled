
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraStateMachine::procEvtRecordingState(qcamera::qcamera_sm_evt_enum_t, void*) */

int __thiscall
qcamera::QCameraStateMachine::procEvtRecordingState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  uint uVar1;
  undefined (*pauVar2) [16];
  QCamera2HardwareInterface *this_00;
  cam_reprocess_info_t cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 uVar12;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_24;
  
  puVar8 = (undefined8 *)&stack0xfffffed0;
  piVar11 = *(int **)(DAT_000cadb4 + 0xcaaa0);
  local_24 = *piVar11;
  local_40 = 0;
  local_38 = 0;
  iVar10 = *(int *)(DAT_000cadb8 + 0xcaab4);
  if (*(int *)(iVar10 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000cadc0 + 0xcaace,0xa3d);
  }
  local_40._4_4_ = param_1;
  switch(param_1) {
  case 1:
  case 0xc:
  case 0xd:
    if (*(int *)(iVar10 + 0x28) != 0) {
      uVar4 = 3;
      uVar7 = 0xa45;
      iVar10 = DAT_000cadd0 + 0xcab62;
LAB_000cab60:
      mm_camera_debug_log(1,uVar4,iVar10,uVar7);
    }
    goto LAB_000cab64;
  case 2:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::setCallBacks
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(FuncDef85 **)((int)param_2 + 4),*(FuncDef86 **)((int)param_2 + 8),
                       *(FuncDef87 **)((int)param_2 + 0xc),*(void **)((int)param_2 + 0x10));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 2;
    break;
  case 3:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 3;
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::disableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar4 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    iVar9 = 0;
    local_38 = CONCAT44(uVar4,1);
    local_40._4_4_ = 5;
    break;
  case 6:
    local_44 = local_44 & 0xffffff00;
    iVar9 = QCamera2HardwareInterface::updateParameters
                      (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_44);
    if (iVar9 == 0) {
      if ((char)local_44 != '\0') {
        QCameraParametersIntf::cancelParameterChanges
                  ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
        if (*(int *)(iVar10 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000cadec + 0xcac5c,0xa86);
        }
        iVar9 = -0x16;
        goto LAB_000cac62;
      }
      iVar9 = 0;
    }
    else {
LAB_000cac62:
      *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 6;
    break;
  case 7:
  case 9:
    __android_log_print(6,DAT_000caddc + 0xcaba4,DAT_000cade0 + 0xcaba6,DAT_000cade4 + 0xcaba8);
    goto LAB_000cabaa;
  case 8:
    iVar9 = QCamera2HardwareInterface::commitParameterChanges();
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 8;
    break;
  case 10:
    uVar4 = QCameraParametersIntf::getParameters
                      ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    uVar1 = count_leading_zeroes(uVar4);
    local_38 = CONCAT44(uVar4,2);
    local_40._4_4_ = 10;
    iVar9 = (uVar1 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar9 = QCamera2HardwareInterface::putParameters
                      (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xb;
    break;
  case 0xe:
  case 0x1a:
  case 0x1e:
    if (*(int *)(iVar10 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000cadd8 + 0xcab8c,0xb66);
    }
LAB_000cabaa:
    iVar9 = -0x26;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0xf:
    QCamera2HardwareInterface::stopRecording(*(QCamera2HardwareInterface **)(this + 4));
    *(undefined4 *)(this + 8) = 2;
    iVar9 = QCamera2HardwareInterface::stopPreview(SUB41(*(undefined4 *)(this + 4),0));
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xf;
    break;
  case 0x10:
    pauVar2 = (undefined (*) [16])&DAT_000cb040;
    goto LAB_000cad14;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::storeMetaDataInBuffers
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x11;
    break;
  case 0x12:
  case 0x13:
  case 0x2a:
  case 0x2b:
    if (*(int *)(iVar10 + 0x24) != 0) {
      uVar4 = 2;
      uVar7 = 0xb1d;
      iVar10 = DAT_000cadc8 + 0xcab4a;
      goto LAB_000cab60;
    }
LAB_000cab64:
    iVar9 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0x14:
    iVar9 = QCamera2HardwareInterface::stopRecording(*(QCamera2HardwareInterface **)(this + 4));
    *(undefined4 *)(this + 8) = 2;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x14;
    break;
  case 0x15:
    pauVar2 = (undefined (*) [16])&DAT_000cb030;
LAB_000cad14:
    local_40 = SUB168(*pauVar2,0);
    local_38 = SUB168(*pauVar2 >> 0x40,0);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto LAB_000caf24;
  case 0x16:
    iVar9 = QCamera2HardwareInterface::releaseRecordingFrame
                      (*(QCamera2HardwareInterface **)(this + 4),param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x16;
    break;
  case 0x17:
    iVar9 = 0;
    local_40._4_4_ = 0x17;
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    break;
  case 0x18:
    iVar9 = 0;
    local_40._4_4_ = 0x18;
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    break;
  case 0x19:
    *(undefined4 *)(this + 8) = 6;
    iVar9 = QCamera2HardwareInterface::takeLiveSnapshot(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar9 != 0) {
      QCamera2HardwareInterface::unconfigureAdvancedCapture
                (*(QCamera2HardwareInterface **)(this + 4));
      *(undefined4 *)(this + 8) = 5;
    }
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x19;
    break;
  case 0x1b:
    iVar9 = QCamera2HardwareInterface::autoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1b;
    break;
  case 0x1c:
    iVar9 = QCamera2HardwareInterface::cancelAutoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1c;
    break;
  case 0x1d:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::sendCommand
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,(int *)((int)param_2 + 4),
                       (int *)((int)param_2 + 8));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1d;
    break;
  case 0x1f:
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::dump(*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1f;
    break;
  case 0x20:
    local_44 = 0;
                    /* WARNING: Load size is inaccurate */
    iVar9 = QCamera2HardwareInterface::registerFaceImage
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(cam_pp_offline_src_config_t **)((int)param_2 + 4),(int *)&local_44);
    local_40 = CONCAT44(0x20,iVar9);
    local_38 = CONCAT44(local_44,3);
    goto LAB_000cae08;
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    iVar9 = 0;
    switch(*param_2) {
    case 0:
      iVar9 = QCamera2HardwareInterface::processAutoFocusEvent
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_auto_focus_data_t *)((int)param_2 + 8));
      break;
    case 1:
    case 6:
      break;
    case 2:
      iVar9 = QCamera2HardwareInterface::processFaceDetectionResult
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_faces_data_t *)((int)param_2 + 8));
      break;
    case 3:
      iVar9 = QCamera2HardwareInterface::processHistogramStats
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_hist_stats_t *)((int)param_2 + 8));
      break;
    case 4:
      iVar9 = QCamera2HardwareInterface::processZoomEvent
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_crop_data_t *)((int)param_2 + 8));
      break;
    case 5:
      this_00 = *(QCamera2HardwareInterface **)(this + 4);
      iVar10 = 200;
      puVar5 = (undefined4 *)((int)param_2 + 0x14);
      do {
        iVar10 = iVar10 + -4;
        *(undefined4 *)puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = (undefined8 *)((int)puVar8 + 4);
      } while (iVar10 != 0);
      iVar9 = QCamera2HardwareInterface::processASDUpdate
                        (this_00,*(cam_asd_decision_t *)((int)param_2 + 8));
      break;
    case 7:
      if (*(int *)(iVar10 + 0x24) != 0) {
        uVar7 = 0xb8a;
        uVar4 = 2;
        iVar10 = DAT_000cb054 + 0xcafa6;
        goto LAB_000caf20;
      }
      goto LAB_000caf24;
    case 8:
      iVar9 = QCamera2HardwareInterface::transAwbMetaToParams
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_awb_params_t *)((int)param_2 + 8));
      break;
    case 9:
      iVar9 = QCamera2HardwareInterface::processAEInfo
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_3a_params_t *)((int)param_2 + 8));
      break;
    case 10:
      iVar9 = QCamera2HardwareInterface::processFocusPositionInfo
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_focus_pos_info_t *)((int)param_2 + 8));
      break;
    case 0xb:
      iVar9 = QCamera2HardwareInterface::processHDRData(*(cam_asd_hdr_scene_data_t *)(this + 4));
      break;
    case 0xc:
      iVar9 = QCamera2HardwareInterface::processRetroAECUnlock
                        (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xd:
      iVar9 = QCamera2HardwareInterface::processZSLCaptureDone
                        (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xe:
      cVar3 = *(cam_reprocess_info_t *)(this + 4);
      puVar6 = (undefined8 *)((int)param_2 + 0x10);
      iVar10 = 0xe8;
      do {
        uVar12 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar10 = iVar10 + -8;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 1;
      } while (iVar10 != 0);
      iVar9 = QCamera2HardwareInterface::processDualCameraUpdate(cVar3);
    }
    goto switchD_000cae58_caseD_f;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 8) {
      iVar9 = 0;
      QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
      goto switchD_000cae58_caseD_f;
    }
    if (*(int *)(iVar10 + 0x20) != 0) {
      uVar7 = 0xbb3;
      uVar4 = 1;
      iVar10 = DAT_000cb05c + 0xcaf22;
      goto LAB_000caf20;
    }
    goto LAB_000caf24;
  default:
    if (*(int *)(iVar10 + 0x24) != 0) {
      uVar7 = 0xbcc;
      uVar4 = 2;
      iVar10 = DAT_000cb06c + 0xcaeba;
LAB_000caf20:
      mm_camera_debug_log(1,uVar4,iVar10,uVar7);
    }
LAB_000caf24:
    iVar9 = 0;
    goto switchD_000cae58_caseD_f;
  case 0x24:
    if (*(int *)(iVar10 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000cb064 + 0xcaedc,0xbc3);
    }
    iVar9 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = 0x2400000000;
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto switchD_000cae58_caseD_f;
  case 0x25:
    iVar9 = QCamera2HardwareInterface::updateThermalLevel
                      (*(QCamera2HardwareInterface **)(this + 4),param_2);
    goto switchD_000cae58_caseD_f;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar9);
LAB_000cae08:
  QCamera2HardwareInterface::signalAPIResult
            (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
switchD_000cae58_caseD_f:
  if (*piVar11 != local_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

