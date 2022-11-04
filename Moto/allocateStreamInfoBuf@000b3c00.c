
/* qcamera::QCamera2HardwareInterface::allocateStreamInfoBuf(cam_stream_type_t) */

void __thiscall
qcamera::QCamera2HardwareInterface::allocateStreamInfoBuf
          (QCamera2HardwareInterface *this,cam_stream_type_t param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined uVar5;
  int *this_00;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  ulonglong *puVar12;
  QCameraParametersIntf *this_01;
  float fVar13;
  int local_8c;
  int local_88;
  cam_fps_range_t acStack132 [12];
  float local_78;
  int local_28;
  
  piVar11 = *(int **)(DAT_000b3e94 + 0xb3c14);
  local_28 = *piVar11;
  local_8c = 0;
  local_88 = 0;
  this_00 = (int *)operator_new(0x718);
  piVar6 = (int *)QCameraHeapMemory::QCameraHeapMemory((QCameraHeapMemory *)this_00,true);
  iVar7 = (**(code **)(*piVar6 + 8))(this_00,1,0x8350,0);
  if (iVar7 < 0) {
    if (*(int *)(*(int *)(DAT_000b3ffc + 0xb3cf2) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000b4004 + 0xb3d0a,0xe9f,DAT_000b4000 + 0xb3d02);
    }
    (**(code **)(*this_00 + 0x2c))(this_00);
    this_00 = (int *)0x0;
    goto LAB_000b3fbe;
  }
  pvVar8 = (void *)(**(code **)(*this_00 + 0x24))(this_00,0);
  __aeabi_memclr8(pvVar8,0x8350);
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  *(cam_stream_type_t *)((int)pvVar8 + 4) = param_1;
  QCameraParametersIntf::getStreamFormat(this_01,param_1,(cam_format_t *)((int)pvVar8 + 8));
  QCameraParametersIntf::getStreamDimension(this_01,param_1,(cam_dimension_t *)((int)pvVar8 + 0xc));
  puVar12 = (ulonglong *)((int)pvVar8 + 0x1b8);
  QCameraParametersIntf::getStreamRotation
            (this_01,param_1,(cam_pp_feature_config_t *)puVar12,
             (cam_dimension_t *)((int)pvVar8 + 0xc));
  uVar9 = getBufNumRequired(this,param_1);
  *(undefined4 *)((int)pvVar8 + 0x8334) = 0;
  *(undefined4 *)((int)pvVar8 + 0x19c) = uVar9;
  *(undefined4 *)((int)pvVar8 + 0x1a0) = 0;
  switch(param_1) {
  case 1:
    iVar7 = QCameraParametersIntf::getRecordingHintValue(this_01);
    if (iVar7 != 0) {
      iVar7 = QCameraParametersIntf::isDISEnabled(this_01);
      if (iVar7 == 0) {
LAB_000b3e98:
        uVar9 = 0;
      }
      else {
        uVar9 = QCameraParametersIntf::getPreviewISType(this_01);
      }
LAB_000b3e9a:
      *(undefined4 *)((int)pvVar8 + 0x8330) = uVar9;
    }
    goto LAB_000b3ea0;
  case 2:
switchD_000b3cb2_caseD_2:
    if (this[0xa9e] != (QCamera2HardwareInterface)0x0) goto LAB_000b3d30;
    *(undefined4 *)((int)pvVar8 + 0x1a0) = 1;
    cVar1 = QCameraParametersIntf::getNumOfSnapshots(this_01);
    cVar2 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_01);
    cVar3 = QCameraParametersIntf::getNumOfExtraHDROutBufsIfNeeded(this_01);
    cVar4 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_01);
    *(char *)((int)pvVar8 + 0x1a4) = cVar4 + ((cVar1 + cVar2) - cVar3);
    break;
  case 3:
    iVar7 = QCameraParametersIntf::isZSLMode(this_01);
    if ((iVar7 == 0) || (iVar7 = QCameraParametersIntf::getRecordingHintValue(this_01), iVar7 != 0))
    goto switchD_000b3cb2_caseD_2;
LAB_000b3d30:
    *(undefined4 *)((int)pvVar8 + 0x1a0) = 0;
    break;
  case 4:
    uVar5 = QCameraParametersIntf::isDISEnabled(this_01);
    *(undefined *)((int)pvVar8 + 0x832c) = uVar5;
    iVar7 = QCameraParametersIntf::getBufBatchCount(this_01);
    if (iVar7 != 0) {
      *(undefined4 *)((int)pvVar8 + 0x1a0) = 2;
      uVar5 = QCameraParametersIntf::getBufBatchCount(this_01);
      *(undefined4 *)((int)pvVar8 + 0x1ac) = 0x44;
      *(undefined *)((int)pvVar8 + 0x1a8) = uVar5;
      QCameraParametersIntf::getHfrFps(this_01,acStack132);
      fVar13 = (DAT_000b3ff8 / local_78) * DAT_000b3ff8;
      *(float *)((int)pvVar8 + 0x1b0) = ROUND(fVar13);
      if (*(int *)(*(int *)(DAT_000b4010 + 0xb3d8c) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000b4018 + 0xb3db0,0xef3,DAT_000b4014 + 0xb3da2,
                            *(undefined *)((int)pvVar8 + 0x1a8),ROUND(fVar13));
      }
    }
    iVar7 = QCameraParametersIntf::getRecordingHintValue(this_01);
    if (iVar7 != 0) {
      iVar7 = QCameraParametersIntf::isDISEnabled(this_01);
      if (iVar7 == 0) goto LAB_000b3e98;
      uVar9 = QCameraParametersIntf::getVideoISType(this_01);
      goto LAB_000b3e9a;
    }
