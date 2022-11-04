
/* qcamera::QCamera2HardwareInterface::configureAdvancedCapture() */

int __thiscall
qcamera::QCamera2HardwareInterface::configureAdvancedCapture(QCamera2HardwareInterface *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  QCameraParametersIntf *this_00;
  int iVar6;
  bool bVar7;
  
  iVar6 = *(int *)(DAT_000b6548 + 0xb627a);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6550 + 0xb6292,0x13f2,DAT_000b654c + 0xb628a);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::checkFeatureConcurrency(this_00);
  if (iVar1 != 0) {
    if (*(int *)(iVar6 + 0x20) == 0) {
      return iVar1;
    }
    uVar3 = 1;
    uVar5 = 0x13f7;
    iVar6 = DAT_000b6554 + 0xb62b6;
    iVar4 = DAT_000b6558 + 0xb62be;
    goto LAB_000b641e;
  }
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6560 + 0xb62de,0x13fb,DAT_000b655c + 0xb62d6);
  }
  QCameraParametersIntf::setQuadraCfaMode(this_00,1,true);
  *(undefined4 *)(this + 0x1dc0) = 0;
  *(undefined4 *)(this + 0x1dbc) = 0;
  this[0x1dc4] = (QCamera2HardwareInterface)0x1;
  iVar1 = QCameraParametersIntf::getRelatedCamSyncInfo(this_00);
  if (*(int *)(iVar1 + 8) == 1) {
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b6568 + 0xb6324,0x1406,DAT_000b6564 + 0xb631c);
      return 0;
    }
    return 0;
  }
  iVar1 = QCameraParametersIntf::isStillMoreEnabled(this_00);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = QCameraParametersIntf::isSeeMoreEnabled(this_00);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = QCameraParametersIntf::isUbiFocusEnabled(this_00);
  if ((iVar1 == 0) && (iVar1 = QCameraParametersIntf::isUbiRefocus(this_00), iVar1 == 0)) {
    iVar1 = QCameraParametersIntf::isOptiZoomEnabled(this_00);
    if (iVar1 == 0) {
      iVar1 = QCameraParametersIntf::isHDREnabled(this_00);
      if (iVar1 == 0) {
        iVar1 = QCameraParametersIntf::isAEBracketEnabled(this_00);
        if (iVar1 == 0) {
          iVar1 = QCameraParametersIntf::isStillMoreEnabled(this_00);
          if (iVar1 == 0) {
            iVar1 = QCameraParametersIntf::isChromaFlashEnabled(this_00);
            if (((iVar1 == 0) &&
                (iVar1 = QCameraParametersIntf::getLowLightLevel(this_00), iVar1 == 0)) &&
               (iVar1 = QCameraParametersIntf::getManualCaptureMode(this_00), iVar1 < 2)) {
              if ((this[0xaa8] == (QCamera2HardwareInterface)0x0) ||
                 (this[0xa9e] != (QCamera2HardwareInterface)0x0)) {
                if (*(int *)(iVar6 + 0x28) != 0) {
                  mm_camera_debug_log(1,3,DAT_000b6580 + 0xb6526,0x142f,DAT_000b657c + 0xb651e);
                }
                iVar1 = 0;
                this[0x1dc4] = (QCamera2HardwareInterface)0x0;
              }
              else {
                iVar1 = QCameraParametersIntf::configFrameCapture(this_00,true);
                this[0xaa9] = (QCamera2HardwareInterface)0x1;
              }
              uVar2 = 0;
            }
            else {
              iVar1 = QCameraParametersIntf::configFrameCapture(this_00,true);
              iVar4 = QCameraParametersIntf::getLowLightLevel(this_00);
              if (iVar4 != 0) {
                this[0x1c20] = (QCamera2HardwareInterface)0x1;
              }
            }
          }
          else {
            iVar1 = configureStillMore(this);
          }
        }
        else {
          iVar1 = QCameraParametersIntf::setToneMapMode(this_00,0,true);
          bVar7 = iVar1 != 0;
          if (bVar7) {
            iVar1 = *(int *)(iVar6 + 0x24);
          }
          if (bVar7 && iVar1 != 0) {
            mm_camera_debug_log(1,2,DAT_000b6578 + 0xb64aa,0x141e,DAT_000b6574 + 0xb64a2);
          }
          iVar1 = configureAEBracketing(this);
        }
      }
      else {
        iVar1 = configureHDRBracketing(this);
        if (this[0x1dc5] != (QCamera2HardwareInterface)0x0) {
          iVar1 = QCameraParametersIntf::setToneMapMode(this_00,0,true);
          iVar4 = iVar1;
          if (iVar1 != 0) {
            iVar4 = *(int *)(iVar6 + 0x24);
          }
          if (iVar1 != 0 && iVar4 != 0) {
            mm_camera_debug_log(1,2,DAT_000b6570 + 0xb6474,0x1418,DAT_000b656c + 0xb646c);
          }
        }
      }
    }
    else {
      uVar3 = QCameraParametersIntf::getParmZoomLevel(this_00);
      iVar1 = 0;
      *(undefined4 *)(this + 0x1bdc) = uVar3;
      QCameraParametersIntf::setAndCommitZoom(this_00,0);
      QCameraParametersIntf::set3ALock(this_00,true);
      this[0xab9] = (QCamera2HardwareInterface)0x1;
    }
  }
  else {
    iVar1 = configureAFBracketing(this,true);
  }
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6588 + 0xb6374,0x1434,DAT_000b6584 + 0xb636c);
  }
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
  if (uVar2 == 0) {
    if (*(int *)(this + 0x1e1c) == 0) {
      uVar2 = 0;
      *(undefined4 *)(this + 0x1e1c) = 0;
    }
    else {
      uVar2 = *(int *)(this + 0x1e18) + 1;
      if ((uVar2 != 0) && (uVar2 <= *(uint *)(this + 0x1e20))) goto LAB_000b6400;
    }
    *(uint *)(this + 0x1e20) = uVar2;
  }
  else {
    *(undefined4 *)(this + 0x1e1c) = 0;
    *(undefined4 *)(this + 0x1e20) = 0;
    if (*(int *)(this + 0x1e18) == -1) {
      *(undefined4 *)(this + 0x1e1c) = 0;
      *(undefined4 *)(this + 0x1e20) = 0;
    }
    else {
      *(int *)(this + 0x1e1c) = *(int *)(this + 0x1e18) + 1;
      *(undefined4 *)(this + 0x1e20) = 0;
    }
  }
LAB_000b6400:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
  if (*(int *)(iVar6 + 0x28) == 0) {
    return iVar1;
  }
  uVar3 = 3;
  uVar5 = 0x1437;
  iVar6 = DAT_000b658c + 0xb6416;
  iVar4 = DAT_000b6590 + 0xb6420;
LAB_000b641e:
  mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar6);
  return iVar1;
}

