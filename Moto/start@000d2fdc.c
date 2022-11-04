
/* qcamera::QCameraPostProcessor::start(qcamera::QCameraChannel*) */

undefined4 __thiscall
qcamera::QCameraPostProcessor::start(QCameraPostProcessor *this,QCameraChannel *param_1)

{
  QCameraPostProcessor QVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char acStack128 [92];
  int local_24;
  
  piVar7 = *(int **)(DAT_000d31f4 + 0xd2fec);
  local_24 = *piVar7;
  iVar8 = *(int *)(DAT_000d31f8 + 0xd2ffa);
  if (*(int *)(iVar8 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000d3200 + 0xd3016,0x102,DAT_000d31fc + 0xd300e);
  }
  if (this[0x168] == (QCameraPostProcessor)0x0) {
    if (*(int *)(iVar8 + 0x20) != 0) {
      uVar5 = 0x104;
      iVar8 = DAT_000d3204 + 0xd3160;
      iVar2 = DAT_000d3208 + 0xd3168;
LAB_000d3180:
      mm_camera_debug_log(1,1,iVar2,uVar5,iVar8);
    }
  }
  else {
    if (*(int *)(this + 0x164) != 0) {
      (**(code **)(*(int *)(this + 0x164) + 0xc))();
      *(undefined4 *)(this + 0x164) = 0;
    }
    if (param_1 != (QCameraChannel *)0x0) {
      iVar2 = QCamera2HardwareInterface::needReprocess(*(QCamera2HardwareInterface **)(this + 8));
      if (iVar2 != 0) {
        uVar3 = (uint)(char)this[0x140];
        if (0 < (int)uVar3) {
          iVar2 = 0;
          do {
            piVar6 = *(int **)(this + iVar2 * 4 + 0x144);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x18))(piVar6);
              (**(code **)(*piVar6 + 4))(piVar6);
              uVar3 = (uint)(byte)this[0x140];
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (char)uVar3);
        }
        *(undefined4 *)(this + 0x2d4) = 0;
        this[0x140] = (QCameraPostProcessor)0x0;
        iVar2 = *(int *)(this + 8);
        if (*(char *)(iVar2 + 0xa9e) == '\0') {
          QCameraParametersIntf::setReprocCount((QCameraParametersIntf *)(iVar2 + 0x4ac));
          iVar2 = *(int *)(this + 8);
        }
        iVar2 = QCameraParametersIntf::getManualCaptureMode
                          ((QCameraParametersIntf *)(iVar2 + 0x4ac));
        QVar1 = (QCameraPostProcessor)
                QCameraParametersIntf::getReprocCount
                          ((QCameraParametersIntf *)(*(int *)(this + 8) + 0x4ac));
        if (2 < iVar2) {
          QVar1 = (QCameraPostProcessor)((char)QVar1 + -1);
        }
        this[0x140] = QVar1;
        if ('\0' < (char)QVar1) {
          iVar2 = 0;
          do {
            piVar6 = (int *)QCamera2HardwareInterface::addReprocChannel
                                      (*(QCamera2HardwareInterface **)(this + 8),param_1,
                                       (int)(char)iVar2);
            *(int **)(this + iVar2 * 4 + 0x144) = piVar6;
            if (piVar6 == (int *)0x0) {
              if (*(int *)(iVar8 + 0x20) == 0) goto LAB_000d3184;
              uVar5 = 0x13f;
              iVar8 = DAT_000d3214 + 0xd31ae;
              iVar2 = DAT_000d3218 + 0xd31b8;
              goto LAB_000d3180;
            }
            iVar4 = (**(code **)(*piVar6 + 0x14))();
            if (iVar4 != 0) {
              if (*(int *)(iVar8 + 0x20) != 0) {
                mm_camera_debug_log(1,1,DAT_000d3220 + 0xd31d4,0x144,DAT_000d321c + 0xd31ca,iVar2);
              }
              if (*(int **)(this + iVar2 * 4 + 0x144) != (int *)0x0) {
                (**(code **)(**(int **)(this + iVar2 * 4 + 0x144) + 4))();
              }
              uVar5 = 0x80000000;
              *(undefined4 *)(this + iVar2 * 4 + 0x144) = 0;
              goto LAB_000d3188;
            }
            param_1 = *(QCameraChannel **)(this + iVar2 * 4 + 0x144);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (char)this[0x140]);
        }
      }
      property_get(DAT_000d3224 + 0xd30f0,acStack128,DAT_000d3228 + 0xd30f2);
      iVar2 = atoi(acStack128);
      uVar5 = 0;
      *(undefined4 *)(this + 0x2ec) = 0;
      this[0x2c8] = (QCameraPostProcessor)(0 < iVar2);
      android::VectorImpl::clear();
      QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x244),1,'\x01','\0');
      QCameraCbNotifier::startSnapshots((QCameraCbNotifier *)(*(int *)(this + 8) + 0x854));
      if (*(int *)(iVar8 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d3230 + 0xd314a,0x154,DAT_000d322c + 0xd3140,0);
      }
      goto LAB_000d3188;
    }
    if (*(int *)(iVar8 + 0x20) != 0) {
      uVar5 = 0x10e;
      iVar8 = DAT_000d320c + 0xd317a;
      iVar2 = DAT_000d3210 + 0xd3182;
      goto LAB_000d3180;
    }
  }
LAB_000d3184:
  uVar5 = 0x80000000;
LAB_000d3188:
  if (*piVar7 == local_24) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

