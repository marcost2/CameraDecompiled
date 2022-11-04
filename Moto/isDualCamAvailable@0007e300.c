
/* qcamera::QCamera2Factory::isDualCamAvailable(int) */

undefined4 __thiscall
qcamera::QCamera2Factory::isDualCamAvailable(QCamera2Factory *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int local_40;
  camera_info acStack60 [28];
  int local_20;
  
  piVar3 = *(int **)(DAT_0007e384 + 0x7e30e);
  local_20 = *piVar3;
  local_40 = 1;
  if (0 < *(int *)(this + 4)) {
    uVar2 = 0;
    do {
      if ((param_1 == 0) &&
         (QCamera2HardwareInterface::getCapabilities(uVar2,acStack60,(cam_sync_type_t *)&local_40),
         local_40 == 2)) {
        if (*(int *)(*(int *)(DAT_0007e388 + 0x7e35e) + 0x28) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = 1;
          mm_camera_debug_log(1,3,DAT_0007e390 + 0x7e378,0x2b8,DAT_0007e38c + 0x7e370);
        }
        goto LAB_0007e346;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(this + 4));
  }
  uVar1 = 0;
LAB_0007e346:
  if (*piVar3 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

