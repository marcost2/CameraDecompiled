
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::addCaptureChannel() */

int __thiscall
qcamera::QCamera2HardwareInterface::addCaptureChannel(QCamera2HardwareInterface *this)

{
  undefined uVar1;
  byte bVar2;
  int *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  FuncDef91 *pFVar7;
  QCameraParametersIntf *this_01;
  int *piVar8;
  ulonglong local_90;
  undefined8 uStack136;
  undefined4 local_80;
  char acStack120 [92];
  int local_1c;
  
  piVar8 = *(int **)(DAT_000b7d48 + 0xb7afe);
  local_1c = *piVar8;
  if (*(int **)(this + 0x9b8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9b8) + 4))();
    *(undefined4 *)(this + 0x9b8) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraPicChannel::QCameraPicChannel
            ((QCameraPicChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  uStack136 = 0;
  local_80 = 0;
  if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
    local_90 = 1;
  }
  else {
    local_90 = 0;
    uVar1 = QCameraParametersIntf::getZSLBackLookCount((QCameraParametersIntf *)(this + 0x4ac));
    local_90._0_6_ = CONCAT15(uVar1,(uint5)local_90);
    local_90 = local_90 & 0xffff000000000000 | (ulonglong)(uint6)local_90;
    uVar1 = QCameraParametersIntf::getZSLQueueDepth((QCameraParametersIntf *)(this + 0x4ac));
    local_90._0_5_ = CONCAT14(uVar1,(undefined4)local_90);
    local_90 = local_90 & 0xffffff0000000000 | (ulonglong)(uint5)local_90;
  }
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  bVar2 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_01);
  local_90 = local_90 & 0xffffffffffffff | (ulonglong)bVar2 << 0x38;
  iVar3 = (**(code **)(*this_00 + 8))
                    (this_00,&local_90,*(undefined4 *)(DAT_000b7d4c + 0xb7b7c),this);
  if (iVar3 == 0) {
    iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,7,
                               *(FuncDef91 **)(DAT_000b7d5c + 0xb7bb0),this);
    if (iVar3 == 0) {
      if (this[0xa9e] == (QCamera2HardwareInterface)0x0) {
        iVar3 = QCameraParametersIntf::getQuadraCfa(this_01);
        if ((iVar3 != 0) ||
           (iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,2,(FuncDef91 *)0x0,this),
           iVar3 == 0)) goto LAB_000b7c9a;
        if (*(int *)(*(int *)(DAT_000b7d94 + 0xb7c56) + 0x20) != 0) {
          uVar6 = 0x23e6;
          iVar4 = DAT_000b7d98 + 0xb7c68;
          iVar5 = DAT_000b7d9c + 0xb7c72;
          goto LAB_000b7bd8;
        }
      }
      else {
        iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,1,
                                   *(FuncDef91 **)(DAT_000b7d6c + 0xb7c0a),this);
        if (iVar3 == 0) {
          property_get(DAT_000b7d7c + 0xb7c7e,acStack120,DAT_000b7d80 + 0xb7c80);
          iVar3 = atoi(acStack120);
          if (iVar3 == 1) {
            QCameraChannel::setStreamSyncCB
                      ((QCameraChannel *)this_00,1,*(FuncDef103 **)(DAT_000b7d84 + 0xb7c94));
          }
LAB_000b7c9a:
          iVar3 = QCameraParametersIntf::getofflineRAW(this_01);
          if ((iVar3 != 0) ||
             (iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,3,(FuncDef91 *)0x0,this),
             iVar3 == 0)) {
            property_get(DAT_000b7da0 + 0xb7ce4,acStack120,DAT_000b7da4 + 0xb7ce6);
            iVar3 = atoi(acStack120);
            pFVar7 = (FuncDef91 *)0x0;
            if (iVar3 < 1) {
              iVar3 = QCameraParametersIntf::getofflineRAW(this_01);
              if (iVar3 != 0) goto LAB_000b7d04;
            }
            else {
              pFVar7 = *(FuncDef91 **)(DAT_000b7da8 + 0xb7cf8);
LAB_000b7d04:
              iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,8,pFVar7,this);
              if (iVar3 != 0) {
                if (*(int *)(*(int *)(DAT_000b7dac + 0xb7d1c) + 0x20) != 0) {
                  uVar6 = 0x2402;
                  iVar4 = DAT_000b7db0 + 0xb7d30;
                  iVar5 = DAT_000b7db4 + 0xb7d3a;
                  goto LAB_000b7bd8;
                }
                goto LAB_000b7bdc;
              }
            }
            iVar3 = 0;
            *(int **)(this + 0x9b8) = this_00;
            goto LAB_000b7be4;
          }
          if (*(int *)(*(int *)(DAT_000b7d88 + 0xb7cba) + 0x20) != 0) {
            uVar6 = 0x23f0;
            iVar4 = DAT_000b7d8c + 0xb7cce;
            iVar5 = DAT_000b7d90 + 0xb7cd8;
            goto LAB_000b7bd8;
          }
        }
        else if (*(int *)(*(int *)(DAT_000b7d70 + 0xb7c1a) + 0x20) != 0) {
          uVar6 = 0x23d8;
          iVar4 = DAT_000b7d74 + 0xb7c2c;
          iVar5 = DAT_000b7d78 + 0xb7c36;
          goto LAB_000b7bd8;
        }
      }
    }
    else if (*(int *)(*(int *)(DAT_000b7d60 + 0xb7bc0) + 0x20) != 0) {
      uVar6 = 0x23ce;
      iVar4 = DAT_000b7d64 + 0xb7bd0;
      iVar5 = DAT_000b7d68 + 0xb7bda;
      goto LAB_000b7bd8;
    }
  }
  else {
    if (*(int *)(*(int *)(DAT_000b7d50 + 0xb7b8a) + 0x20) == 0) goto LAB_000b7bdc;
    uVar6 = 0x23c5;
    iVar4 = DAT_000b7d54 + 0xb7b9a;
    iVar5 = DAT_000b7d58 + 0xb7ba4;
LAB_000b7bd8:
    mm_camera_debug_log(1,1,iVar5,uVar6,iVar4,iVar3);
  }
LAB_000b7bdc:
  (**(code **)(*this_00 + 4))(this_00);
LAB_000b7be4:
  if (*piVar8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

