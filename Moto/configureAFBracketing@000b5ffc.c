
/* qcamera::QCamera2HardwareInterface::configureAFBracketing(bool) */

int __thiscall
qcamera::QCamera2HardwareInterface::configureAFBracketing
          (QCamera2HardwareInterface *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  QCameraParametersIntf *this_00;
  
  piVar8 = *(int **)(DAT_000b61b4 + 0xb600c);
  iVar1 = *piVar8;
  iVar6 = *(int *)(DAT_000b61b8 + 0xb601a);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b61c0 + 0xb6032,0x1448,DAT_000b61bc + 0xb602a);
  }
  this_00 = (QCameraParametersIntf *)(this + 0x4ac);
  iVar2 = QCameraParametersIntf::isUbiRefocus(this_00);
  iVar4 = *(int *)(*(int *)(DAT_000b61c4 + 0xb6050) + *(int *)(this + 0x5c) * 4);
  iVar7 = iVar4 + 0x383c;
  if (iVar2 != 0) {
    iVar7 = iVar4 + 0x3848;
  }
  if (*(int *)(iVar6 + 0x28) != 0) {
    iVar2 = DAT_000b61d8 + 0xb6086;
    mm_camera_debug_log(1,3,DAT_000b61dc + 0xb6094,0x145c,iVar2,0,*(undefined *)(iVar7 + 2));
    if (*(int *)(iVar6 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000b61e0 + 0xb60b6,0x145c,iVar2,1,*(undefined *)(iVar7 + 3));
      if (*(int *)(iVar6 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000b61e4 + 0xb60dc,0x145c,iVar2,2,*(undefined *)(iVar7 + 4));
        if (*(int *)(iVar6 + 0x28) != 0) {
          mm_camera_debug_log(1,3,DAT_000b61e8 + 0xb6100,0x145c,iVar2,3,*(undefined *)(iVar7 + 5));
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000b61ec + 0xb6124,0x145c,iVar2,4,*(undefined *)(iVar7 + 6))
            ;
          }
        }
      }
    }
  }
  iVar2 = QCameraParametersIntf::commitAFBracket((cam_af_bracketing_t)this_00);
  if (iVar2 == 0) {
    if (param_1 != false) {
      QCameraParametersIntf::set3ALock(this_00,true);
      this[0xab9] = (QCamera2HardwareInterface)0x1;
    }
    if (*(int *)(iVar6 + 0x28) == 0) goto LAB_000b619e;
    uVar5 = 0x1468;
    iVar6 = DAT_000b61d0 + 0xb6190;
    uVar3 = 3;
    iVar4 = DAT_000b61d4 + 0xb619c;
  }
  else {
    if (*(int *)(iVar6 + 0x20) == 0) goto LAB_000b619e;
    uVar3 = 1;
    uVar5 = 0x1461;
    iVar6 = DAT_000b61c8 + 0xb6164;
    iVar4 = DAT_000b61cc + 0xb616c;
  }
  mm_camera_debug_log(1,uVar3,iVar4,uVar5,iVar6);
LAB_000b619e:
  if (*piVar8 != iVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

