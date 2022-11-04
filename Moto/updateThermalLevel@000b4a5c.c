
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::updateThermalLevel(void*) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::updateThermalLevel
          (QCamera2HardwareInterface *this,void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  QCameraParametersIntf *this_00;
  int *piVar5;
  undefined4 uVar6;
  msm_vfe_frame_skip_pattern local_84 [4];
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  cam_fps_range_t acStack112 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  
  piVar5 = *(int **)(DAT_000b4bbc + 0xb4a6a);
  local_24 = *piVar5;
  if (this[100] == (QCamera2HardwareInterface)0x0) {
    if (*(int *)(*(int *)(DAT_000b4bc0 + 0xb4ab2) + 0x28) == 0) {
      uVar4 = 0;
    }
    else {
      mm_camera_debug_log(1,3,DAT_000b4bc8 + 0xb4acc,0x2c6d,DAT_000b4bc4 + 0xb4ac4);
      uVar4 = 0;
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    uVar6 = *param_1;
    this_00 = (QCameraParametersIntf *)(this + 0x4ac);
    QCameraParametersIntf::getPreviewFpsRange(this_00,&local_74,&local_78);
    iVar2 = QCameraParametersIntf::getThermalMode(this_00);
    iVar3 = QCameraParametersIntf::isHfrMode(this_00);
    if (iVar3 == 0) {
      local_7c = (float)(longlong)local_74;
      local_80 = (float)(longlong)local_78;
    }
    else {
      QCameraParametersIntf::getHfrFps(this_00,(cam_fps_range_t *)&local_60);
      local_80 = local_58._4_4_;
      local_7c = (float)local_58;
    }
    bVar1 = (bool)QCameraParametersIntf::getRecordingHintValue(this_00);
    calcThermalLevel(this,SUB41(uVar6,0),local_74,local_78,&local_7c,&local_80,acStack112,local_84,
                     bVar1);
    *(undefined4 *)(this + 0xa98) = uVar6;
    if (iVar2 == 1) {
      uVar4 = QCameraParametersIntf::setFrameSkip(this_00,local_84[0]);
    }
    else if (iVar2 == 0) {
      uVar4 = QCameraParametersIntf::adjustPreviewFpsRange(this_00,acStack112);
    }
    else {
      if (*(int *)(*(int *)(DAT_000b4bcc + 0xb4b3e) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000b4bd4 + 0xb4b58,0x2c8d,DAT_000b4bd0 + 0xb4b4e,iVar2);
      }
      uVar4 = 0;
    }
    QCameraParametersIntf::updateThermallLevelToDaemon(this_00,(int)(char)SUB41(uVar6,0));
    local_40 = 0;
    uStack56 = 0;
    local_50 = 0;
    uStack72 = 0;
    local_2c = 0;
    local_30 = 0;
    local_58 = CONCAT44(uVar6,0xe);
    local_60 = 0x400000000000;
    QCameraCbNotifier::notifyCallback
              ((QCameraCbNotifier *)(this + 0x854),(qcamera_callback_argm_t *)&local_60);
  }
  if (*piVar5 == local_24) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

