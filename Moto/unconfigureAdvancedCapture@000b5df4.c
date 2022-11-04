
/* qcamera::QCamera2HardwareInterface::unconfigureAdvancedCapture() */

int __thiscall
qcamera::QCamera2HardwareInterface::unconfigureAdvancedCapture(QCamera2HardwareInterface *this)

{
  int iVar1;
  uint uVar2;
  QCameraParametersIntf *this_00;
  int iVar3;
  
  iVar3 = *(int *)(DAT_000b5fd8 + 0xb5e08);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b5fe0 + 0xb5e24,0x13ae,DAT_000b5fdc + 0xb5e1c);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  QCameraParametersIntf::setQuadraCfaMode(this_00,0,true);
  if (this[0x1dc4] == (QCamera2HardwareInterface)0x0) {
    return 0;
  }
  this[0x1dc4] = (QCamera2HardwareInterface)0x0;
  if (this[0xab9] != (QCamera2HardwareInterface)0x0) {
    QCameraParametersIntf::set3ALock(this_00,false);
    this[0xab9] = (QCamera2HardwareInterface)0x0;
  }
  iVar1 = QCameraParametersIntf::isHDREnabled(this_00);
  if ((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isAEBracketEnabled(this_00), iVar1 != 0)) {
    iVar1 = QCameraParametersIntf::setToneMapMode(this_00,1,true);
    if ((iVar1 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
      mm_camera_debug_log(1,2,DAT_000b5fe8 + 0xb5e8a,0x13bc,DAT_000b5fe4 + 0xb5e82);
    }
    this[0x1dc5] = (QCamera2HardwareInterface)0x0;
    iVar3 = (*(code *)PTR_stopAEBracket_00119c4c)(this_00);
    return iVar3;
  }
  iVar1 = QCameraParametersIntf::isChromaFlashEnabled(this_00);
  if ((iVar1 != 0) ||
     ((((this[0xaa9] != (QCamera2HardwareInterface)0x0 &&
        (this[0xa9e] == (QCamera2HardwareInterface)0x0)) ||
       (this[0x1c20] != (QCamera2HardwareInterface)0x0)) ||
      (iVar1 = QCameraParametersIntf::getManualCaptureMode(this_00), 1 < iVar1)))) {
    iVar3 = (*(code *)PTR_resetFrameCapture_00119c54)(this_00,1,this[0x1c20]);
    return iVar3;
  }
  iVar1 = QCameraParametersIntf::isUbiFocusEnabled(this_00);
  if ((iVar1 != 0) || (iVar1 = QCameraParametersIntf::isUbiRefocus(this_00), iVar1 != 0)) {
    iVar3 = configureAFBracketing(this,false);
    return iVar3;
  }
  iVar1 = QCameraParametersIntf::isOptiZoomEnabled(this_00);
  if (iVar1 == 0) {
    iVar1 = QCameraParametersIntf::isStillMoreEnabled(this_00);
    if (iVar1 != 0) {
      uVar2 = QCameraParametersIntf::getStillMoreSettings(this_00);
      QCameraParametersIntf::setStillMoreSettings(this_00,uVar2 & 0xffff00);
      iVar1 = QCameraParametersIntf::isSeeMoreEnabled(this_00);
      if ((iVar1 == 0) &&
         (iVar1 = QCameraParametersIntf::isLTMForSeeMoreEnabled(this_00), iVar1 == 0)) {
        iVar1 = QCameraParametersIntf::setToneMapMode(this_00,1,true);
        if ((iVar1 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000b5ff0 + 0xb5fd4,0x13d6,DAT_000b5fec + 0xb5fcc);
        }
      }
      else {
        iVar1 = 0;
      }
      QCameraParametersIntf::setTintless(SUB41(this_00,0));
      return iVar1;
    }
    if (*(int *)(iVar3 + 0x24) != 0) {
      mm_camera_debug_log(1,2,DAT_000b5ff8 + 0xb5f88,0x13dd,DAT_000b5ff4 + 0xb5f80);
    }
    return -0x16;
  }
  iVar3 = QCameraParametersIntf::setAndCommitZoom(this_00,*(int *)(this + 0x1bdc));
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x1df8));
  if (*(int *)(this + 0x1e1c) == 0) {
    uVar2 = 0;
    *(undefined4 *)(this + 0x1e1c) = 0;
  }
  else {
    uVar2 = *(int *)(this + 0x1e18) + 4;
    if ((uVar2 != 0) && (uVar2 <= *(uint *)(this + 0x1e20))) goto LAB_000b5f9a;
  }
  *(uint *)(this + 0x1e20) = uVar2;
LAB_000b5f9a:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x1df8));
  return iVar3;
}

