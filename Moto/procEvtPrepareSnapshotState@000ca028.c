
/* qcamera::QCameraStateMachine::procEvtPrepareSnapshotState(qcamera::qcamera_sm_evt_enum_t, void*)
    */

undefined4 __thiscall
qcamera::QCameraStateMachine::procEvtPrepareSnapshotState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  QCamera2HardwareInterface *this_00;
  cam_reprocess_info_t cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_30;
  ulonglong local_28;
  int local_1c;
  
  puVar5 = &local_118;
  piVar8 = *(int **)(DAT_000ca2d8 + 0xca03e);
  local_1c = *piVar8;
  local_30 = 0;
  local_28 = 0;
  iVar7 = *(int *)(DAT_000ca2dc + 0xca052);
  if (*(int *)(iVar7 + 0x30) != 0) {
    local_118._0_4_ = DAT_000ca2e0 + 0xca062;
    local_118._4_4_ = param_1;
    mm_camera_debug_log(1,5,DAT_000ca2e4 + 0xca06c,0x783);
  }
  switch(param_1) {
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    switch(*param_2) {
    case 0:
      uVar6 = QCamera2HardwareInterface::processAutoFocusEvent
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_auto_focus_data_t *)((int)param_2 + 8));
      break;
    case 1:
      QCamera2HardwareInterface::processPrepSnapshotDoneEvent
                (*(QCamera2HardwareInterface **)(this + 4),
                 *(cam_prep_snapshot_state_t *)((int)param_2 + 8));
      uVar6 = 0;
      *(undefined4 *)(this + 8) = 2;
      local_30._4_4_ = 0x17;
      goto LAB_000ca09e;
    case 2:
      uVar6 = QCamera2HardwareInterface::processFaceDetectionResult
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_faces_data_t *)((int)param_2 + 8));
      break;
    case 3:
      uVar6 = QCamera2HardwareInterface::processHistogramStats
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_hist_stats_t *)((int)param_2 + 8));
      break;
    case 4:
      uVar6 = QCamera2HardwareInterface::processZoomEvent
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_crop_data_t *)((int)param_2 + 8));
      break;
    case 5:
      this_00 = *(QCamera2HardwareInterface **)(this + 4);
      iVar7 = 200;
      puVar2 = (undefined4 *)((int)param_2 + 0x14);
      puVar5 = &local_118;
      do {
        iVar7 = iVar7 + -4;
        *(undefined4 *)puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = (undefined8 *)((int)puVar5 + 4);
      } while (iVar7 != 0);
      uVar6 = QCamera2HardwareInterface::processASDUpdate
                        (this_00,*(cam_asd_decision_t *)((int)param_2 + 8));
      break;
    default:
      if (*(int *)(iVar7 + 0x20) != 0) {
        local_110 = *(undefined4 *)(this + 8);
        uVar4 = 0x7ea;
        local_118._0_4_ = DAT_000ca2f8 + 0xca234;
        uVar6 = 1;
        iVar7 = DAT_000ca2fc + 0xca242;
        local_118._4_4_ = *param_2;
LAB_000ca1b6:
        mm_camera_debug_log(1,uVar6,iVar7,uVar4);
      }
      goto LAB_000ca1ba;
    case 7:
      if (*(int *)(iVar7 + 0x24) != 0) {
        local_110 = *(undefined4 *)(this + 8);
        uVar4 = 0x7d1;
        local_118._0_4_ = DAT_000ca2f0 + 0xca256;
        local_118._4_4_ = 0x21;
        uVar6 = 2;
        iVar7 = DAT_000ca2f4 + 0xca264;
        goto LAB_000ca1b6;
      }
      goto LAB_000ca1ba;
    case 8:
      uVar6 = QCamera2HardwareInterface::transAwbMetaToParams
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_awb_params_t *)((int)param_2 + 8));
      break;
    case 9:
      uVar6 = QCamera2HardwareInterface::processAEInfo
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_3a_params_t *)((int)param_2 + 8));
      break;
    case 10:
      uVar6 = QCamera2HardwareInterface::processFocusPositionInfo
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (cam_focus_pos_info_t *)((int)param_2 + 8));
      break;
    case 0xb:
      uVar6 = QCamera2HardwareInterface::processHDRData(*(cam_asd_hdr_scene_data_t *)(this + 4));
      break;
    case 0xc:
      uVar6 = QCamera2HardwareInterface::processRetroAECUnlock
                        (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xd:
      uVar6 = QCamera2HardwareInterface::processZSLCaptureDone
                        (*(QCamera2HardwareInterface **)(this + 4));
      break;
    case 0xe:
      cVar1 = *(cam_reprocess_info_t *)(this + 4);
      puVar3 = (undefined8 *)((int)param_2 + 0x10);
      iVar7 = 0xe8;
      do {
        uVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar7 = iVar7 + -8;
        *puVar5 = uVar9;
        puVar5 = puVar5 + 1;
      } while (iVar7 != 0);
      uVar6 = QCamera2HardwareInterface::processDualCameraUpdate(cVar1);
    }
    goto LAB_000ca0a8;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 8) {
      uVar6 = 0;
      local_28 = local_28 & 0xffffffff00000000;
      local_30 = 0x1700000000;
      QCamera2HardwareInterface::signalAPIResult
                (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
      local_28 = local_28 & 0xffffffff00000000;
      local_30 = 0x1900000000;
      QCamera2HardwareInterface::signalAPIResult
                (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
      QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
      goto LAB_000ca0a8;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      local_110 = *(undefined4 *)(this + 8);
      uVar4 = 0x808;
      local_118._0_4_ = DAT_000ca300 + 0xca1aa;
      uVar6 = 1;
      iVar7 = DAT_000ca304 + 0xca1b8;
      local_118._4_4_ = *param_2;
      goto LAB_000ca1b6;
    }
    break;
  case 0x23:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
    if (*(int *)(iVar7 + 0x24) != 0) {
      local_110 = *(undefined4 *)(this + 8);
      uVar4 = 0x84d;
      local_118._0_4_ = DAT_000ca310 + 0xca18c;
      uVar6 = 2;
      iVar7 = DAT_000ca314 + 0xca19a;
      local_118._4_4_ = param_1;
      goto LAB_000ca1b6;
    }
    break;
  case 0x24:
    if (*(int *)(iVar7 + 0x24) != 0) {
      local_110 = *(undefined4 *)(this + 8);
      local_118._0_4_ = DAT_000ca308 + 0xca14c;
      local_118._4_4_ = 0x24;
      mm_camera_debug_log(1,2,DAT_000ca30c + 0xca15a,0x813);
    }
    uVar6 = 0;
    local_28 = local_28 & 0xffffffff00000000;
    local_30 = 0x2400000000;
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
    goto LAB_000ca0a8;
  case 0x25:
    uVar6 = QCamera2HardwareInterface::updateThermalLevel
                      (*(QCamera2HardwareInterface **)(this + 4),param_2);
    goto LAB_000ca0a8;
  case 0x2a:
  case 0x2b:
  default:
    if (*(int *)(iVar7 + 0x20) != 0) {
      local_110 = *(undefined4 *)(this + 8);
      local_118._0_4_ = DAT_000ca2e8 + 0xca084;
      local_118._4_4_ = param_1;
      mm_camera_debug_log(1,1,DAT_000ca2ec + 0xca092,0x7a7);
    }
    uVar6 = 0xffffffda;
    local_30._4_4_ = param_1;
LAB_000ca09e:
    local_28 = local_28 & 0xffffffff00000000;
    local_30 = CONCAT44(local_30._4_4_,uVar6);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
    goto LAB_000ca0a8;
  }
LAB_000ca1ba:
  uVar6 = 0;
LAB_000ca0a8:
  if (*piVar8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

