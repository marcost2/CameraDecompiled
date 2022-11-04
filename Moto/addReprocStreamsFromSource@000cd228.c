
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCameraReprocessChannel::addReprocStreamsFromSource(qcamera::QCameraAllocator&,
   cam_pp_feature_config_t&, qcamera::QCameraChannel*, unsigned char, unsigned char,
   cam_padding_info_t*, qcamera::QCameraParametersIntf&, bool, bool) */

int __thiscall
qcamera::QCameraReprocessChannel::addReprocStreamsFromSource
          (QCameraReprocessChannel *this,QCameraAllocator *param_1,cam_pp_feature_config_t *param_2,
          QCameraChannel *param_3,uchar param_4,uchar param_5,cam_padding_info_t *param_6,
          QCameraParametersIntf *param_7,bool param_8,bool param_9)

{
  undefined auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  int *piVar12;
  QCameraStream *this_00;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined3 in_stack_00000001;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  undefined auStack1160 [136];
  undefined8 local_400;
  undefined8 uStack1016;
  undefined4 local_3f0;
  undefined4 uStack1004;
  undefined4 local_3e8;
  cam_frame_len_offset_t acStack992 [392];
  undefined8 local_258;
  undefined4 local_250 [2];
  undefined auStack584 [392];
  undefined local_c0;
  undefined4 local_bc;
  int local_28;
  
  piVar12 = *(int **)(DAT_000cd574 + 0xcd23e);
  local_28 = *piVar12;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  if (param_6 == (cam_padding_info_t *)0x0) {
    iVar13 = -0x16;
  }
  else {
    auVar1 = *(undefined (*) [16])param_6;
    uStack1016 = SUB168(auVar1 >> 0x40,0);
    local_3f0 = *(undefined4 *)(param_6 + 0x10);
    local_3e8 = 0;
    uStack1004 = 0;
    local_400._0_4_ = SUB164(auVar1,0);
    local_400._4_4_ = SUB164(auVar1 >> 0x20,0);
    if (local_400._4_4_ < (uint)local_400) {
      local_400._4_4_ = (uint)local_400;
    }
    local_400 = CONCAT44(local_400._4_4_,local_400._4_4_);
    iVar2 = *(int *)(DAT_000cd578 + 0xcd28e);
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000cd580 + 0xcd2ac,0x3e0,DAT_000cd57c + 0xcd2a0,
                          *(undefined4 *)(param_3 + 0x1c));
    }
    if (*(int *)(param_3 + 0x1c) != 0) {
      if (_param_8 != 0) {
        param_5 = '\0';
      }
      iVar9 = 0x250;
      if (_param_9 != 0) {
        iVar9 = 0x3e4;
      }
      uVar11 = 0;
      do {
        iVar14 = *(int *)param_2;
        iVar13 = *(int *)(param_2 + 4);
        __aeabi_memcpy8(auStack1160,param_2 + 8,0x88);
        if ((((uVar11 < 8) &&
             (this_00 = *(QCameraStream **)(*(int *)(param_3 + 0x18) + uVar11 * 4),
             this_00 != (QCameraStream *)0x0)) &&
            (((iVar3 = QCameraParametersIntf::getofflineRAW(param_7), iVar3 == 0 ||
              (((iVar3 = QCameraStream::isTypeOf(this_00,8), iVar3 != 0 ||
                (iVar3 = QCameraStream::isTypeOf(this_00,2), iVar3 != 0)) ||
               (iVar3 = QCameraStream::isTypeOf(this_00,7), iVar3 != 0)))) ||
             ((iVar3 = QCameraStream::isOrignalTypeOf(this_00,8), iVar3 != 0 ||
              (iVar3 = QCameraStream::isOrignalTypeOf(this_00,7), iVar3 != 0)))))) &&
           (((iVar3 = QCameraStream::isTypeOf(this_00,8), iVar3 == 0 ||
             (iVar3 = QCameraParametersIntf::getofflineRAW(param_7), iVar3 != 0)) &&
            ((((iVar3 = QCameraStream::isTypeOf(this_00,7), iVar3 == 0 ||
               (iVar3 = QCameraParametersIntf::getManualCaptureMode(param_7), 2 < iVar3)) ||
              (iVar3 = QCameraParametersIntf::getQuadraCfa(param_7), iVar3 != 0)) &&
             (iVar3 = QCameraStream::isTypeOf(this_00,0xb), iVar3 == 0)))))) {
          iVar3 = QCameraStream::isTypeOf(this_00,1);
          if ((((iVar3 != 0) || (iVar3 = QCameraStream::isTypeOf(this_00,2), iVar3 != 0)) ||
              (iVar3 = QCameraStream::isOrignalTypeOf(this_00,1), iVar3 != 0)) ||
             (iVar3 = QCameraStream::isOrignalTypeOf(this_00,2), iVar3 != 0)) {
            local_258._0_4_ = *(uint *)param_2;
            local_258._4_4_ = *(uint *)(param_2 + 4);
            iVar3 = QCameraParametersIntf::needThumbnailReprocess(param_7,&local_258);
            if ((iVar3 == 0) ||
               (local_258._0_4_ = (uint)local_258 & 0xfffbfd6d,
               ((uint)local_258 | local_258._4_4_) == 0)) goto LAB_000cd7cc;
          }
          iVar3 = QCameraParametersIntf::getQuadraCfa(param_7);
          iVar4 = QCameraStream::isTypeOf(this_00,7);
          if (iVar3 == 0) {
            if (iVar4 != 0) {
              iVar14 = -0x80000000;
              iVar13 = 0;
            }
          }
          else if (iVar4 == 0) {
            iVar3 = QCameraStream::isOrignalTypeOf(this_00,7);
            if (iVar3 != 0) {
              iVar13 = 0;
              iVar14 = -0x80000000;
            }
          }
          else {
            iVar13 = 8;
            iVar14 = 0;
          }
          piVar5 = (int *)(**(code **)(*(int *)param_1 + 8))(param_1,9);
          if (piVar5 == (int *)0x0) {
            if (*(int *)(iVar2 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000cd844 + 0xcd80e,0x43c,DAT_000cd840 + 0xcd806);
            }
            iVar13 = -0xc;
            goto LAB_000cd7dc;
          }
          pvVar6 = (void *)(**(code **)(*piVar5 + 0x24))(piVar5,0);
          __aeabi_memclr8(pvVar6,0x8350);
          *(undefined4 *)((int)pvVar6 + 0x8338) = 2;
          *(undefined4 *)((int)pvVar6 + 4) = 9;
          iVar3 = QCameraParametersIntf::getofflineRAW(param_7);
          if ((iVar3 == 0) ||
             ((iVar3 = QCameraStream::isTypeOf(this_00,8), iVar3 == 0 &&
              (iVar3 = QCameraStream::isOrignalTypeOf(this_00,8), iVar3 == 0)))) {
            QCameraStream::getFormat(this_00,(cam_format_t *)((int)pvVar6 + 8));
          }
          else if (iVar13 << 0x1e < 0) {
            QCameraParametersIntf::getStreamFormat(param_7,9,(cam_format_t *)((int)pvVar6 + 8));
          }
          else {
            *(cam_format_t *)((int)pvVar6 + 8) = 2;
          }
          iVar3 = QCameraStream::isTypeOf(this_00,1);
          if ((((iVar3 == 0) && (iVar3 = QCameraStream::isTypeOf(this_00,2), iVar3 == 0)) &&
              (iVar3 = QCameraStream::isOrignalTypeOf(this_00,1), iVar3 == 0)) &&
             (iVar3 = QCameraStream::isOrignalTypeOf(this_00,2), iVar3 == 0)) {
            iVar3 = QCameraParametersIntf::isPostProcScaling(param_7);
            if ((iVar14 << 0x15 < 0) && (iVar3 != 0)) {
              QCameraParametersIntf::getStreamDimension
                        (param_7,9,(cam_dimension_t *)((int)pvVar6 + 0xc));
            }
            else {
              iVar3 = QCameraParametersIntf::getofflineRAW(param_7);
              if ((iVar3 != 0) &&
                 ((iVar3 = QCameraStream::isTypeOf(this_00,8), iVar3 != 0 ||
                  (iVar3 = QCameraStream::isOrignalTypeOf(this_00,8), iVar3 != 0)))) {
                iVar3 = QCameraParametersIntf::getQuadraCfa(param_7);
                if ((-1 < iVar13 << 0x1e) || (iVar3 == 0)) {
                  QCameraParametersIntf::getStreamDimension
                            (param_7,3,(cam_dimension_t *)((int)pvVar6 + 0xc));
                  goto LAB_000cd590;
                }
              }
LAB_000cd56e:
              QCameraStream::getFrameDimension(this_00,(cam_dimension_t *)((int)pvVar6 + 0xc));
            }
          }
          else {
            if (-1 < iVar14 << 0x15) goto LAB_000cd56e;
            QCameraParametersIntf::getThumbnailSize
                      (param_7,(int *)((int)pvVar6 + 0xc),(int *)((int)pvVar6 + 0x10));
          }
LAB_000cd590:
          *(uchar *)((int)pvVar6 + 0x1a4) = param_5;
          *(undefined4 *)((int)pvVar6 + 0x19c) = _param_4;
          *(uint *)((int)pvVar6 + 0x1a0) = _param_8 ^ 1;
          __aeabi_memclr8(&local_258,0x230);
          if (_param_9 == 0) {
            local_258._0_4_ = 0;
            local_258._4_4_ = QCameraStream::getMyServerID(this_00);
            local_250[0] = QCameraStream::getMyOriginalType(this_00);
          }
          else {
            __aeabi_memclr8(acStack992,0x188);
            local_258._0_4_ = 1;
            QCameraStream::getFormat(this_00,(cam_format_t *)((int)&local_258 + 4));
            QCameraStream::getFrameDimension(this_00,(cam_dimension_t *)local_250);
            QCameraStream::getFrameOffset(this_00,acStack992);
            __aeabi_memcpy8(auStack584,acStack992,0x188);
            local_bc = QCameraStream::getMyOriginalType(this_00);
            local_c0 = 2;
          }
          QCameraParametersIntf::getStreamRotation
                    (param_7,*(cam_stream_type_t *)((int)pvVar6 + 4),
                     (cam_pp_feature_config_t *)((int)pvVar6 + 0x1b8),
                     (cam_dimension_t *)((int)pvVar6 + 0xc));
          __aeabi_memcpy8((void *)((int)pvVar6 + 0x248),&local_258,0x1a0);
          *(int *)((int)pvVar6 + 1000) = iVar14;
          *(int *)((int)pvVar6 + 0x3ec) = iVar13;
          __aeabi_memcpy8((void *)((int)pvVar6 + 0x3f0),auStack1160,0x88);
          iVar13 = QCameraStream::isTypeOf(this_00,3);
          puVar15 = (uint *)((int)pvVar6 + 1000);
          if ((((iVar13 == 0) && (iVar13 = QCameraStream::isOrignalTypeOf(this_00,3), iVar13 == 0))
              && (iVar13 = QCameraStream::isTypeOf(this_00,8), iVar13 == 0)) &&
             (iVar13 = QCameraStream::isOrignalTypeOf(this_00,8), iVar13 == 0)) {
            *puVar15 = *puVar15 & 0xfafbfd6d;
            *(undefined4 *)((int)pvVar6 + 0x3ec) = *(undefined4 *)((int)pvVar6 + 0x3ec);
            iVar13 = QCameraParametersIntf::isHDREnabled(param_7);
            if ((iVar13 != 0) &&
               (iVar13 = QCameraParametersIntf::isHDRThumbnailProcessNeeded(param_7), iVar13 == 0))
            {
              *puVar15 = *puVar15 & 0xffffffdf;
            }
          }
          iVar13 = *(int *)((int)pvVar6 + iVar9);
          if ((iVar13 == 3) && (iVar14 = QCameraParametersIntf::getFlipMode(param_7,3), 0 < iVar14))
          {
            *puVar15 = *puVar15 | 0x10;
            *(int *)((int)pvVar6 + 0x424) = iVar14;
          }
          if ((((int)((uint)*(byte *)((int)pvVar6 + 0x3e9) << 0x1d) < 0) &&
              (iVar14 = QCameraParametersIntf::isReprocScaleEnabled(param_7), iVar14 != 0)) &&
             (iVar14 = QCameraParametersIntf::isUnderReprocScaling(param_7), iVar14 != 0)) {
            iVar14 = QCameraStream::isTypeOf(this_00,3);
            if (iVar14 != 0) {
              *(undefined4 *)((int)pvVar6 + 0xc) = *(undefined4 *)((int)pvVar6 + 0x440);
              *(undefined4 *)((int)pvVar6 + 0x10) = *(undefined4 *)((int)pvVar6 + 0x444);
            }
            if (*(int *)(iVar2 + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000cd84c + 0xcd722,0x4d0,DAT_000cd848 + 0xcd714,
                                  *(undefined4 *)((int)pvVar6 + 0xc),
                                  *(undefined4 *)((int)pvVar6 + 0x10));
            }
          }
          *(undefined4 *)(this + *(int *)(this + 0x1c) * 4 + 0x34) = *(undefined4 *)(this_00 + 0x68)
          ;
          uVar7 = (**(code **)(*(int *)param_1 + 0xc))(param_1,pvVar6);
          if (*(int *)(iVar2 + 0x28) != 0) {
            uVar8 = QCameraStream::getMyOriginalType(this_00);
            mm_camera_debug_log(1,3,DAT_000cd854 + 0xcd770,0x4da,DAT_000cd850 + 0xcd756,uVar8,
                                *(undefined4 *)((int)pvVar6 + 0xc),
                                *(undefined4 *)((int)pvVar6 + 0x10),*(undefined4 *)((int)pvVar6 + 8)
                                ,iVar13);
          }
          if ((int)((uint)*(byte *)puVar15 << 0x1c) < 0) {
            pcVar10 = *(code **)(*(int *)this + 0xc);
            uVar8 = *(undefined4 *)((int)pvVar6 + 0x420);
          }
          else {
            pcVar10 = *(code **)(*(int *)this + 0xc);
            uVar8 = 1;
          }
          iVar13 = (*pcVar10)(this,param_1,piVar5,uVar7,_param_4,&local_400,0,0,0,0,uVar8);
          if (iVar13 != 0) {
            if (*(int *)(iVar2 + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000cd85c + 0xcd838,0x4e7,DAT_000cd858 + 0xcd82e,iVar13);
            }
            goto LAB_000cd7dc;
          }
        }
LAB_000cd7cc:
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_3 + 0x1c));
    }
    iVar13 = 0;
    *(QCameraChannel **)(this + 0x54) = param_3;
  }
LAB_000cd7dc:
  if (*piVar12 == local_28) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

