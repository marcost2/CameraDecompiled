
/* qcamera::QCamera2HardwareInterface::getPPConfig(cam_pp_feature_config_t&, signed char, bool) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::getPPConfig
          (QCamera2HardwareInterface *this,cam_pp_feature_config_t *param_1,signed param_2,
          bool param_3)

{
  cam_pp_feature_config_t cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  QCameraParametersIntf *this_00;
  uint uVar12;
  bool bVar13;
  int local_98;
  int iStack148;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack128;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined4 uStack64;
  undefined4 local_3c;
  undefined4 uStack56;
  undefined8 uStack52;
  int local_28;
  
  piVar10 = *(int **)(DAT_000bc548 + 0xbc238);
  local_28 = *piVar10;
  iVar11 = *(int *)(DAT_000bc54c + 0xbc242);
  if (*(int *)(iVar11 + 0x24) != 0 && param_3 != false) {
    uVar2 = QCameraParametersIntf::getReprocCount((QCameraParametersIntf *)(this + 0x4ac));
    mm_camera_debug_log(1,2,DAT_000bc554 + 0xbc26e,0x24ba,DAT_000bc550 + 0xbc25e,uVar2,param_2);
  }
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bc560 + 0xbc2ac,0x24be,DAT_000bc55c + 0xbc2a4);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  uVar12 = *(uint *)(*(int *)(*(int *)(DAT_000bc564 + 0xbc2bc) + *(int *)(this + 0x5c) * 4) + 0x3000
                    );
  iVar3 = QCameraParametersIntf::getParmZoomLevel(this_00);
  iVar4 = QCameraParametersIntf::getJpegRotation(this_00);
  iVar5 = QCameraParametersIntf::getEffectValue(this_00);
  param_1[0x70] = (cam_pp_feature_config_t)((char)param_2 + '\x01');
  cVar1 = (cam_pp_feature_config_t)QCameraParametersIntf::getReprocCount(this_00);
  param_1[0x71] = cVar1;
  if (param_2 == 1) {
    iVar6 = QCameraParametersIntf::getQuadraCfa(this_00);
    if (iVar6 == 0) {
      uVar8 = *(uint *)param_1;
      uVar9 = *(uint *)(param_1 + 4);
      uVar7 = uVar8 | 0x404;
      *(uint *)param_1 = uVar7;
      if (((int)(uVar12 << 0x1c) < 0) && (iVar4 != 0)) {
        uVar7 = uVar8 | 0x40c;
        *(uint *)param_1 = uVar7;
        *(uint *)(param_1 + 4) = uVar9;
        if (iVar4 == 0x10e) {
          uVar2 = 8;
        }
        else if (iVar4 == 0xb4) {
          uVar2 = 4;
        }
        else {
          if (iVar4 != 0x5a) goto LAB_000bc62c;
          uVar2 = 2;
        }
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
LAB_000bc62c:
      *(uint *)param_1 = uVar7 & 0x7ffbffff;
      *(uint *)(param_1 + 4) = uVar9 & 0xfffffff7;
      goto LAB_000bc63e;
    }
  }
  else if ((param_2 == 0) && (iVar6 = QCameraParametersIntf::getQuadraCfa(this_00), iVar6 != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
    goto LAB_000bc63e;
  }
  if (((int)(uVar12 << 0x14) < 0) && (iVar5 != 0)) {
    *(int *)(param_1 + 0x44) = iVar5;
    *(uint *)param_1 = *(uint *)param_1 | 0x800;
  }
  if (((int)(uVar12 << 0x18) < 0) &&
     (iVar5 = QCameraParametersIntf::isOptiZoomEnabled(this_00), iVar5 == 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 0x80;
    uVar2 = QCameraParametersIntf::getSharpness(this_00);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  if ((0 < iVar3) && ((uVar12 & 4) != 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 4;
  }
  iVar5 = QCameraParametersIntf::isWNREnabled(this_00);
  if (((int)(uVar12 << 0x1e) < 0) && (iVar5 != 0)) {
    param_1[8] = (cam_pp_feature_config_t)0x1;
    *(uint *)param_1 = *(uint *)param_1 | 2;
    uVar2 = QCameraParametersIntf::getDenoiseProcessPlate(this_00,0x27);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  local_88 = 0;
  uStack128 = 0;
  uStack56 = 0;
  uStack52 = 0;
  local_48 = 0;
  uStack64 = 0;
  local_3c = 0;
  local_58 = 0;
  uStack80 = 0;
  local_68 = 0;
  uStack96 = 0;
  local_78 = 0;
  uStack112 = 0;
  property_get(DAT_000bc678 + 0xbc3c2,&local_88,DAT_000bc67c + 0xbc3c4);
  iVar5 = atoi((char *)&local_88);
  if (iVar5 == 1) {
    *(uint *)param_1 = *(uint *)param_1 | 0x200;
  }
  if (((int)(uVar12 << 0x1c) < 0) && (iVar4 != 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 8;
    if (iVar4 == 0x10e) {
      uVar2 = 8;
    }
    else if (iVar4 == 0xb4) {
      uVar2 = 4;
    }
    else {
      if (iVar4 != 0x5a) goto LAB_000bc440;
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
LAB_000bc440:
  iVar4 = QCameraParametersIntf::isHDREnabled(this_00);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)param_1 = *(uint *)param_1 & 0xffffffdf;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(uint *)param_1 = *(uint *)param_1 | 0x20;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    uVar2 = QCameraParametersIntf::isHDR1xFrameEnabled(this_00);
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x1e90);
  }
  if ((((int)(uVar12 << 0x15) < 0) &&
      (iVar4 = QCameraParametersIntf::isReprocScaleEnabled(this_00), iVar4 != 0)) &&
     (iVar4 = QCameraParametersIntf::isUnderReprocScaling(this_00), iVar4 != 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 0x400;
    QCameraParametersIntf::getPicSizeFromAPK
              (this_00,(int *)(param_1 + 0x58),(int *)(param_1 + 0x5c));
  }
  iVar4 = QCameraParametersIntf::isUbiFocusEnabled(this_00);
  uVar9 = *(uint *)param_1 & 0xffffefff;
  if (iVar4 != 0) {
    uVar9 = *(uint *)param_1 | 0x1000;
  }
  *(uint *)param_1 = uVar9;
  iVar4 = QCameraParametersIntf::isUbiRefocus(this_00);
  if (iVar4 == 0) {
    uVar9 = *(uint *)param_1 & 0xfffeffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar9 = *(uint *)param_1 | 0x10000;
  }
  *(uint *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  iVar4 = QCameraParametersIntf::isChromaFlashEnabled(this_00);
  if (iVar4 == 0) {
    uVar9 = *(uint *)param_1 & 0xffffdfff;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 1;
    uVar9 = *(uint *)param_1 | 0x2000;
  }
  *(uint *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  iVar4 = QCameraParametersIntf::isOptiZoomEnabled(this_00);
  if ((iVar3 < 0) || (iVar4 == 0)) {
    uVar9 = *(uint *)param_1 & 0xffffbfff;
  }
  else {
    param_1[0x60] = SUB41(iVar3,0);
    uVar9 = *(uint *)param_1 | 0x4000;
  }
  *(uint *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  iVar3 = QCameraParametersIntf::getofflineRAW(this_00);
  if (iVar3 != 0) {
    *(uint *)param_1 = *(uint *)param_1 | 0x40000;
  }
  iVar3 = QCameraParametersIntf::isTruePortraitEnabled(this_00);
  if (iVar3 == 0) {
    uVar9 = *(uint *)param_1 & 0xfff7ffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar9 = *(uint *)param_1 | 0x80000;
  }
  *(uint *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  iVar3 = QCameraParametersIntf::isStillMoreEnabled(this_00);
  uVar9 = *(uint *)param_1 & 0xffbfffff;
  if (iVar3 != 0) {
    uVar9 = *(uint *)param_1 | 0x400000;
  }
  *(uint *)param_1 = uVar9;
  iVar3 = QCameraParametersIntf::isOEMFeatEnabled(this_00);
  if (iVar3 != 0) {
    *(uint *)param_1 = *(uint *)param_1 | 0x10000000;
  }
  iVar3 = QCameraParametersIntf::getCDSMode(this_00);
  if (iVar3 != 0) {
    uVar9 = 0x4000000;
    if (-1 < (int)(uVar12 << 5)) {
      uVar9 = 0x1000000;
    }
    *(uint *)param_1 = uVar9 | *(uint *)param_1;
  }
  if (((param_3 == false) || ((char)this[0x690] < '\x02')) ||
     (iVar3 = QCameraParametersIntf::getQuadraCfa(this_00), iVar3 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar12 = *(uint *)param_1 | 0x400;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar12 = (*(uint *)param_1 & 0xfafffbf3) + 4;
  }
  *(uint *)param_1 = uVar12;
  *(undefined4 *)(param_1 + 4) = uVar2;
  QCameraParametersIntf::getThumbnailSize(this_00,&local_98,&iStack148);
  QCameraParametersIntf::getStreamDimension(this_00,2,(cam_dimension_t *)&local_90);
  bVar13 = local_98 == local_90;
  if (bVar13) {
    local_90 = local_8c;
  }
  if ((!bVar13 || iStack148 != local_90) && (local_98 != 0 && iStack148 != 0)) {
    *(uint *)param_1 = *(uint *)param_1 | 4;
  }
LAB_000bc63e:
  if (*(int *)(iVar11 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000bc684 + 0xbc660,0x25d9,DAT_000bc680 + 0xbc658);
  }
  if (*piVar10 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

