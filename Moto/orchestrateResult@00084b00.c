
/* qcamera::QCamera3HardwareInterface::orchestrateResult(camera3_capture_result*) */

void __thiscall
qcamera::QCamera3HardwareInterface::orchestrateResult
          (QCamera3HardwareInterface *this,camera3_capture_result *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint local_18;
  int local_14;
  
  piVar5 = *(int **)(DAT_00084b84 + 0x84b0e);
  local_14 = *piVar5;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),*(uint *)param_1,&local_18);
  if (iVar1 == 0) {
    if (local_18 != 0xffffffff) {
      *(uint *)param_1 = local_18;
      (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),param_1);
      goto LAB_00084b54;
    }
    if (*(int *)(*(int *)(DAT_00084b94 + 0x84b66) + 0x2c) == 0) goto LAB_00084b54;
    uVar2 = 4;
    uVar4 = 0x10ef;
    iVar1 = DAT_00084b98 + 0x84b78;
    iVar3 = DAT_00084b9c + 0x84b80;
  }
  else {
    if (*(int *)(*(int *)(DAT_00084b88 + 0x84b26) + 0x20) == 0) goto LAB_00084b54;
    uVar2 = 1;
    uVar4 = 0x10eb;
    iVar1 = DAT_00084b8c + 0x84b36;
    iVar3 = DAT_00084b90 + 0x84b3e;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar4,iVar1);
LAB_00084b54:
  if (*piVar5 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

