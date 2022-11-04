
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::addZSLChannel() */

int __thiscall qcamera::QCamera2HardwareInterface::addZSLChannel(QCamera2HardwareInterface *this)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  QCameraParametersIntf *this_01;
  int *piVar8;
  undefined4 local_90;
  ulonglong local_8c;
  ulonglong uStack132;
  char acStack124 [92];
  int local_20;
  
  piVar8 = *(int **)(DAT_000bbf54 + 0xbbcb2);
  local_20 = *piVar8;
  if (*(int **)(this + 0x9b4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9b4) + 4))();
    *(undefined4 *)(this + 0x9b4) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraPicChannel::QCameraPicChannel
            ((QCameraPicChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  local_8c = 0;
  uStack132 = 0;
  local_90 = QCameraParametersIntf::isSceneSelectionEnabled(this_01);
  uVar1 = QCameraParametersIntf::getZSLBackLookCount(this_01);
  local_8c._0_2_ = CONCAT11(uVar1,(undefined)local_8c);
  local_8c = local_8c & 0xffffffffffff0000 | (ulonglong)(ushort)local_8c;
  cVar2 = QCameraParametersIntf::getZSLBurstInterval(this_01);
  local_8c._0_3_ = CONCAT12(cVar2,(ushort)local_8c);
  local_8c = local_8c & 0xffffffffff000000 | (ulonglong)(uint3)local_8c;
  iVar4 = QCameraParametersIntf::isOEMFeatEnabled(this_01);
  if (iVar4 != 0) {
    local_8c._0_3_ = CONCAT12(cVar2 + '\x01',(ushort)local_8c);
    local_8c = local_8c & 0xffffffffff000000 | (ulonglong)(uint3)local_8c;
  }
  bVar3 = QCameraParametersIntf::getZSLQueueDepth(this_01);
  local_8c = local_8c & 0xffffffffffffff00 | (ulonglong)bVar3;
  uVar1 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_01);
  local_8c._0_4_ = CONCAT13(uVar1,(uint3)local_8c);
  local_8c = local_8c & 0xffffffff00000000 | (ulonglong)(uint)local_8c;
  iVar4 = QCameraParametersIntf::isInstantCaptureEnabled(this_01);
  if (iVar4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = QCameraParametersIntf::getAecFrameBoundValue(this_01);
  }
  uStack132._0_5_ = CONCAT14(uVar1,(undefined4)uStack132);
  uStack132 = uStack132 & 0xffffff0000000000 | (ulonglong)(uint5)uStack132;
  iVar4 = QCameraParametersIntf::isFrameSyncEnabled(this_01);
  if (iVar4 != 0) {
    if (*(int *)(*(int *)(DAT_000bbf58 + 0xbbd54) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000bbf60 + 0xbbd70,0x2333,DAT_000bbf5c + 0xbbd64,
                          *(undefined4 *)(this + 0x5c));
    }
    local_8c._0_5_ = CONCAT14(1,(uint)local_8c);
    local_8c = local_8c & 0xffffff0000000000 | (ulonglong)(uint5)local_8c;
  }
  iVar4 = (**(code **)(*this_00 + 8))
                    (this_00,&local_90,*(undefined4 *)(DAT_000bbf64 + 0xbbd86),this);
  if (iVar4 == 0) {
    iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,7,
                               *(FuncDef91 **)(DAT_000bbf74 + 0xbbdbe),this);
    if (iVar4 == 0) {
      iVar4 = QCameraParametersIntf::isNoDisplayMode(this_01);
      if (iVar4 == 0) {
        iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,1,
                                   *(FuncDef91 **)(DAT_000bbf88 + 0xbbe16),this);
        property_get(DAT_000bbf8c + 0xbbe2c,acStack124,DAT_000bbf90 + 0xbbe2e);
        iVar5 = atoi(acStack124);
        if (iVar5 == 1) {
          QCameraChannel::setStreamSyncCB
                    ((QCameraChannel *)this_00,1,*(FuncDef103 **)(DAT_000bbf94 + 0xbbe42));
        }
      }
      else {
        iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,1,
                                   *(FuncDef91 **)(DAT_000bbf84 + 0xbbdfe),this);
      }
      if (iVar4 == 0) {
        iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,3,(FuncDef91 *)0x0,this);
        if (iVar4 == 0) {
          iVar4 = QCameraParametersIntf::isSecureMode(this_01);
          if ((iVar4 == 0) &&
             (iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,0xb,(FuncDef91 *)0x0,this),
             iVar4 != 0)) {
            if (*(int *)(*(int *)(DAT_000bbfb0 + 0xbbed8) + 0x20) != 0) {
              uVar7 = 0x237c;
              iVar5 = DAT_000bbfb4 + 0xbbeea;
              iVar6 = DAT_000bbfb8 + 0xbbef4;
              goto LAB_000bbe9a;
            }
          }
          else {
            property_get(DAT_000bbfbc + 0xbbf00,acStack124,DAT_000bbfc0 + 0xbbf02);
            iVar4 = atoi(acStack124);
            if ((iVar4 < 1) ||
               (iVar4 = addStreamToChannel(this,(QCameraChannel *)this_00,8,
                                           *(FuncDef91 **)(DAT_000bbfc4 + 0xbbf1a),this), iVar4 == 0
               )) {
              iVar4 = 0;
              *(int **)(this + 0x9b4) = this_00;
              goto LAB_000bbea6;
            }
            if (*(int *)(*(int *)(DAT_000bbfc8 + 0xbbf2a) + 0x20) != 0) {
              uVar7 = 0x238a;
              iVar5 = DAT_000bbfcc + 0xbbf3c;
              iVar6 = DAT_000bbfd0 + 0xbbf46;
              goto LAB_000bbe9a;
            }
          }
        }
        else if (*(int *)(*(int *)(DAT_000bbfa4 + 0xbbe82) + 0x20) != 0) {
          uVar7 = 0x2373;
          iVar5 = DAT_000bbfa8 + 0xbbe92;
          iVar6 = DAT_000bbfac + 0xbbe9c;
          goto LAB_000bbe9a;
        }
      }
      else if (*(int *)(*(int *)(DAT_000bbf98 + 0xbbe50) + 0x20) != 0) {
        uVar7 = 0x2361;
        iVar5 = DAT_000bbf9c + 0xbbe60;
        iVar6 = DAT_000bbfa0 + 0xbbe6a;
        goto LAB_000bbe9a;
      }
    }
    else if (*(int *)(*(int *)(DAT_000bbf78 + 0xbbdce) + 0x20) != 0) {
      uVar7 = 0x2343;
      iVar5 = DAT_000bbf7c + 0xbbde0;
      iVar6 = DAT_000bbf80 + 0xbbdea;
      goto LAB_000bbe9a;
    }
  }
  else if (*(int *)(*(int *)(DAT_000bbf68 + 0xbbd94) + 0x20) != 0) {
    uVar7 = 0x233a;
    iVar5 = DAT_000bbf6c + 0xbbda8;
    iVar6 = DAT_000bbf70 + 0xbbdb2;
LAB_000bbe9a:
    mm_camera_debug_log(1,1,iVar6,uVar7,iVar5,iVar4);
  }
  (**(code **)(*this_00 + 4))(this_00);
LAB_000bbea6:
  if (*piVar8 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}

