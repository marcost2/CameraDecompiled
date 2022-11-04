
/* qcamera::QCamera3HardwareInterface::orchestrateNotify(camera3_notify_msg*) */

void __thiscall
qcamera::QCamera3HardwareInterface::orchestrateNotify
          (QCamera3HardwareInterface *this,camera3_notify_msg *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_18;
  int local_14;
  
  piVar4 = *(int **)(DAT_00084ae4 + 0x84a6e);
  local_14 = *piVar4;
  iVar1 = FrameNumberRegistry::getFrameworkFrameNumber
                    ((FrameNumberRegistry *)(this + 0x1e4),*(uint *)(param_1 + 8),&local_18);
  if (iVar1 == 0) {
    if (local_18 != 0xffffffff) {
      *(uint *)(param_1 + 8) = local_18;
      (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),param_1);
      goto LAB_00084ab4;
    }
    if (*(int *)(*(int *)(DAT_00084af4 + 0x84ac6) + 0x20) == 0) goto LAB_00084ab4;
    uVar3 = 0x110d;
    iVar1 = DAT_00084af8 + 0x84ad8;
    iVar2 = DAT_00084afc + 0x84ae0;
  }
  else {
    if (*(int *)(*(int *)(DAT_00084ae8 + 0x84a86) + 0x20) == 0) goto LAB_00084ab4;
    uVar3 = 0x1109;
    iVar1 = DAT_00084aec + 0x84a96;
    iVar2 = DAT_00084af0 + 0x84a9e;
  }
  mm_camera_debug_log(1,1,iVar2,uVar3,iVar1);
LAB_00084ab4:
  if (*piVar4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

