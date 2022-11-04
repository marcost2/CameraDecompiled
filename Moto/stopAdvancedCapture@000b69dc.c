
/* qcamera::QCamera2HardwareInterface::stopAdvancedCapture(qcamera::QCameraPicChannel*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::stopAdvancedCapture
          (QCamera2HardwareInterface *this,QCameraPicChannel *param_1)

{
  int iVar1;
  undefined4 uVar2;
  mm_camera_advanced_capture_t mVar3;
  QCameraParametersIntf *this_00;
  int iVar4;
  
  iVar4 = *(int *)(DAT_000b6ad0 + 0xb69ea);
  if (*(int *)(iVar4 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b6ad8 + 0xb6a02,0x15d7,DAT_000b6ad4 + 0xb69fa);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar1 = QCameraParametersIntf::isUbiFocusEnabled(this_00);
  if ((iVar1 == 0) && (iVar1 = QCameraParametersIntf::isUbiRefocus(this_00), iVar1 == 0)) {
    iVar1 = QCameraParametersIntf::isChromaFlashEnabled(this_00);
    if (((iVar1 != 0) ||
        (((this[0xaa9] != (QCamera2HardwareInterface)0x0 &&
          (this[0xa9e] == (QCamera2HardwareInterface)0x0)) ||
         (this[0x1c20] != (QCamera2HardwareInterface)0x0)))) ||
       (iVar1 = QCameraParametersIntf::getManualCaptureMode(this_00), 1 < iVar1)) {
      uVar2 = QCameraPicChannel::stopAdvancedCapture(param_1,4);
      this[0x1c20] = (QCamera2HardwareInterface)0x0;
      this[0xaa9] = (QCamera2HardwareInterface)0x0;
      return uVar2;
    }
    iVar1 = QCameraParametersIntf::isHDREnabled(this_00);
    if ((iVar1 == 0) && (iVar1 = QCameraParametersIntf::isAEBracketEnabled(this_00), iVar1 == 0)) {
      iVar1 = QCameraParametersIntf::isOptiZoomEnabled(this_00);
      if (iVar1 == 0) {
        iVar1 = QCameraParametersIntf::isStillMoreEnabled(this_00);
        iVar4 = *(int *)(iVar4 + 0x28);
        if (iVar1 != 0) {
          if (iVar4 != 0) {
            mm_camera_debug_log(1,3,DAT_000b6ae0 + 0xb6aa8,0x15e9,DAT_000b6adc + 0xb6aa0);
          }
          return 0;
        }
        if (iVar4 != 0) {
          mm_camera_debug_log(1,3,DAT_000b6ae8 + 0xb6ac6,0x15eb,DAT_000b6ae4 + 0xb6abe);
        }
        return 0xffffffea;
      }
      mVar3 = 3;
    }
    else {
      mVar3 = 1;
    }
  }
  else {
    mVar3 = 0;
  }
  uVar2 = QCameraPicChannel::stopAdvancedCapture(param_1,mVar3);
  return uVar2;
}

