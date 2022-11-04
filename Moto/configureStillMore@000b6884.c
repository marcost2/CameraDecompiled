
/* qcamera::QCamera2HardwareInterface::configureStillMore() */

int __thiscall
qcamera::QCamera2HardwareInterface::configureStillMore(QCamera2HardwareInterface *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  QCameraParametersIntf *this_00;
  uint uVar7;
  uint uVar8;
  int local_c0;
  char acStack180 [100];
  uint local_50;
  int local_28;
  
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  piVar6 = *(int **)(DAT_000b69b8 + 0xb6896);
  local_28 = *piVar6;
  iVar2 = QCameraParametersIntf::isSeeMoreEnabled(this_00);
  if ((iVar2 == 0) && (iVar2 = QCameraParametersIntf::isLTMForSeeMoreEnabled(this_00), iVar2 == 0))
  {
    local_c0 = QCameraParametersIntf::setToneMapMode(this_00,0,true);
    if ((local_c0 != 0) && (*(int *)(*(int *)(DAT_000b69bc + 0xb6994) + 0x24) != 0)) {
      mm_camera_debug_log(1,2,DAT_000b69c4 + 0xb69ae,0x1597,DAT_000b69c0 + 0xb69a6);
    }
  }
  else {
    local_c0 = 0;
  }
  QCameraParametersIntf::set3ALock(this_00,true);
  this[0xab9] = (QCamera2HardwareInterface)0x1;
  QCameraParametersIntf::setTintless(SUB41(this_00,0));
  iVar2 = QCameraParametersIntf::getStillMoreCapability(this_00);
  QCameraParametersIntf::getDynamicImgData();
  iVar3 = QCameraParametersIntf::isSeeMoreEnabled(this_00);
  property_get(DAT_000b69c8 + 0xb68f8,acStack180,DAT_000b69cc + 0xb68fa);
  uVar8 = (uint)(iVar2 << 8) >> 0x18;
  uVar4 = local_50;
  if (uVar8 < local_50) {
    uVar4 = uVar8;
  }
  uVar7 = (uint)(iVar2 << 0x10) >> 0x18;
  if (local_50 < uVar7) {
    uVar4 = uVar8;
  }
  bVar1 = (byte)uVar4;
  if (iVar3 != 0) {
    bVar1 = 1;
  }
  uVar4 = atoi(acStack180);
  uVar5 = uVar4 & 0xff;
  if (uVar5 != 0) {
    if (uVar8 < uVar5) {
      uVar4 = uVar8;
    }
    if (uVar5 < uVar7) {
      uVar4 = uVar8;
    }
    bVar1 = (byte)uVar4;
  }
  QCameraParametersIntf::setStillMoreSettings(this_00,(uint)bVar1);
  if (*(int *)(*(int *)(DAT_000b69d0 + 0xb694c) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b69d8 + 0xb6968,0x15c3,DAT_000b69d4 + 0xb695c,bVar1);
  }
  if (*piVar6 == local_28) {
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

