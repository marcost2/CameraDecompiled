
/* qcamera::QCameraStateMachine::procEvtPreviewReadyState(qcamera::qcamera_sm_evt_enum_t, void*) */

int __thiscall
qcamera::QCameraStateMachine::procEvtPreviewReadyState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  QCamera2HardwareInterface *this_00;
  uint uVar1;
  undefined (*pauVar2) [16];
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint local_44;
  undefined8 local_40;
  ulonglong local_38;
  int local_24;
  
  piVar8 = *(int **)(DAT_000c93d8 + 0xc9090);
  local_24 = *piVar8;
  local_40 = 0;
  local_38 = 0;
  iVar7 = *(int *)(DAT_000c93dc + 0xc90a4);
  if (*(int *)(iVar7 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000c93e4 + 0xc90be,0x339,DAT_000c93e0 + 0xc90b4,param_1);
  }
  switch(param_1) {
  case 1:
    QCamera2HardwareInterface::setPreviewWindow
              (*(QCamera2HardwareInterface **)(this + 4),(preview_stream_ops *)param_2);
    this_00 = *(QCamera2HardwareInterface **)(this + 4);
    if (*(int *)(this_00 + 0x4a8) == 0) {
      iVar7 = 0;
    }
    else {
      if (this[100] != (QCameraStateMachine)0x0) {
        if (*(int *)(this + 0x68) == 0) {
          this[100] = (QCameraStateMachine)0x0;
        }
        else {
          QCamera2HardwareInterface::enableMsgType(this_00,*(int *)(this + 0x68));
          *(undefined4 *)(this + 0x68) = 0;
          this[100] = (QCameraStateMachine)0x0;
          this_00 = *(QCamera2HardwareInterface **)(this + 4);
        }
      }
      iVar7 = QCamera2HardwareInterface::startPreview(this_00);
      if (iVar7 == 0) {
        iVar7 = 0;
        uVar3 = 2;
      }
      else {
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        uVar3 = 0;
      }
      *(undefined4 *)(this + 8) = uVar3;
    }
    local_40._4_4_ = 1;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 2:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::setCallBacks
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(FuncDef85 **)((int)param_2 + 4),*(FuncDef86 **)((int)param_2 + 8),
                       *(FuncDef87 **)((int)param_2 + 0xc),*(void **)((int)param_2 + 0x10));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 2;
    break;
  case 3:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 3;
    break;
  case 4:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::disableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar3 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    iVar7 = 0;
    local_38 = CONCAT44(uVar3,1);
    local_40._4_4_ = 5;
    break;
  case 6:
    local_44 = local_44 & 0xffffff00;
    iVar7 = QCamera2HardwareInterface::updateParameters
                      (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_44);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 6;
    break;
  case 7:
    if (*(int *)(iVar7 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000c9544 + 0xc9226,0x38e,DAT_000c9540 + 0xc921e);
    }
    iVar7 = 0;
    QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
    QCameraMemoryPool::clear((QCameraMemoryPool *)(*(int *)(this + 4) + 0x934));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 7;
    break;
  case 8:
    iVar7 = QCamera2HardwareInterface::commitParameterChanges();
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 8;
    break;
  case 9:
    iVar7 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar7 != 0) {
      *(undefined4 *)(this + 8) = 0;
    }
    *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 9;
    break;
  case 10:
    uVar3 = QCameraParametersIntf::getParameters
                      ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    uVar1 = count_leading_zeroes(uVar3);
    local_38 = CONCAT44(uVar3,2);
    local_40._4_4_ = 10;
    iVar7 = (uVar1 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar7 = QCamera2HardwareInterface::putParameters
                      (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0xb;
    break;
  case 0xc:
    iVar7 = 0;
    local_40._4_4_ = 0xc;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0xd:
    if (*(int *)(*(QCamera2HardwareInterface **)(this + 4) + 0x4a8) != 0) {
      iVar7 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar7 == 0) {
        uVar3 = 2;
      }
      else {
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        uVar3 = 0;
      }
      *(undefined4 *)(this + 8) = uVar3;
    }
    iVar7 = 0;
    local_40._4_4_ = 0xd;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0xe:
    iVar7 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
    if (iVar7 == 0) {
      uVar3 = 2;
    }
    else {
      QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
      uVar3 = 0;
    }
    iVar7 = 0;
    *(undefined4 *)(this + 8) = uVar3;
    local_40._4_4_ = 0xe;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0xf:
    QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
    iVar7 = 0;
    local_40._4_4_ = 0xf;
    *(undefined4 *)(this + 8) = 0;
    local_38 = local_38 & 0xffffffff00000000;
    break;
  case 0x10:
    pauVar2 = (undefined (*) [16])&DAT_000c9530;
    goto LAB_000c932c;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::storeMetaDataInBuffers
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x11;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x2a:
  case 0x2b:
    if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c93ec + 0xc9142,0x46c,DAT_000c93e8 + 0xc9134,param_1,
                          *(undefined4 *)(this + 8));
    }
    iVar7 = -0x26;
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = param_1;
    break;
  case 0x15:
    pauVar2 = (undefined (*) [16])&DAT_000c9520;
