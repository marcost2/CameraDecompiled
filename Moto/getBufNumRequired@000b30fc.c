
/* qcamera::QCamera2HardwareInterface::getBufNumRequired(cam_stream_type_t) */

uint __thiscall
qcamera::QCamera2HardwareInterface::getBufNumRequired
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  cam_stream_type_t cVar10;
  uint uVar11;
  QCameraParametersIntf *this_00;
  uint uVar12;
  uint uVar13;
  int local_90;
  int local_8c;
  int local_88;
  char acStack132 [92];
  int local_28;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar1 = *(int **)(DAT_000b3438 + 0xb3110);
  local_28 = *piVar1;
  iVar2 = QCameraParametersIntf::getNumOfSnapshots(this_00);
  iVar3 = QCameraParametersIntf::getZSLQueueDepth(this_00);
  iVar4 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_00);
  iVar5 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_00);
  iVar6 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
  iVar7 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
  iVar8 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
  local_88 = 0;
  iVar9 = QCameraParametersIntf::isNoDisplayMode(this_00);
  if (iVar9 == 0) {
    iVar9 = *(int *)(this + 0x4a8);
    if (iVar9 != 0) {
      iVar9 = (**(code **)(iVar9 + 0x20))(iVar9,&local_88);
      if (iVar9 == 0) {
        if ((local_88 != 1) && (*(int *)(*(int *)(DAT_000b3570 + 0xb3226) + 0x24) != 0)) {
          mm_camera_debug_log(1,2,DAT_000b3578 + 0xb3246,0xc28,DAT_000b3574 + 0xb3238,local_88,1);
        }
        goto LAB_000b3198;
      }
      if (*(int *)(*(int *)(DAT_000b343c + 0xb317a) + 0x24) != 0) {
        mm_camera_debug_log(1,2,DAT_000b3444 + 0xb3192,0xc18,DAT_000b3440 + 0xb318a);
      }
    }
    local_88 = 1;
  }
