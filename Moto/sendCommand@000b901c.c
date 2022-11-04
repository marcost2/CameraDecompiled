
/* qcamera::QCamera2HardwareInterface::sendCommand(int, int&, int&) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::sendCommand
          (QCamera2HardwareInterface *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  QCameraStream *this_00;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  QCameraParametersIntf *pQVar7;
  QCameraChannel *this_01;
  
  uVar4 = 0;
  switch(param_1) {
  case 1:
    iVar1 = *param_2;
    if ((iVar1 < 0) ||
       (iVar5 = QCameraParametersIntf::getMaxZoom((QCameraParametersIntf *)(this + 0x4ac)),
       iVar5 <= iVar1)) {
      return 0xffffffea;
    }
    MotSmoothZoom::startZoom(*(MotSmoothZoom **)(this + 0x1ec8),*param_2);
    goto LAB_000b913c;
  case 2:
    MotSmoothZoom::stopZoom(*(MotSmoothZoom **)(this + 0x1ec8));
LAB_000b913c:
    uVar4 = 0;
    break;
  case 6:
  case 7:
    pQVar7 = (QCameraParametersIntf *)(this + 0x4ac);
    uVar6 = count_leading_zeroes(param_1 + -6);
    bVar3 = SUB41(uVar6 >> 5,0);
    QCameraParametersIntf::setFaceDetectionOption(pQVar7,bVar3);
    uVar4 = QCameraParametersIntf::setFaceDetection(pQVar7,bVar3,true);
    if (*(int *)(*(int *)(DAT_000b92e4 + 0xb908a) + 0x28) != 0) {
      iVar5 = QCameraParametersIntf::isFaceDetectionEnabled(pQVar7);
      iVar1 = DAT_000b92ec + 0xb90a6;
      if (iVar5 != 0) {
        iVar1 = DAT_000b92e8 + 0xb90a8;
      }
      mm_camera_debug_log(1,3,DAT_000b92f4 + 0xb90bc,0x1c1f,DAT_000b92f0 + 0xb90b2,iVar1);
    }
    break;
  case 0x14:
  case 0x15:
    uVar6 = count_leading_zeroes(param_1 + -0x14);
    uVar4 = QCameraParametersIntf::setHistogram
                      ((QCameraParametersIntf *)(this + 0x4ac),SUB41(uVar6 >> 5,0));
    if (*(int *)(*(int *)(DAT_000b92d0 + 0xb90dc) + 0x28) != 0) {
      iVar5 = QCameraParametersIntf::isHistogramEnabled((QCameraParametersIntf *)(this + 0x4ac));
      iVar1 = DAT_000b92d8 + 0xb90f8;
      if (iVar5 != 0) {
        iVar1 = DAT_000b92d4 + 0xb90fa;
      }
      mm_camera_debug_log(1,3,DAT_000b92e0 + 0xb910e,0x1c17,DAT_000b92dc + 0xb9104,iVar1);
    }
    break;
  case 0x17:
    QCameraPerfLock::lock_acq((QCameraPerfLock *)(this + 0x8e0));
    *param_3 = 0;
    *param_2 = 0;
    iVar1 = QCameraStateMachine::isCaptureRunning((QCameraStateMachine *)(this + 0x4dc));
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(DAT_000b92b8 + 0xb91f2) + 0x34) != 0) {
        mm_camera_debug_log(1,6,DAT_000b92c0 + 0xb920a,0x1bd4,DAT_000b92bc + 0xb9202);
      }
      pQVar7 = (QCameraParametersIntf *)(this + 0x4ac);
      this[0xa9e] = (QCamera2HardwareInterface)0x1;
      uVar4 = QCameraParametersIntf::setLongshotEnable(pQVar7,true);
      iVar1 = QCameraParametersIntf::isZSLMode(pQVar7);
      if ((((iVar1 != 0) &&
           (iVar1 = QCameraStateMachine::isPreviewRunning((QCameraStateMachine *)(this + 0x4dc)),
           iVar1 != 0)) &&
          (this_01 = *(QCameraChannel **)(this + 0x9b4), this_01 != (QCameraChannel *)0x0)) &&
         (*(int *)(this_01 + 0x1c) != 0)) {
        uVar6 = 0;
        do {
          this_00 = (QCameraStream *)QCameraChannel::getStreamByIndex(this_01,uVar6);
          if ((this_00 != (QCameraStream *)0x0) &&
             (iVar1 = QCameraStream::isTypeOf(this_00,3), iVar1 != 0)) {
            uVar6 = getBufNumRequired(this,3);
            if ((byte)this_00[0x8c] < uVar6) {
              *param_2 = 0x27;
              piVar2 = (int *)QCameraParametersIntf::getRelatedCamSyncInfo(pQVar7);
              if (*piVar2 == 1) {
                *param_3 = 0x28;
              }
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(this_01 + 0x1c));
      }
      this[0x1dfd] = (QCamera2HardwareInterface)0x0;
      this[0x1bd8] = (QCamera2HardwareInterface)0x0;
    }
    else {
      uVar4 = 0xffffffed;
    }
    break;
  case 0x18:
    QCameraPerfLock::lock_rel((QCameraPerfLock *)(this + 0x8e0));
    if (this[0xa9e] != (QCamera2HardwareInterface)0x0) {
      iVar1 = QCameraStateMachine::isCaptureRunning((QCameraStateMachine *)(this + 0x4dc));
      if (iVar1 != 0) {
        cancelPicture(this);
        QCameraStateMachine::procEvt((QCameraStateMachine *)(this + 0x4dc),0x24,(void *)0x0);
        iVar5 = *(int *)(this + 0x9b4);
        iVar1 = QCameraParametersIntf::isZSLMode((QCameraParametersIntf *)(this + 0x4ac));
        if ((iVar1 != 0 && iVar5 != 0) && (this[0x1bd8] != (QCamera2HardwareInterface)0x0)) {
          (**(code **)((*(undefined4 **)(this + 0x60))[1] + 0x30))
                    (**(undefined4 **)(this + 0x60),*(undefined4 *)(iVar5 + 0x10));
        }
      }
    }
    this[0x1bd8] = (QCamera2HardwareInterface)0x0;
    if (*(int *)(*(int *)(DAT_000b92c4 + 0xb91b2) + 0x34) != 0) {
      mm_camera_debug_log(1,6,DAT_000b92cc + 0xb91ca,0x1c0e,DAT_000b92c8 + 0xb91c2);
    }
    this[0xa9e] = (QCamera2HardwareInterface)0x0;
    uVar4 = QCameraParametersIntf::setLongshotEnable((QCameraParametersIntf *)(this + 0x4ac),false);
    this[0x1dfd] = (QCamera2HardwareInterface)0x0;
    return uVar4;
  }
  return uVar4;
}