LAB_000c932c:
    local_40 = SUB168(*pauVar2,0);
    local_38 = SUB168(*pauVar2 >> 0x40,0);
    QCamera2HardwareInterface::signalAPIResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto LAB_000c94aa;
  case 0x1b:
    iVar7 = QCamera2HardwareInterface::autoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1b;
    break;
  case 0x1c:
    iVar7 = QCamera2HardwareInterface::cancelAutoFocus(*(QCamera2HardwareInterface **)(this + 4));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1c;
    break;
  case 0x1d:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::sendCommand
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,(int *)((int)param_2 + 4),
                       (int *)((int)param_2 + 8));
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1d;
    break;
  case 0x1f:
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::dump(*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_38 = local_38 & 0xffffffff00000000;
    local_40._4_4_ = 0x1f;
    break;
  case 0x20:
    local_44 = 0;
                    /* WARNING: Load size is inaccurate */
    iVar7 = QCamera2HardwareInterface::registerFaceImage
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(cam_pp_offline_src_config_t **)((int)param_2 + 4),(int *)&local_44);
    local_40 = CONCAT44(0x20,iVar7);
    local_38 = CONCAT44(local_44,3);
    goto LAB_000c94fa;
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 7) {
      iVar7 = QCameraParametersIntf::updateFlashMode
                        ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),
                         *(cam_flash_mode_t *)((int)param_2 + 8));
      goto LAB_000c9504;
    }
    if (*(int *)(iVar7 + 0x24) != 0) {
      uVar3 = *(undefined4 *)(this + 8);
      uVar6 = 0x49c;
      iVar7 = DAT_000c9558 + 0xc947a;
      param_1 = 0x21;
      uVar4 = 2;
      iVar5 = DAT_000c955c + 0xc9488;
      goto LAB_000c94a6;
    }
    goto LAB_000c94aa;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    param_1 = *param_2;
    if (param_1 == 8) {
      iVar7 = 0;
      QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
      goto LAB_000c9504;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      uVar3 = *(undefined4 *)(this + 8);
      uVar6 = 0x481;
      iVar7 = DAT_000c9548 + 0xc949a;
      uVar4 = 1;
      iVar5 = DAT_000c954c + 0xc94a8;
      goto LAB_000c94a6;
    }
    goto LAB_000c94aa;
  default:
    if (*(int *)(iVar7 + 0x24) != 0) {
      uVar3 = *(undefined4 *)(this + 8);
      uVar6 = 0x4b0;
      iVar7 = DAT_000c9560 + 0xc941e;
      uVar4 = 2;
      iVar5 = DAT_000c9564 + 0xc942c;
LAB_000c94a6:
      mm_camera_debug_log(1,uVar4,iVar5,uVar6,iVar7,param_1,uVar3);
    }
LAB_000c94aa:
    iVar7 = 0;
    goto LAB_000c9504;
  case 0x24:
    if (*(int *)(iVar7 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c9554 + 0xc944e,0x48c,DAT_000c9550 + 0xc9440,0x24,
                          *(undefined4 *)(this + 8));
    }
    iVar7 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    local_40 = 0x2400000000;
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
    goto LAB_000c9504;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar7);
LAB_000c94fa:
  QCamera2HardwareInterface::signalAPIResult
            (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_40);
LAB_000c9504:
  if (*piVar8 == local_24) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

