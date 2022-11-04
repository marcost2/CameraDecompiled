
/* qcamera::MotCameraFactory::handleFactoryMeta(android::hardware::camera::common::V1_0::helper::CameraMetadata)
    */

void __thiscall
qcamera::MotCameraFactory::handleFactoryMeta(MotCameraFactory *this,CameraMetadata param_1)

{
  int iVar1;
  undefined4 uVar2;
  CameraMetadata *this_00;
  int iVar3;
  int *piVar4;
  undefined auStack60 [12];
  int local_30;
  int *local_2c;
  int local_28;
  int iStack36;
  int local_20;
  
  this_00 = (CameraMetadata *)(uint)(byte)param_1;
  piVar4 = *(int **)(DAT_0010829c + 0x108092);
  local_20 = *piVar4;
  if ((*(int *)this == 0) ||
     (*(int *)(QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20) == 0)) {
    if (*piVar4 == local_20) {
      __android_log_print(6,DAT_001082a0 + 0x108120,DAT_001082a4 + 0x108122,DAT_001082a8 + 0x108124)
      ;
      return;
    }
  }
  else {
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180000);
    if ((iVar1 != 0) &&
       (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
       local_30 == 2)) {
      local_28 = *local_2c;
      iStack36 = local_2c[1];
      *(int *)(this + 4) = local_28;
      *(int *)(this + 8) = iStack36;
      iVar1 = MotCtrl::motCtrl(*(MotCtrl **)
                                (QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),0x16,
                               &local_28,8,(void *)0x0,(uint *)0x0);
      if (iVar1 < 0) {
        uVar2 = 6;
        iVar1 = DAT_001082b0 + 0x108136;
        iVar3 = DAT_001082b4 + 0x108138;
      }
      else {
        uVar2 = 4;
        iVar1 = DAT_001082b8 + 0x108106;
        iVar3 = DAT_001082bc + 0x108108;
      }
      __android_log_print(uVar2,DAT_001082ac + 0x1080fc,iVar1,iVar3);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180001);
    if ((iVar1 != 0) &&
       (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
       local_30 == 2)) {
      local_28 = *local_2c;
      iStack36 = local_2c[1];
      *(int *)(this + 4) = local_28;
      *(int *)(this + 8) = iStack36;
      iVar1 = MotCtrl::motCtrl(*(MotCtrl **)
                                (QCameraParameters::SCENE_MODES_MAP + *(int *)this + 0x20),0x15,
                               &local_28,8,(void *)0x0,(uint *)0x0);
      if (iVar1 < 0) {
        uVar2 = 6;
        iVar1 = DAT_001082c4 + 0x10819a;
        iVar3 = DAT_001082c8 + 0x10819c;
      }
      else {
        uVar2 = 4;
        iVar1 = DAT_001082cc + 0x10818e;
        iVar3 = DAT_001082d0 + 0x108190;
      }
      __android_log_print(uVar2,DAT_001082c0 + 0x108184,iVar1,iVar3);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180002);
    if (((iVar1 != 0) &&
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
        local_30 == 1)) && (*local_2c != 0)) {
      __handleGetFocusPos(this);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180003);
    if (((iVar1 != 0) &&
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
        local_30 == 1)) && (*(uchar *)local_2c != '\0')) {
      __handleGetModuleVendorName(this);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180004);
    if (((iVar1 != 0) &&
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
        local_30 == 1)) && (*(uchar *)local_2c != '\0')) {
      __handleGetCalibrationStatus(this);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180005);
    if (((iVar1 != 0) &&
        (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
        local_30 == 1)) && (*(uchar *)local_2c != '\0')) {
      __handleGetCalibrationRaw(this);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180006);
    if ((iVar1 != 0) &&
       (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
       local_30 == 1)) {
      __setLedCalibrationEnabled(this,*(uchar *)local_2c);
    }
    iVar1 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                      (this_00,0x80180007);
    if ((iVar1 != 0) &&
       (android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack60),
       local_30 == 1)) {
      __handleGetLedCalibrationData(this);
    }
    if (*piVar4 == local_20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

