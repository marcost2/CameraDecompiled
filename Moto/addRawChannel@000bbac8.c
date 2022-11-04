
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::addRawChannel() */

int __thiscall qcamera::QCamera2HardwareInterface::addRawChannel(QCamera2HardwareInterface *this)

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
  ulonglong local_38;
  undefined8 uStack48;
  undefined4 local_28;
  int local_20;
  
  piVar8 = *(int **)(DAT_000bbc64 + 0xbbad6);
  local_20 = *piVar8;
  if (*(int **)(this + 0x9c8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c8) + 4))();
    *(undefined4 *)(this + 0x9c8) = 0;
  }
  this_00 = (int *)operator_new(0x34);
  QCameraChannel::QCameraChannel
            ((QCameraChannel *)this_00,**(uint **)(this + 0x60),
             (mm_camera_ops_t *)(*(uint **)(this + 0x60))[1]);
  this_01 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar3 = QCameraParametersIntf::getofflineRAW(this_01);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*this_00 + 8))(this_00,0,0,0);
    if (iVar3 == 0) goto LAB_000bbbb2;
    if (*(int *)(*(int *)(DAT_000bbc78 + 0xbbb96) + 0x20) != 0) {
      uVar6 = 0x22dd;
      iVar4 = DAT_000bbc7c + 0xbbba8;
      iVar5 = DAT_000bbc80 + 0xbbbb2;
      goto LAB_000bbc38;
    }
  }
  else {
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uVar1 = QCameraParametersIntf::getZSLBackLookCount(this_01);
    local_38._0_6_ = CONCAT15(uVar1,(uint5)local_38);
    local_38 = local_38 & 0xffff000000000000 | (ulonglong)(uint6)local_38;
    uVar1 = QCameraParametersIntf::getZSLBurstInterval(this_01);
    local_38._0_7_ = CONCAT16(uVar1,(uint6)local_38);
    local_38._0_5_ = CONCAT14(1,(undefined4)local_38);
    local_38 = local_38 & 0xff00000000000000 | (ulonglong)(uint7)local_38 & 0xffffff0000000000 |
               (ulonglong)(uint5)local_38;
    bVar2 = QCameraParametersIntf::getMaxUnmatchedFramesInQueue(this_01);
    local_38 = local_38 & 0xffffffffffffff | (ulonglong)bVar2 << 0x38;
    iVar3 = (**(code **)(*this_00 + 8))
                      (this_00,&local_38,*(undefined4 *)(DAT_000bbc68 + 0xbbb54),this);
    if (iVar3 == 0) {
LAB_000bbbb2:
      iVar3 = QCameraParametersIntf::isZSLMode(this_01);
      if (iVar3 == 0) {
        iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,7,
                                   *(FuncDef91 **)(DAT_000bbc84 + 0xbbbc6),this);
        if (iVar3 != 0) {
          if (*(int *)(*(int *)(DAT_000bbc88 + 0xbbbd6) + 0x20) == 0) goto LAB_000bbc3c;
          uVar6 = 0x22e8;
          iVar4 = DAT_000bbc8c + 0xbbbe6;
          iVar5 = DAT_000bbc90 + 0xbbbf0;
          goto LAB_000bbc38;
        }
      }
      iVar3 = QCameraParametersIntf::getofflineRAW(this_01);
      if (iVar3 == 0) {
        pFVar7 = *(FuncDef91 **)(DAT_000bbc94 + 0xbbc10);
      }
      else {
        pFVar7 = (FuncDef91 *)0x0;
      }
      iVar3 = addStreamToChannel(this,(QCameraChannel *)this_00,8,pFVar7,this);
      if (iVar3 == 0) {
        iVar3 = 0;
        *(int **)(this + 0x9c8) = this_00;
        goto LAB_000bbc44;
      }
      if (*(int *)(*(int *)(DAT_000bbc98 + 0xbbc20) + 0x20) == 0) goto LAB_000bbc3c;
      uVar6 = 0x22f6;
      iVar4 = DAT_000bbc9c + 0xbbc30;
      iVar5 = DAT_000bbca0 + 0xbbc3a;
    }
    else {
      if (*(int *)(*(int *)(DAT_000bbc6c + 0xbbb62) + 0x20) == 0) goto LAB_000bbc3c;
      uVar6 = 0x22d6;
      iVar4 = DAT_000bbc70 + 0xbbb74;
      iVar5 = DAT_000bbc74 + 0xbbb7e;
    }
LAB_000bbc38:
    mm_camera_debug_log(1,1,iVar5,uVar6,iVar4,iVar3);
  }
LAB_000bbc3c:
  (**(code **)(*this_00 + 4))(this_00);
LAB_000bbc44:
  if (*piVar8 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

