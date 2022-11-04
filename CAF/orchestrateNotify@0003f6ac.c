
/* qcamera::QCamera3HardwareInterface::orchestrateNotify(camera3_notify_msg*) */

void __thiscall
qcamera::QCamera3HardwareInterface::orchestrateNotify
          (QCamera3HardwareInterface *this,camera3_notify_msg *param_1)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_0003f730 + 0x3f6ba);
  local_14 = *piVar2;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x17c),*(uint *)(param_1 + 8),&local_18);
  if (iVar1 == 0) {
    if (local_18 != 0xffffffff) {
      *(uint *)(param_1 + 8) = local_18;
      (**(code **)(*(int *)(this + 0x74) + 4))(*(int *)(this + 0x74),param_1);
      goto LAB_0003f6fe;
    }
    iVar1 = *(int *)(*(int *)(DAT_0003f740 + 0x3f710) + 0x20);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_0003f734 + 0x3f6d2) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
LAB_0003f6fe:
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

