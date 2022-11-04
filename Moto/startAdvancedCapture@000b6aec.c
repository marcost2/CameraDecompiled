
/* qcamera::QCamera2HardwareInterface::startAdvancedCapture(qcamera::QCameraPicChannel*) */

void __thiscall
qcamera::QCamera2HardwareInterface::startAdvancedCapture
          (QCamera2HardwareInterface *this,QCameraPicChannel *param_1)

{
  int iVar1;
  mm_camera_advanced_capture_t mVar2;
  int iVar3;
  QCameraParametersIntf *this_00;
  int *piVar4;
  cam_capture_frame_config_t acStack1064 [1036];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000b6c28 + 0xb6afe);
  local_1c = *piVar4;
  iVar3 = *(int *)(DAT_000b6c2c + 0xb6b0a);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6c34 + 0xb6b22,0x1600,DAT_000b6c30 + 0xb6b1a);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::isUbiFocusEnabled(this_00);
  if ((iVar1 == 0) && (iVar1 = QCameraParametersIntf::isUbiRefocus(this_00), iVar1 == 0)) {
    iVar1 = QCameraParametersIntf::isOptiZoomEnabled(this_00);
    if (iVar1 == 0) {
      iVar1 = QCameraParametersIntf::isStillMoreEnabled(this_00);
      if (iVar1 == 0) {
        iVar1 = QCameraParametersIntf::isHDREnabled(this_00);
        if ((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isAEBracketEnabled(this_00), iVar1 != 0)
           ) {
          iVar3 = *piVar4 - local_1c;
          if (iVar3 != 0) goto LAB_000b6c22;
          mVar2 = 1;
          goto LAB_000b6b46;
        }
        iVar1 = QCameraParametersIntf::isChromaFlashEnabled(this_00);
        if (((iVar1 == 0) &&
            (((this[0xaa8] == (QCamera2HardwareInterface)0x0 ||
              (this[0xa9e] != (QCamera2HardwareInterface)0x0)) &&
             (this[0x1c20] == (QCamera2HardwareInterface)0x0)))) &&
           (iVar1 = QCameraParametersIntf::getManualCaptureMode(this_00), iVar1 < 2)) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000b6c44 + 0xb6c1a,0x1613,DAT_000b6c40 + 0xb6c12);
          }
          iVar3 = -0x16;
        }
        else {
          QCameraParametersIntf::getCaptureFrameConfig();
          iVar3 = QCameraPicChannel::startAdvancedCapture(param_1,4,acStack1064);
        }
      }
      else if (*(int *)(iVar3 + 0x28) == 0) {
        iVar3 = 0;
      }
      else {
        mm_camera_debug_log(1,3,DAT_000b6c3c + 0xb6b8c,0x1608,DAT_000b6c38 + 0xb6b84);
        iVar3 = 0;
      }
      if (*piVar4 == local_1c) {
        return;
      }
    }
    else {
      iVar3 = *piVar4 - local_1c;
      if (iVar3 == 0) {
        mVar2 = 3;
        goto LAB_000b6b46;
      }
    }
  }
  else {
    iVar3 = *piVar4 - local_1c;
    if (iVar3 == 0) {
      mVar2 = 0;
LAB_000b6b46:
      QCameraPicChannel::startAdvancedCapture(param_1,mVar2,(cam_capture_frame_config_t *)0x0);
      return;
    }
  }
LAB_000b6c22:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

