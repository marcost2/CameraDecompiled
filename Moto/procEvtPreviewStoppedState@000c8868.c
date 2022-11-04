
/* qcamera::QCameraStateMachine::procEvtPreviewStoppedState(qcamera::qcamera_sm_evt_enum_t, void*)
    */

int __thiscall
qcamera::QCameraStateMachine::procEvtPreviewStoppedState
          (QCameraStateMachine *this,qcamera_sm_evt_enum_t param_1,void *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint local_34;
  undefined8 local_30;
  ulonglong local_28;
  int local_20;
  
  piVar9 = *(int **)(DAT_000c8bc8 + 0xc887e);
  local_20 = *piVar9;
  local_30 = 0;
  local_28 = 0;
  iVar7 = *(int *)(DAT_000c8bcc + 0xc8892);
  if (*(int *)(iVar7 + 0x30) != 0) {
    mm_camera_debug_log(1,5,DAT_000c8bd4 + 0xc88ac,0x164,DAT_000c8bd0 + 0xc88a2,param_1);
  }
  local_30._4_4_ = param_1;
  switch(param_1) {
  case 1:
    iVar5 = QCamera2HardwareInterface::setPreviewWindow
                      (*(QCamera2HardwareInterface **)(this + 4),(preview_stream_ops *)param_2);
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 1;
    break;
  case 2:
                    /* WARNING: Load size is inaccurate */
    iVar5 = QCamera2HardwareInterface::setCallBacks
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(FuncDef85 **)((int)param_2 + 4),*(FuncDef86 **)((int)param_2 + 8),
                       *(FuncDef87 **)((int)param_2 + 0xc),*(void **)((int)param_2 + 0x10));
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 2;
    break;
  case 3:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar5 = QCamera2HardwareInterface::enableMsgType
                        (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8bec + 0xc89d6,0x186,DAT_000c8be8 + 0xc89ce);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 3;
    break;
  case 4:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar5 = QCamera2HardwareInterface::disableMsgType
                        (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8bf4 + 0xc8a0c,0x194,DAT_000c8bf0 + 0xc8a04);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 4;
    break;
  case 5:
                    /* WARNING: Load size is inaccurate */
    uVar2 = QCamera2HardwareInterface::msgTypeEnabled
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    iVar5 = 0;
    local_28 = CONCAT44(uVar2,1);
    local_30._4_4_ = 5;
    break;
  case 6:
    local_34 = local_34 & 0xffffff00;
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar5 = QCamera2HardwareInterface::updateParameters
                        (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2,(bool *)&local_34
                        );
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8bfc + 0xc8a5e,0x1ae,DAT_000c8bf8 + 0xc8a56);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 6;
    break;
  case 7:
    QCameraMemoryPool::clear((QCameraMemoryPool *)(*(int *)(this + 4) + 0x934));
    iVar5 = 0;
    local_30._4_4_ = 7;
    local_28 = local_28 & 0xffffffff00000000;
    break;
  case 8:
    iVar5 = QCamera2HardwareInterface::commitParameterChanges();
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 8;
    break;
  case 9:
    iVar5 = 0;
    *(undefined *)(*(int *)(this + 4) + 0x1e0c) = 0;
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 9;
    break;
  case 10:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      puVar1 = (undefined *)
               QCameraParametersIntf::getParameters
                         ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac));
    }
    else {
      if (*(int *)(iVar7 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c8c04 + 0xc8ac6,0x1d7,DAT_000c8c00 + 0xc8abe);
      }
      puVar1 = (undefined *)malloc(1);
      if (puVar1 != (undefined *)0x0) {
        *puVar1 = 0;
      }
    }
    local_30._4_4_ = 10;
    local_28 = CONCAT44(puVar1,2);
    uVar3 = count_leading_zeroes(puVar1);
    iVar5 = (uVar3 >> 5) << 0x1f;
    break;
  case 0xb:
    iVar5 = QCamera2HardwareInterface::putParameters
                      (*(QCamera2HardwareInterface **)(this + 4),(char *)param_2);
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0xb;
    break;
  case 0xc:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar5 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar5 == 0) {
        iVar5 = 0;
        *(undefined4 *)(this + 8) = 1;
      }
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8c0c + 0xc8b20,500,DAT_000c8c08 + 0xc8b18);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0xc;
    break;
  case 0xd:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar8 = *(int *)(*(QCamera2HardwareInterface **)(this + 4) + 0x4a8);
      iVar5 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar8 == 0) {
        if (iVar5 == 0) {
          uVar2 = 1;
LAB_000c8ff4:
          iVar5 = 0;
          *(undefined4 *)(this + 8) = uVar2;
        }
        else if (*(int *)(iVar7 + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000c9028 + 0xc8f8e,0x20d,DAT_000c9024 + 0xc8f86);
        }
      }
      else if (iVar5 == 0) {
        if (this[100] != (QCameraStateMachine)0x0) {
          if (*(int *)(this + 0x68) != 0) {
            QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
            *(undefined4 *)(this + 0x68) = 0;
          }
          this[100] = (QCameraStateMachine)0x0;
        }
        iVar5 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
        if (iVar5 == 0) {
          uVar2 = 2;
          goto LAB_000c8ff4;
        }
        QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
      }
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8c14 + 0xc8b56,0x206,DAT_000c8c10 + 0xc8b4e);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0xd;
    break;
  case 0xe:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar5 = QCamera2HardwareInterface::preparePreview(*(QCamera2HardwareInterface **)(this + 4));
      if (iVar5 == 0) {
        if (this[100] != (QCameraStateMachine)0x0) {
          if (*(int *)(this + 0x68) != 0) {
            QCamera2HardwareInterface::enableMsgType
                      (*(QCamera2HardwareInterface **)(this + 4),*(int *)(this + 0x68));
            *(undefined4 *)(this + 0x68) = 0;
          }
          this[100] = (QCameraStateMachine)0x0;
        }
        iVar5 = QCamera2HardwareInterface::startPreview(*(QCamera2HardwareInterface **)(this + 4));
        if (iVar5 == 0) {
          iVar5 = 0;
          *(undefined4 *)(this + 8) = 2;
        }
        else {
          QCamera2HardwareInterface::unpreparePreview(SUB41(*(undefined4 *)(this + 4),0));
        }
      }
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8c1c + 0xc8b8c,0x22a,DAT_000c8c18 + 0xc8b84);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0xe;
    break;
  case 0xf:
    if (*(int *)(iVar7 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c8c24 + 0xc8ba8,0x244,DAT_000c8c20 + 0xc8ba0);
    }
    iVar5 = 0;
    local_30._4_4_ = 0xf;
    local_28 = local_28 & 0xffffffff00000000;
    break;
  case 0x10:
  case 0x15:
    iVar5 = 0;
    local_28 = 1;
    break;
  case 0x11:
                    /* WARNING: Load size is inaccurate */
    iVar5 = QCamera2HardwareInterface::storeMetaDataInBuffers
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2);
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0x11;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x2a:
  case 0x2b:
    if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8bdc + 0xc8930,0x291,DAT_000c8bd8 + 0xc8922,param_1,
                          *(undefined4 *)(this + 8));
    }
    iVar5 = -0x26;
    local_28 = local_28 & 0xffffffff00000000;
    break;
  case 0x1a:
  case 0x1b:
    if (*(int *)(iVar7 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c8be4 + 0xc896a,0x29d,DAT_000c8be0 + 0xc895c,param_1,
                          *(undefined4 *)(this + 8));
    }
    iVar5 = 0;
    local_28 = local_28 & 0xffffffff00000000;
    break;
  case 0x1c:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar5 = QCamera2HardwareInterface::cancelAutoFocus(*(QCamera2HardwareInterface **)(this + 4));
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8fc8 + 0xc8c5a,0x2a8,DAT_000c8fc4 + 0xc8c52);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0x1c;
    break;
  case 0x1d:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar5 = QCamera2HardwareInterface::sendCommand
                        (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                         (int *)((int)param_2 + 4),(int *)((int)param_2 + 8));
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c8fd0 + 0xc8c90,0x279,DAT_000c8fcc + 0xc8c88);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0x1d;
    break;
  case 0x1e:
    iVar5 = QCamera2HardwareInterface::release(*(QCamera2HardwareInterface **)(this + 4));
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0x1e;
    break;
  case 0x1f:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
                    /* WARNING: Load size is inaccurate */
      iVar5 = QCamera2HardwareInterface::dump(*(QCamera2HardwareInterface **)(this + 4),*param_2);
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c9030 + 0xc8cd8,0x26b,DAT_000c902c + 0xc8cd0);
    }
    local_28 = local_28 & 0xffffffff00000000;
    local_30._4_4_ = 0x1f;
    break;
  case 0x20:
    local_34 = 0;
                    /* WARNING: Load size is inaccurate */
    iVar5 = QCamera2HardwareInterface::registerFaceImage
                      (*(QCamera2HardwareInterface **)(this + 4),*param_2,
                       *(cam_pp_offline_src_config_t **)((int)param_2 + 4),(int *)&local_34);
    local_30 = CONCAT44(0x20,iVar5);
    local_28 = CONCAT44(local_34,3);
    goto LAB_000c9004;
  case 0x21:
                    /* WARNING: Load size is inaccurate */
    if (*param_2 == 7) {
      iVar5 = QCamera2HardwareInterface::waitDeferredWork
                        (*(QCamera2HardwareInterface **)(this + 4),
                         (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
      if (iVar5 == 0) {
        iVar5 = QCameraParametersIntf::updateFlashMode
                          ((QCameraParametersIntf *)(*(int *)(this + 4) + 0x4ac),
                           *(cam_flash_mode_t *)((int)param_2 + 8));
      }
      else if (*(int *)(iVar7 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000c9050 + 0xc8d38,0x2f2,DAT_000c904c + 0xc8d30);
      }
      goto LAB_000c900e;
    }
    if (*(int *)(iVar7 + 0x24) != 0) {
      uVar2 = *(undefined4 *)(this + 8);
      uVar6 = 0x2f8;
      iVar7 = DAT_000c9054 + 0xc8dfa;
      param_1 = 0x21;
      uVar4 = 2;
      iVar5 = DAT_000c9058 + 0xc8e08;
      goto LAB_000c8e26;
    }
    goto LAB_000c8e2a;
  case 0x22:
                    /* WARNING: Load size is inaccurate */
    param_1 = *param_2;
    if (param_1 == 8) {
      iVar5 = 0;
      QCamera2HardwareInterface::sendEvtNotify(*(QCamera2HardwareInterface **)(this + 4),1,100,0);
      goto LAB_000c900e;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      uVar2 = *(undefined4 *)(this + 8);
      uVar6 = 0x2d8;
      iVar7 = DAT_000c903c + 0xc8e1a;
      uVar4 = 1;
      iVar5 = DAT_000c9040 + 0xc8e28;
      goto LAB_000c8e26;
    }
    goto LAB_000c8e2a;
  default:
    if (*(int *)(iVar7 + 0x24) != 0) {
      uVar2 = *(undefined4 *)(this + 8);
      uVar6 = 0x31d;
      iVar7 = DAT_000c905c + 0xc8d68;
      uVar4 = 2;
      iVar5 = DAT_000c9060 + 0xc8d76;
LAB_000c8e26:
      mm_camera_debug_log(1,uVar4,iVar5,uVar6,iVar7,param_1,uVar2);
    }
LAB_000c8e2a:
    iVar5 = 0;
    goto LAB_000c900e;
  case 0x24:
    if (*(int *)(iVar7 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000c9048 + 0xc8d98,0x2e3,DAT_000c9044 + 0xc8d8a,0x24,
                          *(undefined4 *)(this + 8));
    }
    iVar5 = 0;
    local_28 = local_28 & 0xffffffff00000000;
    local_30 = 0x2400000000;
    QCamera2HardwareInterface::signalEvtResult
              (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
    goto LAB_000c900e;
  case 0x25:
    iVar5 = QCamera2HardwareInterface::waitDeferredWork
                      (*(QCamera2HardwareInterface **)(this + 4),
                       (uint *)(*(QCamera2HardwareInterface **)(this + 4) + 0x1db8));
    if (iVar5 == 0) {
      iVar5 = QCamera2HardwareInterface::updateThermalLevel
                        (*(QCamera2HardwareInterface **)(this + 4),param_2);
    }
    else if (*(int *)(iVar7 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000c9038 + 0xc8de2,0x2c5,DAT_000c9034 + 0xc8dda);
    }
    goto LAB_000c900e;
  }
  local_30 = CONCAT44(local_30._4_4_,iVar5);
LAB_000c9004:
  QCamera2HardwareInterface::signalAPIResult
            (*(QCamera2HardwareInterface **)(this + 4),(qcamera_api_result_t *)&local_30);
LAB_000c900e:
  if (*piVar9 == local_20) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