LAB_000b3ea0:
    iVar7 = QCameraParametersIntf::isSecureMode(this_01);
    if (iVar7 != 0) {
      *(undefined4 *)((int)pvVar8 + 0x8334) = 1;
    }
    break;
  case 8:
    property_get(DAT_000b4008 + 0xb3ddc,acStack132,DAT_000b400c + 0xb3dde);
    iVar7 = atoi((char *)acStack132);
    iVar10 = QCameraParametersIntf::isZSLMode(this_01);
    if (((iVar10 == 0) && (iVar10 = QCameraParametersIntf::isRdiMode(this_01), iVar7 < 1)) &&
       (iVar10 == 0)) {
      *(undefined4 *)((int)pvVar8 + 0x1a0) = 1;
      uVar5 = QCameraParametersIntf::getNumOfSnapshots(this_01);
      *(undefined *)((int)pvVar8 + 0x1a4) = uVar5;
    }
    else {
      *(undefined4 *)((int)pvVar8 + 0x1a0) = 0;
    }
    iVar7 = QCameraParametersIntf::isSecureMode(this_01);
    if ((iVar7 == 0) || (iVar7 = QCameraParametersIntf::isRdiMode(this_01), iVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    *(undefined4 *)((int)pvVar8 + 0x8334) = uVar9;
    if (*(cam_format_t *)((int)pvVar8 + 8) == 0x4e) {
      QCameraParametersIntf::updateDtVc(this_01,&local_88,&local_8c);
      if (local_88 != 0) {
        *(int *)((int)pvVar8 + 0x8340) = local_88;
      }
      *(int *)((int)pvVar8 + 0x8344) = local_8c;
    }
    break;
  case 0xb:
    *(undefined *)((int)pvVar8 + 0x833c) = 1;
  }
  QCameraParametersIntf::updatePpFeatureMask(this_01,param_1);
  QCameraParametersIntf::getStreamPpMask(this_01,param_1,puVar12);
  if (((int)((uint)*(byte *)puVar12 << 0x1b) < 0) &&
     (iVar7 = QCameraParametersIntf::getFlipMode(this_01,param_1), 0 < iVar7)) {
    *(int *)((int)pvVar8 + 500) = iVar7;
  }
  iVar7 = *(int *)puVar12;
  if (iVar7 << 0x18 < 0) {
    uVar9 = QCameraParametersIntf::getSharpness(this_01);
    *(undefined4 *)((int)pvVar8 + 0x1f8) = uVar9;
    iVar7 = *(int *)puVar12;
  }
  if (iVar7 << 0x14 < 0) {
    uVar9 = QCameraParametersIntf::getEffectValue(this_01);
    *(undefined4 *)((int)pvVar8 + 0x1fc) = uVar9;
    iVar7 = *(int *)puVar12;
  }
  if (iVar7 << 0x1e < 0) {
    *(undefined *)((int)pvVar8 + 0x1c0) = 1;
    uVar9 = QCameraParametersIntf::getDenoiseProcessPlate(this_01,0x27);
    *(undefined4 *)((int)pvVar8 + 0x1c4) = uVar9;
  }
  iVar7 = needReprocess(this);
  if ((iVar7 == 0) || ((param_1 != 3 && (param_1 != 8)))) {
    iVar7 = *(int *)(DAT_000b401c + 0xb3f12);
    iVar10 = *(int *)(*(int *)(iVar7 + *(int *)(this + 0x5c) * 4) + 0x3000);
    if (iVar10 << 0x1d < 0) {
      *(uint *)puVar12 = *(uint *)puVar12 | 4;
      iVar10 = *(int *)(*(int *)(iVar7 + *(int *)(this + 0x5c) * 4) + 0x3000);
    }
    if (iVar10 << 0x15 < 0) {
      *(uint *)puVar12 = *(uint *)puVar12 | 0x400;
    }
  }
  iVar7 = *(int *)(DAT_000b4020 + 0xb3f42);
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b4028 + 0xb3f78,0xf3b,DAT_000b4024 + 0xb3f62,param_1,
                        *(undefined4 *)((int)pvVar8 + 8),*(undefined4 *)((int)pvVar8 + 0xc),
                        *(undefined4 *)((int)pvVar8 + 0x10),*(undefined4 *)((int)pvVar8 + 0x19c),
                        *(undefined4 *)puVar12,*(undefined4 *)((int)pvVar8 + 0x1bc),
                        *(undefined4 *)((int)pvVar8 + 0x8330));
  }
  iVar10 = QCameraParametersIntf::isVideoStabilizationSupported(this_01);
  if ((iVar10 != 0) && ((param_1 == 4 || (param_1 == 1)))) {
    *(uint *)((int)pvVar8 + 0x1bc) = *(uint *)((int)pvVar8 + 0x1bc) | 0x10;
  }
  if (*(int *)(iVar7 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b4030 + 0xb3fb8,0xf5c,DAT_000b402c + 0xb3fa8,param_1,
                        *(undefined4 *)puVar12,*(undefined4 *)((int)pvVar8 + 0x1bc));
  }
LAB_000b3fbe:
  if (*piVar11 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}

