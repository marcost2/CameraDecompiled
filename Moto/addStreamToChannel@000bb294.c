
/* qcamera::QCamera2HardwareInterface::addStreamToChannel(qcamera::QCameraChannel*,
   cam_stream_type_t, void (*)(mm_camera_super_buf_t*, qcamera::QCameraStream*, void*), void*) */

int __thiscall
qcamera::QCamera2HardwareInterface::addStreamToChannel
          (QCamera2HardwareInterface *this,QCameraChannel *param_1,cam_stream_type_t param_2,
          FuncDef91 *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  QCameraParametersIntf *this_00;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 local_88;
  undefined4 uStack132;
  undefined auStack124 [12];
  undefined8 local_70;
  undefined4 uStack104;
  undefined4 local_64;
  undefined4 uStack96;
  undefined8 uStack92;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 local_34;
  int local_28;
  
  piVar6 = *(int **)(DAT_000bb4f0 + 0xbb2aa);
  local_28 = *piVar6;
  if (param_2 == 8) {
    prepareRawStream(this,param_1);
  }
  iVar1 = (**(code **)(*(int *)this + 8))(this,param_2);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(DAT_000bb4f4 + 0xbb35c) + 0x20) == 0) {
      iVar4 = -0xc;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000bb4fc + 0xbb376,0x218c,DAT_000bb4f8 + 0xbb36e);
      iVar4 = -0xc;
    }
    goto LAB_000bb4ce;
  }
  uVar2 = getBufNumRequired(this,param_2);
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  uVar3 = QCameraParametersIntf::isZSLMode(this_00);
  if (param_2 == 0xb) {
    iVar7 = 0;
    local_88 = 0;
    uStack132 = 0;
    QCameraParametersIntf::getStreamPpMask(this_00,0xb,(ulonglong *)&local_88);
    iVar4 = QCameraParametersIntf::getRecordingHintValue(this_00);
    if ((iVar4 != 0) && (iVar7 = QCameraParametersIntf::fdModeInVideo(this_00), iVar7 != 0)) {
      iVar7 = 1;
    }
    puVar9 = auStack124;
    iVar4 = QCameraParametersIntf::getAnalysisInfo
                      (SUB41(this_00,0),SUB41(iVar7,0),CONCAT44(uStack132,local_88),
                       (cam_analysis_info_t *)0x0);
    if (iVar4 != 0) {
      if (*(int *)(*(int *)(DAT_000bb500 + 0xbb334) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000bb508 + 0xbb352,0x21a4,DAT_000bb504 + 0xbb348,iVar4,puVar9);
      }
      goto LAB_000bb4ce;
    }
    uVar8 = 0;
    local_48 = local_70;
    uStack64 = uStack104;
    local_3c = local_64;
    uStack56 = uStack96;
    local_34 = uStack92;
    goto switchD_000bb3e8_caseD_b;
  }
  iVar4 = *(int *)(*(int *)(DAT_000bb50c + 0xbb38c) + *(int *)(this + 0x5c) * 4);
  local_48 = *(undefined8 *)(iVar4 + 0x3008);
  local_34 = *(undefined8 *)(iVar4 + 0x301c);
  uStack64 = (undefined4)*(undefined8 *)(iVar4 + 0x3010);
  local_3c = (undefined4)*(undefined8 *)(iVar4 + 0x3014);
  uStack56 = (undefined4)((ulonglong)*(undefined8 *)(iVar4 + 0x3014) >> 0x20);
  if (param_2 - 1 < 2) {
    local_48 = CONCAT44(2,*(undefined4 *)(this + 0x1e08));
  }
  iVar4 = needReprocess(this);
  if ((param_2 == 3) && (iVar4 != 0)) {
    iVar4 = QCameraParametersIntf::isLLNoiseEnabled(this_00);
    if (iVar4 == 0) {
      local_34 = 0;
    }
switchD_000bb3e8_caseD_3:
    iVar4 = QCameraParametersIntf::getRecordingHintValue(this_00);
    if (iVar4 == 0) {
switchD_000bb3e8_caseD_2:
      uVar8 = 1;
    }
    else {
switchD_000bb3e8_caseD_4:
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0;
    local_34 = 0;
    switch(param_2) {
    case 1:
      uVar8 = *(uint *)(this + 0x4a8);
      if (uVar8 != 0) {
        uVar8 = 1;
      }
      break;
    case 2:
    case 7:
      goto switchD_000bb3e8_caseD_2;
    case 3:
      goto switchD_000bb3e8_caseD_3;
    default:
      goto switchD_000bb3e8_caseD_4;
    case 8:
      uVar8 = QCameraParametersIntf::getofflineRAW(this_00);
      uVar8 = uVar8 ^ 1;
      break;
    case 0xb:
      break;
    }
  }
switchD_000bb3e8_caseD_b:
  uVar5 = count_leading_zeroes(param_2 - 3);
  uVar3 = uVar5 >> 5 & uVar3;
  iVar7 = *(int *)(DAT_000bb510 + 0xbb45c);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000bb518 + 0xbb480,0x21ba,DAT_000bb514 + 0xbb472,uVar8,uVar3,param_2
                       );
  }
  iVar4 = (**(code **)(*(int *)param_1 + 0xc))
                    (param_1,this,iVar1,0,uVar2,&local_48,param_3,param_4,uVar3,uVar8,1);
  if ((iVar4 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
    mm_camera_debug_log(1,1,DAT_000bb520 + 0xbb4c8,0x21c6,DAT_000bb51c + 0xbb4be,param_2,iVar4);
  }
LAB_000bb4ce:
  if (*piVar6 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

