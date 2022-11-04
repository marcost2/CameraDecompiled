
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera2HardwareInterface::configureHDRBracketing() */

int __thiscall
qcamera::QCamera2HardwareInterface::configureHDRBracketing(QCamera2HardwareInterface *this)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  QCameraParametersIntf *this_00;
  char *pcVar9;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  
  piVar1 = *(int **)(DAT_000b67b0 + 0xb65d2);
  local_28 = *piVar1;
  iVar6 = *(int *)(DAT_000b67b4 + 0xb65de);
  if (*(int *)(iVar6 + 0x28) == 0) {
    iVar5 = *(int *)(*(int *)(DAT_000b67b8 + 0xb6642) + *(int *)(this + 0x5c) * 4);
    iVar8 = *(int *)(iVar5 + 0x2fd8);
  }
  else {
    mm_camera_debug_log(1,3,DAT_000b67c0 + 0xb65f6,0x1506,DAT_000b67bc + 0xb65ee);
    iVar5 = *(int *)(*(int *)(DAT_000b67c4 + 0xb6600) + *(int *)(this + 0x5c) * 4);
    iVar8 = *(int *)(iVar5 + 0x2fd8);
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b67cc + 0xb6636,0x151a,DAT_000b67c8 + 0xb6626,
                          (int)*(char *)(iVar5 + 0x2fe0),(int)*(char *)(iVar5 + 0x2fe1),iVar8);
    }
  }
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_4c = *(int *)(iVar5 + 0x2fdc);
  if (local_4c == 1) {
    this[0x1dc5] = (QCamera2HardwareInterface)0x1;
  }
  android::String8::String8((String8 *)&local_50);
  if (iVar8 != 0) {
    iVar7 = DAT_000b67d0 + 0xb6698;
    pcVar9 = (char *)(iVar5 + 0x2fe0);
    do {
      android::String8::appendFormat((char *)&local_50,iVar7,(int)*pcVar9);
      android::String8::append((char *)&local_50);
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar9 + 1;
    } while (iVar8 != 0);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar5 = QCameraParametersIntf::isHDR1xFrameEnabled(this_00);
  if ((iVar5 != 0) && (iVar5 = QCameraParametersIntf::isHDR1xExtraBufferNeeded(this_00), iVar5 != 0)
     ) {
    android::String8::appendFormat((char *)&local_50,DAT_000b67d8 + 0xb66d2,0);
    android::String8::append((char *)&local_50);
  }
  iVar5 = android::String8::length();
  if ((iVar5 != 0) && (uVar2 = android::String8::length(), uVar2 < 0x20)) {
    local_38 = 0;
    local_30 = 0;
    local_48 = 0;
    local_40 = 0;
    iVar5 = android::String8::length();
    __memcpy_chk(&local_48,local_50,iVar5 + -1,0x20);
  }
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b67e4 + 0xb6730,0x153b,DAT_000b67e0 + 0xb6726,&local_48);
  }
  iVar5 = QCameraParametersIntf::setHDRAEBracket((cam_exp_bracketing_t)this_00);
  if (iVar5 == 0) {
    if (*(int *)(iVar6 + 0x28) == 0) goto LAB_000b6792;
    uVar4 = 0x1549;
    iVar6 = DAT_000b67f0 + 0xb6784;
    local_40._4_4_ = 0;
    uVar3 = 3;
    iVar8 = DAT_000b67f4 + 0xb6790;
  }
  else {
    if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000b6792;
    uVar3 = 1;
    uVar4 = 0x153e;
    iVar6 = DAT_000b67e8 + 0xb676a;
    iVar8 = DAT_000b67ec + 0xb6772;
  }
  mm_camera_debug_log(1,uVar3,iVar8,uVar4,iVar6,local_40._4_4_,(undefined4)local_38,local_38._4_4_,
                      (undefined4)local_30,local_30._4_4_);
LAB_000b6792:
  android::String8::_String8((String8 *)&local_50);
  if (*piVar1 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

