
/* qcamera::QCamera3HardwareInterface::orchestrateResult(camera3_capture_result*) */

void __thiscall
qcamera::QCamera3HardwareInterface::orchestrateResult
          (QCamera3HardwareInterface *this,camera3_capture_result *param_1)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  int local_14;
  
  piVar2 = *(int **)(DAT_0003f7d0 + 0x3f75a);
  local_14 = *piVar2;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x17c),*(uint *)param_1,&local_18);
  if (iVar1 == 0) {
    if (local_18 != 0xffffffff) {
      *(uint *)param_1 = local_18;
      (***(code ***)(this + 0x74))(*(code ***)(this + 0x74),param_1);
      goto LAB_0003f79e;
    }
    iVar1 = *(int *)(*(int *)(DAT_0003f7e0 + 0x3f7b0) + 0x2c);
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_0003f7d4 + 0x3f772) + 0x20);
  }
  if (iVar1 != 0) {
    mm_camera_debug_log();
  }
LAB_0003f79e:
  if (*piVar2 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