LAB_000b3198:
  uVar13 = ((iVar2 + iVar5 + iVar6 + 2) - iVar7) + iVar8;
  iVar5 = iVar4 + 2;
  iVar6 = *(int *)(DAT_000b3448 + 0xb31a6);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000b3450 + 0xb31d0,0xc2f,DAT_000b344c + 0xb31ba,iVar2,iVar3,iVar5,
                        uVar13,local_88);
  }
  cVar10 = param_1;
  switch(param_1) {
  case 1:
    iVar2 = QCameraParametersIntf::isZSLMode(this_00);
    if (iVar2 == 0) {
      iVar2 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_00);
      iVar2 = iVar2 + 3;
      iVar3 = QCameraParametersIntf::getNumOfExtraBuffersForPreview(this_00);
    }
    else {
      iVar4 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
      iVar2 = QCameraParametersIntf::getNumOfExtraBuffersForPreview(this_00);
      iVar2 = iVar5 + iVar3 + iVar4 + iVar2;
      iVar3 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
    }
    iVar3 = iVar3 + iVar2;
    iVar2 = iVar3 + -2;
    if (iVar3 + -2 == 0 || iVar3 < 2) {
      iVar2 = iVar3;
    }
    iVar3 = QCameraParametersIntf::getRecordingHintValue(this_00);
    if ((iVar3 != 0) && (iVar3 = QCameraParametersIntf::isHfrMode(this_00), iVar3 == 0)) {
      iVar2 = iVar2 + 2;
    }
    iVar3 = local_88;
    property_get(DAT_000b357c + 0xb338e,acStack132,DAT_000b3580 + 0xb3390);
    uVar13 = iVar3 + iVar2;
    goto LAB_000b34a6;
  case 2:
    iVar3 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_00);
    iVar4 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
    iVar5 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
    iVar7 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
    uVar12 = iVar7 + ((iVar2 + iVar3 + iVar4) - iVar5);
    if ((int)uVar13 < (int)uVar12) {
      uVar12 = uVar13;
    }
    cVar10 = uVar12 + local_88;
    break;
  case 3:
    iVar4 = QCameraParametersIntf::isZSLMode(this_00);
    if ((iVar4 == 0) && (this[0xa9e] == (QCamera2HardwareInterface)0x0)) {
      iVar3 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
      iVar4 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
      iVar5 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
      cVar10 = ((iVar2 + iVar3) - iVar4) + iVar5;
      if ((int)uVar13 < (int)cVar10) {
        cVar10 = uVar13;
      }
    }
    else {
      if (((iVar2 == 1) || (iVar2 = QCameraParametersIntf::isUbiRefocus(this_00), iVar2 != 0)) &&
         (this[0xa9e] == (QCamera2HardwareInterface)0x0)) {
        iVar5 = iVar3 + 3;
      }
      else {
        iVar5 = iVar5 + iVar3;
      }
      iVar2 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
      uVar13 = iVar2 + iVar5;
      cVar10 = uVar13;
      if (*(int *)(*(int *)(*(int *)(DAT_000b3584 + 0xb34d4) + *(int *)(this + 0x5c) * 4) + 0x3e9c)
          == 1) {
        cVar10 = uVar13 - 2;
      }
      if ((int)uVar13 < 3) {
        cVar10 = uVar13;
      }
    }
    break;
  case 4:
    iVar2 = QCameraParametersIntf::getBufBatchCount(this_00);
    if (iVar2 == 0) {
      iVar3 = QCameraParametersIntf::getVideoBatchSize(this_00);
      iVar2 = 9;
      if (iVar3 != 0) {
        iVar3 = QCameraParametersIntf::getVideoBatchSize(this_00);
        if (9 < iVar3 * 3) {
          iVar2 = iVar3 * 3;
        }
      }
    }
    else {
      iVar2 = 6;
    }
    iVar3 = QCameraParametersIntf::getNumOfExtraBuffersForVideo(this_00);
    QCameraParametersIntf::getStreamDimension(this_00,4,(cam_dimension_t *)&local_90);
    cVar10 = iVar2 + iVar3;
    if (((local_90 == 0xf00) || (local_90 == 0x1000)) && (local_8c == 0x870)) {
      property_get(DAT_000b35a0 + 0xb3420,acStack132,DAT_000b35a4 + 0xb3422);
      uVar13 = atoi(acStack132);
      if (uVar13 < 0x40) {
        cVar10 = cVar10 + uVar13;
      }
    }
    break;
  case 5:
    break;
  default:
    cVar10 = 0;
    break;
  case 7:
    iVar4 = QCameraParametersIntf::isZSLMode(this_00);
    if (iVar4 == 0) {
      iVar4 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
      iVar7 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
      iVar8 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_00);
      iVar9 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
      cVar10 = ((iVar4 + iVar2 + 3) - iVar7) + iVar8 + iVar9;
      if (iVar5 + iVar3 < (int)cVar10) {
        cVar10 = iVar5 + iVar3;
      }
    }
    else {
      iVar2 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
      iVar4 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
      iVar7 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
      cVar10 = ((iVar2 + iVar5 + iVar3 + 2) - iVar4) + iVar7;
    }
    if ((int)cVar10 < 0xb) {
      cVar10 = 10;
    }
    break;
  case 8:
    property_get(DAT_000b3588 + 0xb32ee,acStack132,DAT_000b358c + 0xb32f0);
    iVar7 = atoi(acStack132);
    iVar8 = QCameraParametersIntf::isRdiMode(this_00);
    if ((iVar8 == 0) && (iVar7 < 1)) {
      iVar7 = QCameraParametersIntf::isZSLMode(this_00);
      if (iVar7 == 0) {
        iVar3 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_00);
        iVar4 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_00);
        iVar5 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_00);
        uVar12 = ((iVar2 + iVar3) - iVar4) + iVar5;
        if ((int)uVar13 < (int)uVar12) {
          uVar12 = uVar13;
        }
      }
      else {
        uVar13 = iVar5 + iVar3;
        uVar12 = uVar13;
        if (*(int *)(*(int *)(*(int *)(DAT_000b3590 + 0xb3320) + *(int *)(this + 0x5c) * 4) + 0x3e9c
                    ) == 1) {
          uVar12 = iVar4 + iVar3;
        }
        if (uVar13 < 3) {
          uVar12 = uVar13;
        }
      }
    }
    else {
      uVar12 = iVar5 + iVar3;
    }
    iVar2 = DAT_000b3598 + 0xb347e;
    property_get(DAT_000b3594 + 0xb3480,acStack132,iVar2);
    uVar11 = atoi(acStack132);
    property_get(DAT_000b359c + 0xb3496,acStack132,iVar2);
    uVar13 = uVar12;
    if ((int)uVar12 < (int)uVar11) {
      uVar13 = uVar11;
    }
    if (0x3f < (int)uVar11) {
      uVar13 = uVar12;
    }
LAB_000b34a6:
    uVar12 = atoi(acStack132);
    cVar10 = uVar13;
    if ((int)uVar13 < (int)uVar12) {
      cVar10 = uVar12;
    }
    if (0x3f < (int)uVar12) {
      cVar10 = uVar13;
    }
    break;
  case 9:
    iVar3 = QCameraParametersIntf::isUbiRefocus(this_00);
    if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
      cVar10 = iVar2 - iVar3;
    }
    else {
      cVar10 = QCameraParametersIntf::getLongshotStages(this_00);
    }
  }
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b35ac + 0xb350a,0xd45,DAT_000b35a8 + 0xb34fc,cVar10,param_1);
  }
  uVar13 = cVar10;
  if ((0x40 < cVar10) && (uVar13 = 0x40, *(int *)(iVar6 + 0x24) != 0)) {
    mm_camera_debug_log(1,2,DAT_000b35b4 + 0xb3534,0xd48,DAT_000b35b0 + 0xb3524,cVar10,param_1,0x40)
    ;
  }
  if (*piVar1 == local_28) {
    return uVar13 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

