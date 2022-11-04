
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::addReprocChannel(qcamera::QCameraChannel*, signed char) */

int * __thiscall
qcamera::QCamera2HardwareInterface::addReprocChannel
          (QCamera2HardwareInterface *this,QCameraChannel *param_1,signed param_2)

{
  undefined auVar1 [16];
  undefined uVar2;
  uchar uVar3;
  char cVar4;
  byte bVar5;
  QCameraReprocessChannel QVar6;
  int *this_00;
  int iVar7;
  int iVar8;
  uchar uVar9;
  int *piVar10;
  uint uVar11;
  QCameraParametersIntf *this_01;
  uchar uStack256;
  undefined8 uStack248;
  undefined8 uStack240;
  undefined4 uStack232;
  undefined4 uStack228;
  undefined4 uStack224;
  uint uStack216;
  uint uStack212;
  uint uStack208;
  uint uStack204;
  uint uStack100;
  undefined4 uStack60;
  ulonglong uStack56;
  undefined8 uStack48;
  int iStack40;
  
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar10 = *(int **)(DAT_000bc96c + 0xbc716);
  iStack40 = *piVar10;
  uStack256 = QCameraParametersIntf::getNumOfSnapshots(this_01);
  if (param_1 == (QCameraChannel *)0x0) {
    if (*(int *)(*(int *)(DAT_000bc970 + 0xbc79a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000bc978 + 0xbc7b6,0x25f1,DAT_000bc974 + 0xbc7ae);
    }
  }
  else {
    this_00 = (int *)operator_new(100);
    QCameraReprocessChannel::QCameraReprocessChannel
              ((QCameraReprocessChannel *)this_00,**(uint **)(this + 0x60),
               (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
    uStack56 = 0;
    uStack48 = 0;
    uStack60 = 1;
    uVar2 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_01);
    uStack56._0_4_ = CONCAT13(uVar2,(undefined3)uStack56);
    uStack56 = uStack56 & 0xffffffff00000000 | (ulonglong)(uint)uStack56;
    iVar7 = (**(code **)(*this_00 + 8))
                      (this_00,&uStack60,*(undefined4 *)(DAT_000bc97c + 0xbc766),this);
    if (iVar7 == 0) {
      __aeabi_memclr8(&uStack208,0x90);
      iVar7 = QCameraParametersIntf::getReprocCount(this_01);
      getPPConfig(this,(cam_pp_feature_config_t *)&uStack208,param_2,1 < iVar7);
      uVar3 = getBufNumRequired(this,9);
      uVar11 = uStack208 & 0xffffffdf | uStack204;
      if ((uVar11 != 0) && (iVar7 = QCameraParametersIntf::isHDREnabled(this_01), iVar7 != 0)) {
        cVar4 = QCameraParametersIntf::getNumOfExtraHDRInBufsIfNeeded(this_01);
        uVar3 = cVar4 + '\x01';
      }
      iVar7 = QCameraParametersIntf::isStillMoreEnabled(this_01);
      if (iVar7 != 0) {
        bVar5 = QCameraParametersIntf::getStillMoreSettings(this_01);
        uStack100 = (uint)bVar5;
        if (*(int *)(*(int *)(DAT_000bc98c + 0xbc828) + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000bc994 + 0xbc842,0x2627,DAT_000bc990 + 0xbc836,uStack100);
        }
        iVar7 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_01);
        if (iVar7 == 0) {
          uVar3 = uVar3 + '\x01';
        }
      }
      iVar7 = QCameraParametersIntf::getManualCaptureMode(this_01);
      if (iVar7 < 3) {
LAB_000bc874:
        QVar6 = (QCameraReprocessChannel)0x1;
      }
      else {
        cVar4 = QCameraParametersIntf::getReprocCount(this_01);
        uVar3 = cVar4 + uVar3 + 0xff;
        uStack256 = QCameraParametersIntf::getReprocCount(this_01);
        if (param_2 != 0) goto LAB_000bc874;
        QVar6 = (QCameraReprocessChannel)0x2;
      }
      *(QCameraReprocessChannel *)(this_00 + 0x18) = QVar6;
      iVar7 = QCameraParametersIntf::getNumOfExtraBuffersForImageProc(this_01);
      uStack216 = 0;
      uStack212 = 0;
      QCameraParametersIntf::getStreamPpMask(this_01,3,(ulonglong *)&uStack216);
      uStack204 = uStack204 & ~uStack212;
      uStack208 = uStack208 & ~uStack216;
      uVar9 = uVar3;
      if (iVar7 != 0) {
        uVar9 = uVar3 + (char)iVar7 + '\x01';
      }
      if (uVar11 == 0) {
        uVar9 = uVar3;
      }
      if (*(int *)(*(int *)(DAT_000bc998 + 0xbc8b8) + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000bc9a0 + 0xbc8da,0x264e,DAT_000bc99c + 0xbc8d2);
      }
      bVar5 = isRegularCapture(this);
      iVar7 = *(int *)(this + 0x554);
      iVar8 = *(int *)(*(int *)(DAT_000bc9a4 + 0xbc8f8) + *(int *)(this + 0x5c) * 4);
      uStack232 = *(undefined4 *)(iVar8 + 0x3018);
      auVar1 = *(undefined (*) [16])(iVar8 + 0x3008);
      uStack248 = SUB168(auVar1,0);
      uStack240 = SUB168(auVar1 >> 0x40,0);
      uStack224 = 0;
      uStack228 = 0;
      if (iVar7 != 0) {
        iVar7 = 1;
      }
      iVar7 = QCameraReprocessChannel::addReprocStreamsFromSource
                        ((QCameraReprocessChannel *)this_00,(QCameraAllocator *)this,
                         (cam_pp_feature_config_t *)&uStack208,param_1,uVar9,uStack256,
                         (cam_padding_info_t *)&uStack248,this_01,(bool)this[0xa9e],
                         (bool)(bVar5 | (byte)iVar7));
      if (iVar7 == 0) goto LAB_000bc952;
    }
    else if (*(int *)(*(int *)(DAT_000bc980 + 0xbc772) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000bc988 + 0xbc790,0x2605,DAT_000bc984 + 0xbc784,iVar7);
    }
    (**(code **)(*this_00 + 4))(this_00);
  }
  this_00 = (int *)0x0;
LAB_000bc952:
  if (*piVar10 == iStack40) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

